#include <bits/stdc++.h>
using namespace std;
int power(int x, unsigned int y, int p)
{
    int res = 1;      
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
 
bool miillerTest(int d, int n)
{
    int a = 2 + rand() % (n - 4);
 
    int x = power(a, d, n);
 
    if (x == 1  || x == n-1)
       return true;
 
    while (d != n-1)
    {
        x = (x * x) % n;
        d *= 2;
 
        if (x == 1)      return false;
        if (x == n-1)    return true;
    }
 
    
    return false;
}
 
bool isPrime(int n, int k)
{

    if (n <= 1 || n == 4)  return false;
    if (n <= 3) return true;
    int d = n - 1;
    while (d % 2 == 0)
        d /= 2;
 
    for (int i = 0; i < k; i++)
         if (miillerTest(d, n) == false)
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
