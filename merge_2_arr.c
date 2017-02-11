#include<stdio.h>
void merge(int a[],int low,int mid,int high){
	int i =low,j=mid,k = low,arr[100000];
	while(i < mid && j <= high){
		if(a[i] < a[j]){
			arr[k]=a[i];
			i++;
		}
		else{
			arr[k]=a[j];
			j++;
		}
		k++;
	}
	while( i < mid){
		arr[k] = a[i];
		k++;
		i++;
	}
	while( j <= high){
		arr[k] = a[j];
		k++;
		j++;
	}
	for(i=low;i<=high;i++){
		a[i]=arr[i];
	}
}
int main(){
	int n1,n2,a[100000],i;
	scanf("%d%d",&n1,&n2);
	for(i=0;i<n1;i++){
		scanf("%d",&a[i]);
	}
	for(i=n1;i<n2+n1;i++){
		scanf("%d",&a[i]);
	}
	merge(a,0,n1,n1+n2-1);
	for(i=0;i<n2+n1;i++){
		printf("%d   ",a[i]);
	}
	return 0;
}
