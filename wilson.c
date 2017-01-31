#include<stdio.h>
void prime(int n){
    int i , res=1;
	for(i=1;i<n;i++){
		 res = ((res%n)*(i%n))%n;
	}
	if(res == -1 || res == n-1)
		printf("%d number is prime\n",n);
	else
		printf("%d number is not prime\n",n);
}

int main()
 { 
     int n,t;
   scanf("%d",&t);
   while(t--){
    scanf("%d",&n);
    prime(n);
   }
	return 0;
}
