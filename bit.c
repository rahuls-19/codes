#include<stdio.h>
#include<limits.h>
int main(){
	
	int n;
	scanf("%d",&n);
	int res = bits(n);
	if(res==1){
		printf("YES\n");
	}
	else
		printf("NO\n");
	return 0;
}
int bits(int n){
	
	while(n>0){
		int previous = 0;
	    int current = 0;
		while(n>0 && n%2==0){
			n=n/2;
			current++;
		}
		if(current!=1)
			return 0;
		current = 0;
		while(n>0 && n%2==1){
			n=n/2;
			previous++;
		}
		if(previous!=1)
			return 0;
		

	}
	return 1;
	
}
