#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100003],q,t,e,i;
    int max = INT_MIN;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
    	if(a[i]>=max){
    		max=a[i];
    	}
    }
    scanf("%d",&q);
    while(q--){
    	scanf("%d",&t);
    	if(t==1){
    	scanf("%d",&e);
    	if(e >= max){
    		max=e;
    	}
        }
        else
        	printf("%d\n",max);
    }
    return 0;
}

