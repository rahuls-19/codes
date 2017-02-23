#include <stdio.h>
#include<string.h>
int main() {
    int t,i,j;
    char s1[55],s2[55];
    scanf("%d",&t);
    while(t--){
        int count[1000] = {0};
        scanf("%s%s",s1,s2);
        for(i=0;i<strlen(s2);i++){
           count[s2[i]]++;
        }
        for(i=0,j=0;i<strlen(s1);i++){
            if(count[s1[i]] == 0){
                printf("%c",s1[i]);
                s1[j] = s1[i];
                j++;
            }
        }
        s1[j] = '\0';
        printf("\n");
        printf("%s\n",s1);
    }
	return 0;
}
