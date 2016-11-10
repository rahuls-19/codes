#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main(void){
	int t,i,n;
	char s[1000003];
	scanf("%d",&t);
	while(t--){
		scanf("%s",s);
		n=strlen(s);
		for(i=0;i<n-1;i++){
			if(s[i]==2 && s[i+1]==1){
				printf("The streak is broken!\n");
				return 0;
					}
				}
		if(atoi(s)%21==0)
			printf("The streak is broken!\n");
		else
			printf("The streak lives still in our heart!\n");
}
return 0;
}

