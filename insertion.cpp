#include<stdio.h>
void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int n,i,a[10000],j,flag;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++){
		int key = a[i] ;
		j=i-1;
		while( j >= 0  && a[j] > key ){
			a[j+1] = a[j];
			j= j -1;
		}
		a[j+1] = key;
	}
	for(i=0;i<n;i++){
		printf("%d   ",a[i]);
	}
	return 0;
}
