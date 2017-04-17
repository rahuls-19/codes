#include<stdio.h>
void print(int sol[8][8]){
	int i,j;
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			printf("%d  ",sol[i][j]);
				}
		printf("\n");
		}
}
int isSafe(int i,int j,int sol[8][8]){
	if(i >= 0 && j >= 0 && i < 8 && j < 8 && sol[i][j] == -1)
		return 1;
	else
		return 0;
}
int solve(int x,int y,int movei,int sol[8][8],int xMove[],int yMove[]){
	int next_x,next_y,k;
	if(movei == 64){
		return 1;
		}
	for(k=0;k<8;k++){
	 	next_x = x + xMove[k];
		next_y = y + yMove[k];
		if(isSafe(next_x,next_y,sol)){
			sol[next_x][next_y] = movei;
			if(solve(next_x,next_y,movei + 1,sol,xMove,yMove)==1)
					return 1;
			else
				sol[next_x][next_y] = -1;
	
		}
	}
	return 0;
}
int solveKT(){
	int i,j,sol[8][8];
        for(i=0;i<8;i++){
                for(j=0;j<8;j++){
                        sol[i][j] = -1;
                                }
                        }
        int xMove[8] = {  2, 1, -1, -2, -2, -1,  1,  2 };
    int yMove[8] = {  1, 2,  2,  1, -1, -2, -2, -1 };
        sol[0][0]= 0;
        if(solve(0,0,1,sol,xMove,yMove)==0){
                printf("Solution does not exist \n");
                return 0;
                }
        else{
                print(sol);
        }
	return 1;
}
int main(){
	solveKT();
	return 0;
}
	
	
	
