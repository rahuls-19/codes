#include<stdio.h>
int max(int a,int b){
	return (a > b) ? a : b;
}
int knapscak(int W,int wt[],int val[],int n){
	int k[n+1][W+1],w;
	for(int i=0;i<=n;i++)
	{
		for(w=0;w<=W;w++){
				if(i==0 || w==0){
					k[i][w]=0 ; 
				}
		
				else if(wt[i-1] <= W){
					k[i][w] = max(val[i-1]+k[i-1][w-wt[i-1]],k[i-1][w]);
					
				}
				else{
					k[i][w] = k[i-1][w];
				}
				    
					
					
		}
	}

	return k[n][W];	 
	
}
int main(){
	int n,val[1000],wt[1000],W;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&val[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&wt[i]);
	}
	scanf("%d",&W);
	printf("%d",knapscak(W,wt,val,n));
	
	
	return 0;
}
