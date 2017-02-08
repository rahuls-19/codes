#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,q,i,a[1000007];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	scanf("%d",&q);
	while(q--){
		scanf("%d%c",&k,&temp);
		if(temp == 'S'){
			printf("%d\n",a[n-k-1]);
		}
		else{
			printf("%d\n",a[k-1]);
		}
	}
	return 0;
}
