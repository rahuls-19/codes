#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
	
	int t,num,sum=0;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&num);
		if(num>0)
			sum=sum+num;
		}
	printf("%d\n",sum);
	return 0;
}
