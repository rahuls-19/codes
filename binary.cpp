#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int binSearch(int a[],int k,int high,int low){
 
 while(low <=  high){
 	int mid =(low+high)/2;	
 	if(a[mid] > k){
 		low = mid+1;
	 }
	 else if(a[mid] <  k){
	 	high = mid-1;
	 }
	 else
	 	return mid;
 }
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
	printf("%d\n",res);
	return 0;
}
