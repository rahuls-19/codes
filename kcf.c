#include<stdio.h>
int findkcf(int a,int b,int k){
	int n,i,count=0;
	if(a<b){
		 n = a;
	}
	else{
		n = b;
	}
	for(i=2;i<=n;i++){
		if(a%i == 0 && b%i == 0)
			count++;
		if(count == k)
			return i;
	}
	return -1;
}
int main(){
	int t,num1,num2,k;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d",&num1,&num2,&k);
		int res = findkcf(num1,num2,k);
		printf("%d\n",res);
	}
	return 0;
}
