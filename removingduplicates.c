#include<stdio.h>
#include<string.h>
//using namespace std;
int main()
 {
    int t,i,j;
    char s[10000];
    scanf("%d",&t);
    while(t--){
        scanf("%s",s);
        int count[10000] = {0};
        for(i=0,j=0;i<strlen(s);i++){
            if(count[s[i]] == 0){
                printf("%c",s[i]);
                count[s[i]] = 1;
                s[j] = s[i];
                j++;
            }
        }
        s[j] = '\0';
        printf("\n");
        printf("%s\n",s);
    }
	return 0;
}
