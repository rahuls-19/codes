#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[205];
	int i,t;
	scanf("%d",&t);
	while(t--){
	
	scanf("%s",s);
	for(i=0;i<strlen(s)/2;i++){
		if(i%2==0)
		printf("%c",s[i]);
	}
	
	printf("\n");
}
	return 0;
}
