#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int res = wax(a,b);
	if(res==0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
	
}
int wax (int a,int b){
	return (a^b);
}
