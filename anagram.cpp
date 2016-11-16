#include<bits/stdc++.h>
using namespace std;
int main(void){
	int t,i,flag=0;
	char s1[25],s2[25],temp;
	scanf("%d",&t);
	while(t--){flag = 0;
		scanf("%s%c%s",s1,&temp,s2);
		sort(s1,s1+strlen(s1));
		sort(s2,s2+strlen(s2));
		if(strlen(s1) != strlen(s2)){
			printf("NO\n");
			flag=1;
		}
		else{
			for(i=0;i<strlen(s1);i++){
				if(s1[i] != s2[i]){
					printf("NO\n");
					flag=1;
					break;
					}
				}
			}
	if(flag==0)
		printf("YES\n");
}
return 0;
}
