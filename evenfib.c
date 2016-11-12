#include<stdio.h>
long long int m = 1000000007;
long long int fib(long long int n){
	if(n<1)
		return n;
	if(n==1)
		return 2;
	
		return (4*fib(n-1) + fib(n-2)); 
}
int main(){
	long long int t,n,i,res;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		res = fib(n);
        printf("%lld\n",res);


}
return 0;
}
