#include<stdio.h>
int main(){
	int n,count=0,i,a[100000],j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[j]<a[i])
				count++;
		}
	}
	printf("%d\n",count);
	return 0;
}
