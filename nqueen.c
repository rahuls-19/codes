#include<stdio.h>
int isSafe(int board[51][51],int n,int row,int col){
	 int i, j;
 
   
    for (i = 0; i < col; i++)
        if (board[row][i])
            return 0;
 
    
    for (i=row, j=col; i>=0 && j>=0; i--, j--)
        if (board[i][j])
            return 0;
 
    
    for (i=row, j=col; j>=0 && i<n; i++, j--)
        if (board[i][j])
            return 0;


	return 1;
}
int solveNQ(int board[51][51],int n,int col,int a[51]){
	int i,j,count = 0,count1=0;
		static int flag = 0;
	if(col ==n && flag == 0){
//	printf("bhbws\n");
		for(i=0;i<n;i++)
			if(a[i]!= 0)
			count1++;
		for(i=0,j=0;i<n;i++,j++)
                if(a[i]!=0 && board[j][a[i]] == 1){
                        count++;
			}
		if(count == count1){
		 for(j=0;j<n;j++){
                for(i=0;i<n;i++){
			if(board[j][i]==1)
			printf("%d ",i);
                                }
			
                        
                        }
			flag = 1;
			}
		}
	for(i=0;i<n;i++){
		if(isSafe(board,n,i,col)==1){
				board[i][col]=1;
			
			solveNQ(board,n,col+1,a);
				
				
			board[i][col] = 0;
			}
		//board[i][col] = 0;
		}
	return 0;
	}

int main(){
	int n,i,board[51][51],a[51],j;
	//printf("Enter No of Queen To Be Inserted\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			
				board[i][j] = 0;
				}
			}
/*	for(i=0,j=0;i<n;i++,j++)
		if(a[i]!=0)
			board[j][a[i]] = 1;*/
	int res =  solveNQ(board,n,0,a);
	
	return 0;
	}
