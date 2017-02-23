#include<stdio.h>
#include<string.h>
int main(){
	int i,n,t;
	char s[10000],res;
	
	scanf("%d",&t);
	while(t--){
	scanf("%s",s);
	int count[1000] = {0},max=-1;
	for(i=0;i<strlen(s);i++){
		count[s[i]]++;
	}
	for(i=0;i<strlen(s);i++){
		if(max < count[s[i]]){
			max = count[s[i]];
			res = s[i];
		}
		else if(max == count[s[i]]){
		    if(res > s[i]){
		        res = s[i];
		    }
		}
	}
	printf("%c\n",res);
	
	}
	return 0;
}
