#include<stdio.h>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
long long int p(long long int x,long long int y){
	long long int res = 1;
	for(int i=1;i<=y;i++){
		res = res*x;
	}
	return res; 
}
int main(){
	long long int n;
	scanf("%lld",&n);
	long long int temp=1,count=0;
		 if (n < 1)
        printf("0\n");
//	printf("%lld\n",temp-1);
	else
	printf("%lld\n",p(2,log2(n)));
	return 0;
}
