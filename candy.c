#include<stdio.h>
int main(void){
	while(1){
		int t,i,a[i];
		scanf("%d",&t);
		if(t==-1)
			break;
		else{
			long long int sum=0;
			for(i=1;i<=t;i++){
				scanf("%d",&a[i]);
				sum = sum+a[i];	
				}
			if(sum%t==0){
					long long int res=0,k=0;
					k=sum/t;
				for(i=1;i<=t;i++){
					if(a[i] <=k)
						res = res + (k-a[i]);
					}
				printf("%lld\n",res);		
			}
			else
				printf("-1\n");			
				
			}



		}


	return 0;
}
