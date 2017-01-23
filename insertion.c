#include<stdio.h>
void INSERTION_SORT(int a[],int n){
	int i;
	for(i=1;i<n;i++){
		int key = a[i];
		int j=i-1;
		while(j>=0 && a[j]>key){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1] = key;
	}
}
int main(){
	int n,i,a[100005];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	INSERTION_SORT(a,n);
		for(i=0;i<n;i++){
		printf("%d  ",a[i]);
		
	}
	printf("\n");
	return 0;
}
