#include<bits/stdc++.h>
using namespace std;
int main(void){
	char s[101],t[101];
	int i,k,res;
	scanf("%s%s",s,t);
	scanf("%d",&k);
	for(i=0;i<strlen(t);i++){
			if(t[i]>='A' && t[i] <= 'Z'){
				printf("No\n");
				return 0;
					}
		}		
		for(i=0;i<strlen(s);i++){
			if(s[i]!=t[i]){
				break;
				}
				}
	        
				
		res= strlen(s)-i + strlen(t) - i;
		if(res <= k){
			if((k-res)%2!=0&&(k-res)<strlen(s))
				printf("No\n");
			else
			printf("Yes\n");}
		else
			printf("No\n");

return 0;
}
