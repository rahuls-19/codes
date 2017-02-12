#include<stdio.h>
long long int getmax(long long int a[],long long int n){
	long long int i;
long long int m = a[0];
	
	for(i=1;i<n;i++){
		if(a[i] > m)
			m = a[i];
	}
	return m;
}
void countsort(long long int a[],long long int n,long long int exp,long long int maxx){
	long long int i,output[1000006],count[1000006];
	for(i=0;i< 100000;i++){
		count[i] = 0;
	}
	for(i=0;i<n;i++){
		count[(a[i]/exp)%100000]++;
	}
	for(i=1;i<100000;i++){
		count[i] = count[i]+count[i-1];
	}
	for(i=n-1;i>=0;i--){
		output[count[(a[i]/exp)%100000]- 1] = a[i];
		count[(a[i]/exp)%100000]--;
	}
	for(i=0;i<n;i++){
		a[i] = output[i];
	}
	for(i=0;i<n;i++){
		printf("%lld ",a[i]);
	}
	printf("\n");
}
void radixsort(long long int a[],long long int n,long long int maxx){
	long long int i;
	for(i = 1;maxx/i > 0;i*=100000){
		countsort(a,n,i,maxx);
	}
}
int main(){
	long long int n,i,a[1000006],maxx;
	scanf("%lld",&n);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	maxx = getmax(a,n);
	radixsort(a,n,maxx);
	
	return 0;
}
