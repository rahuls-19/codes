#include<bits/stdc++.h>
using namespace std;
int main(void){
	int t,i,n;
        char a[152];
	scanf("%d",&t);
	while(t--){
                int count=0;
int count1=0;   
		
		scanf("%s",a);
                n=strlen(a);
		for(i=0;i<n-4;i++){
			if(a[i]=='S' && a[i+1] =='U' && a[i+2]=='V' && a[i+3] =='O' && a[i+4]!='J')
		count++;}
		 for(i=0;i<n-6;i++){
                        if(a[i]=='S' && a[i+1] =='U' && a[i+2]=='V' && a[i+3] =='O' && a[i+4]=='J' && a[i+5] == 'I' && a[i+6] == 'T')
                count1++;}
	printf("SUVO = %d,",count);
	printf("SUVOJIT = %d\n",count1);
}
return 0;
}

