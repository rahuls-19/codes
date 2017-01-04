#include<stdio.h>
int pow(int x,int y){
	if(y==0)
		return 1;
	int temp=pow(x,y/2);
	
		if(y%2==0)
			return temp*temp;
		else
			return x*temp*temp;

}
			
int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	int res = pow(x,y);
	printf("%d",res);
	return 0;
}
