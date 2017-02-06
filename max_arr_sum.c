#include<stdio.h>
int gcd(int a,int b){
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int res(int a[],int n){
	int i,ans = a[0];
	for(i=1;i<n;i++){
		ans = gcd(a[i],ans);
	}
	return ans;
}
int main(){
	int n,i,a[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%d\n",res(a,n)*n);
}
