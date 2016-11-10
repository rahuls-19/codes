#include<bits/stdc++.h>
using namespace std;
int main(void){
	int i,n,t;
	char s[1003];
	int a[7];
	scanf("%d",&t);
	while(t--){
		for(i=0;i<7;i++)
			a[i]=0;
		scanf("%s",s);
		for(i=0;i<strlen(s);i++){
			if(s[i]=='d')
				a[0]++;
			else if(s[i]=='o')
				a[1]++;
			  else if(s[i]=='r')
                                a[2]++;
			  else if(s[i]=='a')
                                a[3]++;
			  else if(s[i]=='c')
                                a[4]++;
			
			  else if(s[i]=='k')
                                a[5]++;
			  else if(s[i]=='e')
                                a[6]++;
			 else
				continue;
}
a[3]=a[3]/2;
sort(a,a+7);
printf("%d\n",a[0]);
}
return 0;
}
	


