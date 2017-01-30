#include<stdio.h>
int power(int a, int n, int p)
{
    int res = 1;      
    a = a % p;
 
    while (n > 0)
    {

        if (n & 1)
            res = (res*a) % p;
 
        
        n = n>>1; 
        a = (a*a) % p;
    }
    return res;
}
int prime(int n){
	int i,k=3;
	if(n<=1 || n==4)
		return 0;
	if(n<=3)
		return 1;
	while(k>0){
		int a = 2 + rand()%(n-4);
		if(power(a,n-1,n) != 1)
			return 0;
		k--;
	}
	
	return 1;
}
int main(){
	int n,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int res = prime(n);
		if(res==1)
			printf("%d is prime number\n",n);
		else
			printf("%d is not prime number\n",n);
	}
}
