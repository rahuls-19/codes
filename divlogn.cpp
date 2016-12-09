#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
long long int div(long long int n){
	long long int sum =0,i;
	for(i=1;i<=sqrt(n);i++){
		if(n%i==0){
			
			if(n/i==i|| i==1){
				sum=sum+i;
				}
			
			else
				sum=sum+i+n/i;
			}
	}
return sum;
}
int main(){
	long long int t,n;
	scanf("%lld",&t);
	while(t--){
		long long int count = 0;
		scanf("%lld",&n);
		count = div(n);
		printf("%lld\n",count);
}
return 0;
}
