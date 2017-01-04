#include<stdio.h>
int main(){
	int i,j,sum,a[10000],n,flag=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&sum);
	for(i=1;i<=n;i++){
		int res=0;
			
		for(j=i;j<=n;j++){
			
			res=res + a[j];
			if(res==sum){
				printf("Sum found between indexes %d and %d\n",i,j);
				flag=1;
				break;
			}
}		if(flag==1)
			break;
		
		}
	if(flag==0)
		printf("No Subarray Found\n");
	return 0;
}
