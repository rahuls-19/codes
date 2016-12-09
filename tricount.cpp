#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t,n,res;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		if(n%2==0)
			res = n*(n+2)*((2*n)+1)/8;
		else
			res = (n*(n+2)*((2*n)+1)-1)/8;
		printf("%lld\n",res);
}
	return 0;
}
