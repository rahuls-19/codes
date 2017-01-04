#include<stdio.h>
float pow(float x,int y){
	if(y==0)
		return 1;
	float temp=pow(x,y/2);
	
		if(y%2==0)
			return temp*temp;
		else{
			if(y > 0)
				return x*temp*temp;
			else
				return ((temp*temp)/x);
}
		}	
int main(){
	int y;
	float x;
	scanf("%f%d",&x,&y);
	float res = pow(x,y);
	printf("%f",res);
	return 0;
}
