#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void){
	int t,i;
	char s[35];
	scanf("%d",&t);
	while(t--){
		scanf("%s",s);
		printf("%c",s[0]);
		for(i=1;i<strlen(s);i++){
			if(s[i]==s[i-1])
				continue;
			else
				printf("%c",s[i]);
			}
		printf("\n");
	}
	return 0;
}
