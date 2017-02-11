#include<stdio.h>
void countingsort(int a[],int n){
	int i,j,count[10000] = {0};
	for(i=0;i<n;i++){
		count[a[i]]++;
	}
	for(i=0;i<1024;i++){
		for(j=0;j<count[i];j++){
			printf("%d ",i);
		}
	}
}
int main(){
	int n,a[10000],i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);	
	}
	countingsort(a,n);
}
