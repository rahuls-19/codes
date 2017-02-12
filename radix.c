#include<stdio.h>
int getmax(int a[],int n){
	int i;
int m = a[0];
	
	for(i=1;i<n;i++){
		if(a[i] > m)
			m = a[i];
	}
	return m;
}
void countsort(int a[],int n,int exp,int maxx){
	int i,output[100000],count[100000];
	for(i=0;i< 10;i++){
		count[i] = 0;
	}
	for(i=0;i<n;i++){
		count[(a[i]/exp)%10]++;
	}
	for(i=1;i<10;i++){
		count[i] = count[i]+count[i-1];
	}
	for(i=n-1;i>=0;i++){
		output[count[(a[i]/exp)%10]- 1] = a[i];
		count[(a[i]/exp)%10]--;
	}
	for(i=0;i<n;i++){
		a[i] = output[i];
	}
}
void radixsort(int a[],int n,int maxx){
	int i;
	for(i = 1;maxx/i > 0;i*=10){
		countsort(a,n,i,maxx);
	}
}
int main(){
	int n,i,a[100000],maxx;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	maxx = getmax(a,n);
	radixsort(a,n,maxx);
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
}
