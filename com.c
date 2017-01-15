#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(!(a/b))
		printf("b is greater than a\n");
	else if(!(a-b))
		printf("a is equal to b\n");
	else
		printf("a is greater than b\n");
	return 0;
}
