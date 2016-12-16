#include<stdio.h>
int main(){
	int n,a[1000005],i,j,k,result=0,product;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			product = a[i]*a[j];
		for(k=0;k<n;k++){
			if(a[k]==product){
				result++;
				break;}
			        
		        	}
			}
		}


printf("%d",result);
return 0;
}
