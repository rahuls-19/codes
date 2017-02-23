#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int t,i;
    char s[10000];
    scanf("%d",&t);
    while(t--){
        scanf("%s",s);
        int count[10000] = {0};
        for(i=0;i<strlen(s);i++){
            if(count[s[i]] == 0){
                printf("%c",s[i]);
                count[s[i]] = 1;
            }
        }
        printf("\n");
    }
	return 0;
}
