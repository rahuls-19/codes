#include<stdio.h>
int main(void){
	long long int t,ans1,i;
	double ans,num;
	scanf("%lld",&t);
	while(t--){
		scanf("%lf",&num);
		for(i=1;i<=10007;i++){
			ans=i*num;
			ans1=(long long int)ans;
			//printf("%lld  %lf",&ans1,ans);
			if(ans1==ans){
				printf("%lld\n",i);
				break;
				}
		}
	}
	return 0;
}
					
			
