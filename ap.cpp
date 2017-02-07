#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,a[10005],i;
	scanf("%d",&t);
	while(t--){
		int flag =0 ;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			}
		sort(a,a+n);
		int diff= a[1]-a[0];
		for(i=1;i<n-1;i++){
			if(diff!=(a[i+1]-a[i]) && flag ==0){
				printf("No\n");
				flag = 1;
			}
		}
		if(flag == 0){
			printf("Yes\n");
		}		
		
	}
	return 0;
}
