#include<stdio.h>
#include<stdlib.h>
float area(int x1,int x2,int x3,int y1,int y2,int y3){
	return abs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y3))/2.0;
}
int main(){
	int x1,x2,x3,y1,y2,y3,x,y;
	printf("Enter coordinates of triangle:\n");
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	printf("Enter the coordinates of point to be found in triangle or not:\n");	
	scanf("%d%d",&x,&y);
	float res = area(x1,x2,x3,y1,y2,y3);

	float res1 =area(x,x2,x3,y,y2,y3); 

	float res2 =area(x1,x,x3,y1,y,y3);

	float res3 =area(x1,x2,x,y1,y2,y);

	if(res == res1+res2+res3)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}

