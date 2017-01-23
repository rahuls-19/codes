#include<stdio.h>
int main(){
	int a=100,b=20;
	swap(&a,&b);
	printf("%d\n%d\n",a,b);
	return 0;
}
void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
