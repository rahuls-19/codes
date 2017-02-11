#include<stdio.h>
void merge(int a[],int low,int mid,int high){
	int i ,j,l[1000],temp[10000],k;
	
	/*for(i=low;i<=mid;i++){
		l[i] = a[i];
	}
	for(i = 0;i<=high-mid;i++){
		r[i] = a[i+mid+1];	
	}*/
	i=low;
	j=mid+1;
	k=low;
	while(i <= mid && j <= high){
		if(a[i] <= a[j]){
			temp[k] = a[i];
			i++;
		}
		else{
			temp[k] = a[j];
			j++;
		}
		k++;
	}
	while(j <= high){
		temp[k] = a[j];
		j++;
		k++;
	}
	while(i <= mid){
		temp[k] = a[i];
		i++;
		k++;
	}
		
	for(i=low;i<=high;i++){
		a[i] = temp[i];
	}
	
}
void mergesort(int a[],int low,int high){
	if(low < high){
		int mid = (low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);		
	}
}
int main(){
	int n,a[100000],i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	mergesort(a,0,n-1);
	for(i=0;i<n;i++){
		printf("%d   ",a[i]);
	}
}
