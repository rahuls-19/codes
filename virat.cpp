#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    	multiset <long long int> s;
	multiset <long long int> :: iterator it1,it2;
   long long int n,i,j,m[4][1000006],q;
    scanf("%lld",&n);
    for(i=0;i<3;i++){
        for(j=0;j<n;j++){
            scanf("%lld",&m[i][j]);
        }
    }
    for(j=0;j<n;j++){
        long long int key= m[0][j]+m[1][j]+m[2][j];
        
        s.insert(key);
    }
    
    scanf("%lld",&q);
    while(q--){
        long long int l;
        scanf("%lld",&l);
        it1 = s.begin();
    
       
        if(l > s.size())
            printf("-1\n");
        else
        
           {
                for(int i = 1;i < l;i++)
                 it1++;
                printf("%lld\n",*it1);
                 s.erase(it1);
           }
        
        
    }
    
    return 0;
}

