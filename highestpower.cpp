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
	while(n>0){
		while( n > 0 && n % 2 == 0){
	    n=n/2;
		count++;
	}
		while(n > 0  && n % 2 == 1){
			count++;
			temp = count;
			n=n/2;
		}
	}
	printf("%lld\n",temp-1);
	 if (n < 1)
        printf("0\n");
        else
	printf("%lld\n",p(2,temp-1));
	return 0;
}
