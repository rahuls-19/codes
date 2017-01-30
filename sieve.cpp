#include<bits/stdc++.h>
using namespace std;
void prime(int n){
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
    for (int p=2; p<=n; p++)
       if (prime[p])
          cout << p << " ";
    printf("\n");
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