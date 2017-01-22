#include<stdio.h>
void Max_Heapify(int a[],int i,int n){
	int l = 2*i;
	int r = 2*i+1;
	int largest;

	if(l <= n && a[i]<a[l]  )
	 largest = l;
	else 
		largest = i;
	if(r <= n && a[largest] < a[r])
			largest = r;
	if(largest != i)
			{
				int temp = a[i];
				a[i] = a[largest];
				a[largest] = temp;
				Max_Heapify(a,largest,n);	
			}

}
void build_Max_Heap(int a[],int n){
	int j;
	for(j=n/2;j>0;j--){
		Max_Heapify(a,j,n);
	}
}

int main(void){
	int i,n,a[1005];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);	
	}
	build_Max_Heap(a,n);
	for(i=1;i<=n;i++)
	printf("%d\n",a[i]);
	return 0;
}

