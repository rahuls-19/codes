#include<bits/stdc++.h>
using namespace std;
int main(void){
	long long int t,res,res1,i,n;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		if(n==1)
			printf("1\n");
		else{
			for(i=1;i<50;i++){
				res=pow(2,i);
				res1= pow(2,i+1);
				if(res==n|| res1 > n && res < n)
					printf("%lld\n",res);
				}
		}
	}
return 0;
}
