#include<bits/stdc++.h>
using namespace std;
int main(void){
	int i,t,n;
	char a[100003];
	scanf("%d",&t);
	while(t--){
		int flag=0;
		scanf("%s",a);
		int n=strlen(a);
		for(i=0;i<n;i++){
		   	if(a[0]=='E'|| a[0]=='M' ||a[n-1]=='I'||a[n-1]=='E'){
				printf("No\n");
				flag=1;
			        break;
				}
			if(a[i]=='E'&&a[i+1]=='E'||a[i]=='I'&&a[i+1]=='M'){
                         	printf("No\n");
				flag=1;
				break;}
			
}
if(flag==0)
 printf("Yes\n");
}

		   	

	return 0;
}
		

