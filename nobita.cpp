#include<bits/stdc++.h>
using namespace std;
long long int k=1000000007;
int main(void){
	long long int t,i,n,m;
	scanf("%lld",&t);
	long long int a[100006];
	while(t--){
		long long int sum=0;
		scanf("%lld%lld",&m,&n);
		a[1]=1;
		a[2]=10;
		for(i=3;i<=100001;i++){
                        a[i]=((a[i-1]%k)+(a[i-2]%k)+(a[i-2]%k))%k;

		//	cout << a[i] <<endl;
                        }
                for(i=m;i<=n;i++){
                        sum= ((sum%k)+(a[i]%k))%k;
                        }

	printf("%lld\n",sum);

}
return 0;
}
				
