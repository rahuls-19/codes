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
	int previous = INT_MAX;
	int current;
	while(n>0){
		while(n>0 && n%2==0){
			n=n/2;
		}
		current = 0;
		while(n>0 && n%2==1){
			n=n/2;
			current++;
		}
		
	//	printf("%d . %d --- %d\n",n,current,previous);
		if(current >=previous){
	//83	printf(" dcjd");
		
			return 0;
		}
		
		previous = current;
	}
	return 1;
	
}
