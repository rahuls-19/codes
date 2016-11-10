#include<bits/stdc++.h>
using namespace std;
int main(void){
	int i,res=0,countr;
	char a[100004];			
	scanf("%s",a);
	for(i=0;i<strlen(a);){
		int counti=0,counte=0,countm=0;
		countr=0;
		if(a[i]=='I'){
			counti=1;
			while(a[i]=='I'){
				counti++;
				i++;
			}
			while(a[i]=='E'){
				counte++;
				i++;
			}
			 while(a[i]=='M'){
                                countm++;
                                i++;
                        }
			if(counte==0||countm==0)
				countr=0;
			else
				countr=counti+counte+countm;
			res=max(res,countr);
		}
	else
	i++;
		
}
	printf("%d\n",countr);

return 0;
}


