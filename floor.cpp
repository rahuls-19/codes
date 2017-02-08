#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int binSearch(int a[],int k,int high,int low){
 int mid;
 while(high-low > 1){
 
 	 mid =(low+high)/2;	
 	if(a[mid] <= k){
 	
 		low = mid;
	 }
	 
	 else
	 	
	 	high = mid;
	 
}
if(a[low] == k)
	return low;
else
 	return -1;
}
int main(){
	int n,a[1000],i,k,res;
	printf("Please enter the no. of element in the array:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Please enter the no. to search:\n");
	scanf("%d",&k);
	sort(a,a+n);
	res = binSearch(a,k,n-1,0);
	if(k <= a[0])
		printf("-1\n");
	else
		printf("%d\n",a[res-1]);
	return 0;
}
