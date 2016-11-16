#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,i,a[1000],odd=0,eve=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]%2==0)
			eve++;
		else
			odd++;
		}
	if(odd==eve)
		printf("Yes\n");
	else
		printf("No\n");

	
return 0;
}
