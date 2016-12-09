#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,i,n,m[1004],w[1004];
	scanf("%d",&t);
	while(t--){
		long long int sum=0;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&m[i]);
				}
		for(i=0;i<n;i++){
                        scanf("%d",&w[i]);
                                }
		sort(m,m+n);
		sort(w,w+n);
		for(i=0;i<n;i++){
                        sum=sum+m[i]*w[i];
                                }
		printf("%lld\n",sum);
}
return 0;
}

