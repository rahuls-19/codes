#include<stdio.h>
long long int merge(long long int a[],long long int left,long long int mid,long long int right){
	long long int temp[200008],i,j,k;
	long long int count=0;
	
	i=left,j=mid,k=left;
	while(i <= mid-1 && j <= right){
		if(a[i] <= a[j] ){
			temp[k]=a[i];
			 i++;
			 k++;
		}
		else{
			temp[k] = a[j];
			j++;
			k++;
			count = count + (mid-i);
		}
	}
	while(i <= mid-1){
		temp[k] = a[i];
			i++;
			k++;
	}
	while(j <= right){
			temp[k]=a[j];
			 j++;
			 k++;
		
	}
	 for (i=left; i <= right; i++)
    a[i] = temp[i];
	return count;
	
}
long long int mergesort(long long int a[],long long int left,long long int right){
	long long int count = 0;
	long long int mid;
	if(right > left){
		mid = (left+right)/2;
		count = mergesort(a,left,mid);
		count = count + mergesort(a,mid+1,right);
		count = count + merge(a,left,mid+1,right);
	}
	return count;
}
int main(){
	long long int t,n,a[200008];
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		for(long long int i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		printf("%lld\n",mergesort(a,0,n-1));
	}
	return 0;
}
