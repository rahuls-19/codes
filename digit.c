#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char x[1000007];
	
	long long int k,i;
	scanf("%s%d",x,&k);
	if(k >= strlen(x)){
		for(i=0;i<strlen(x);i++)
			printf("9");
}
	else{
		for(i=0;i<k;i++)
			printf("9");
		for(i=k;i<strlen(x);i++)
			printf("%c",x[i]);
	}
return 0;
}
