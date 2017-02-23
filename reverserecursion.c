#include<stdio.h>
#include<string.h>
void reverse(char *s){
	if(*s){
	  	reverse((s+1));
		printf("%c",*s);
	}
}
int main(){
	char s[1000];
	scanf("%s",s);
	reverse(s);
	return 0;
}
