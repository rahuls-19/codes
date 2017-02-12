#include<stdio.h>
void heapsort(int a[],int i,int n){
	int l = 2*i+1;
	int r = 2*i + 2;
	int largest = i;
	if(l < n && a[l] > a[i]){
		largest = l;
	}
	if(r < n && a[r] > a[largest]){
		largest = r;
	}
	if(largest != i){
		int temp = a[i];
		a[i] = a[largest];
		a[largest] = temp;
		heapsort(a,largest,n);
	}
	
	}
void maxheap(int a[],int n){
	int i;
	for(i=n/2;i >= 0;i--){
		heapsort(a,i,n);
	}
}
int main(){
	int n,i,a[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	maxheap(a,n);
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}
