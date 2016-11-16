#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int a,b,sum=0,i;
	scanf("%lld%lld",&a,&b);
	for(i=a;i<=b;i++){
		if(i%2==1){
			sum =sum+i;
				}
		}
	printf("%lld\n",sum);
return 0;
}
