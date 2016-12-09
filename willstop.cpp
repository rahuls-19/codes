#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,i;
	scanf("%lld",&n);
	if(n>1){
	while(n%2==0){
		n=n/2;
		}
	if(n==1)
		printf("TAK\n");
	else 
		printf("NIE\n");
}
	else
		printf("TAK\n");
	return 0;
}
