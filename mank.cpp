#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,t;
	scanf("%d",&t);
	char s[100005];
	while(t--){
		int count=0;
		scanf("%s",s);
		for(i=0;i<strlen(s);i++){
			if(s[i]=='A'|| s[i]== 'E'|| s[i]== 'I'|| s[i] == 'O'|| s[i]== 'U'|| s[i] == 'a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]== 'u')
			count++;
			}
	printf("%d\n",count);
}
return 0;
}
