#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n,i,k;
	int count=0;
	scanf("%d%d",&n,&k);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);

			}
	sort(a,a+n);
	int sum=0;
	for(i=0;i<n;i++){
		sum=sum+a[i];
		if(sum<=k){
			count++;
			}
		}
	printf("%d\n",count);
return 0;
}

	
