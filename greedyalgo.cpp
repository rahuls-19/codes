#include<bits/stdc++.h>
using namespace std;
int main(void){
	int i,t,n,x;
	scanf("%d",&t);
	while(t--){
		int count=0;
		scanf("%d%d",&n,&x);
		int a[n];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
				}
		sort(a,a+n);
		for(i=0;i<n;i++){
                        printf("%d",a[i]);
                                }

		int sum=0;
		for(i=0;i<n;i++){
			sum=sum+a[i];
			if(sum<=x){
				count++;
				}
				}
		printf("%d\n",count);
}
return 0;
}
