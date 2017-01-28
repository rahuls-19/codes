#include<stdio.h>
int count_negative(int matrix[104][104],int m,int n){
	int count=0,i=0,j=m-1;
	while(j >= 0 && i < n){
		if(matrix[i][j] < 0){
			count += j+1;
			i=i+1;
		}
		else
			j=j-1;
	}
	return count ;
}
int main(){
	
	int n,m,i,j,mat[104][104];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	int res = count_negative(mat,m,n);
	printf("%d\n",res);
	
	
	
	return 0;
}
