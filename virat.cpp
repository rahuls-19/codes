#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t,n,i;
	scanf("%lld",&t);
	while(t--){
		long long int a[1000005],sum=0;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			sum = sum+a[i];
			}
		if((sum-n)%2==1)
			printf("Virat\n");
		else
			printf("Alastair\n");
		}


 return 0;
}		
