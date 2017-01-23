#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t,n;
	scanf("%d",&t);
	while(t--){
	    int count = 0;
	    scanf("%d",&n);
	    int flag = 0;
	    for(int j=1;j<=500;j++){
	        count = 0;
	    for(int i=5;(j/i) >= 1;i*=5){
	        count = count + (j/i);
	    }
	    if(count == n && flag == 0){
	        printf("%d\n",j);
	        flag = 1;
	    }
	        
	}
	}
	return 0;
}
