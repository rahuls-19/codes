#include<bits/stdc++.h>
using namespace std;
int main(void){
	char s[105];
	int i;
	scanf("%s",s);
	for(i=0;i<strlen(s);i++){
		if(  'A' <= s[i] && s[i] <= 'Z')
			s[i]=s[i]+32;
		else
			s[i]=s[i]-32;
		        
		}
	printf("%s\n",s);
}
