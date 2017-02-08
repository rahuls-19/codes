#include<stdio.h>
void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int n,i,a[10000],j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j+1] < a[j]){
				swap(&a[j],&a[j+1]);
			}
		}
		
	}
	for(i=0;i<n;i++){
		printf("%d   ",a[i]);
	}
	return 0;
}
