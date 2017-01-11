#include <stdio.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b= temp;
}
void quick(int a[],int start,int end){
	int  pIndex;
	if(start <= end){
		pIndex = partition(a,start,end);
		quick(a,start,pIndex-1);
		quick(a,pIndex+1,end);
	}
	else 
		return ;
}
int partition(int a[],int start,int end){
	int j;
	int pivot = a[end];
    int pIndex = start;
    for(j=start;j<=end-1;j++){
    	if(a[j]<=pivot){
    		swap(&a[j],&a[pIndex]);
    		pIndex = pIndex+1;
    	}
    	
    }
    swap(&a[pIndex],&a[end]);
    return pIndex;
}
int main()
{
    int n,a[1000006],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    	scanf("%d",&a[i]);
  //  	printf("vbhnjk");
    quick(a,0,n-1);
//    printf("vbhnjk");
    for(i=0;i<n;i++)
    	printf("%d ",a[i]);
    return 0;
}
