#include<stdio.h>
#include<string.h>
int main(){
	int n,i,flag=0;
	char s1[1000],s2[1000],temp[1000];
	scanf("%s%s",s1,s2);
	strcat(temp,s1);
	strcat(temp,s1);
	int count = 0;
	for(i=0;i<strlen(temp);i++){
		if(s2[0] == temp[i]){
			int k = 0,j ;
			count = 0;
			for(j=i;j<strlen(temp),k<strlen(s2);j++,k++){
				if(s2[k] != temp[j] ){
					break;
				}
				count++;
				if(count == strlen(s2)){
					printf("%s is rotation of %s\n",s2,s1);
					flag = 1;
				}
			}
		}
	}
	if(flag == 0){
		printf("%s is not rotation of %s\n",s2,s1);
					flag = 1;
	}
	return 0;
}
