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
	for(i=0;i<n;i++){
		flag =0;
		for(j=0;j<n-i-1;j++){
			if(a[j+1] < a[j]){
				swap(&a[j],&a[j+1]);
				flag =1;
			}
			
		}
		if(flag == 0)
		break;
		
	}
	for(i=0;i<n;i++){
		printf("%d   ",a[i]);
	}
	return 0;
}
