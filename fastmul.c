#include<stdio.h>
long long int mul(long long int a,long long int b,long long int c){
	if(b==0)
		return 0;
	long long int ret=mul(a,b>>1,c);
	ret =(ret*ret)%c;
	if(b&1)
		ret=(ret+a)%c;
	return ret;
}
int main(){
	long long int a,b,ans,c;
	scanf("%d%d%d",&a,&b,&c);
	ans=mul(a,b,c);
	printf("%d",ans);
}
