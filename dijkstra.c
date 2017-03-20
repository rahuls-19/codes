#include<stdio.h>
//#include<conio.h>
//#include<process.h>
int j,i,n,a,b,w,edges,am[100][100],dis[100],visited[100];

int dij(int x){
	visited[x] = 1;
	for(i=1;i<=n;i++){
		if((visited[i] == 0) && (am[x][i] != -1)){
			if((dis[x]+am[x][i] < dis[i]) || (dis[i] == -1)){
				dis[i] = dis[x]+am[x][i];
				}
			}
		}
	int smaller = -1,sw = -1;
	 for(i=0;i<=n;i++){
                if((visited[i] == 0) && (dis[i] >=0) && ((sw > dis[i]) || (sw == -1))){
			sw = dis[i];
			smaller = i;}}
	if(smaller !=-1){
		dij(smaller);
			return 0;
		}
}

void main(){
	
	printf("Enter number of nodes");
	scanf("%d%d",&n,&edges);
	
	for(i = 0;i <= n;i++){
		for(j = 0;j <= n;j++){
                	am[i][j] = -1;
			}
                        }       
	for(i = 0;i <= n;i++){
                 dis[i] = -1;
		visited[i]=0;
                              }
	dis[1] = 0;
	for(i=1;i<=edges;i++){
		scanf("%d%d%d",&a,&b,&w);
		am[a][b] = w;
		am[b][a] = w;
		}
	dij(1);
	for(i=1;i<=n;i++){
             printf("%d\t",dis[i]);
	}
	}
			
		
		
