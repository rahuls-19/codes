#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
long long int power(long long int x,long long int y,long long int p)
{
    long long int res = 1;     
    x = x % p;  
    while (y > 0)
    {
        
        if (y & 1)
            res = (res*x) % p;
 
    
        y = y>>1; 
        x = (x*x) % p;
    }
    return res;
}
int miller(long long int d,long long int n){
	long long int a = 2 + rand() % (n - 4);
	long long int x = power(a,d,n);
	if(x==1 || x==n-1)
		return 1;
	while(d!=n-1){
		x =  ((x%n)*(x%n)) %n;
		d = d*2;
		if(x == 1)
			return 0;
		if(x == n-1){
			return 1;
		}
	}
	return 0;
	
}
bool isPrime(int n, int k)
{
    if (n <= 1 || n == 4)  return false;
    if (n <= 3) return true;
 
    int d = n - 1;
    while (d % 2 == 0)
        d /= 2;
 
    for (int i = 0; i < k; i++)
         if (!miller(d, n))
              return false;
 
    return true;
}
int main()
{
    int k = 10; 
	long long int t,r,l;
	scanf("%lld",&t);
	while(t--){
	scanf("%lld%lld",&l,&r);
    for (long long int n = l; n <= r; n++)
       if (isPrime(n, k))
          printf("%lld\n",n);
          printf("\n");
}
    return 0;
}
