#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t,n,a[1002],i;
	scanf("%d",&t);
	while(t--){
	    int sum=0,sum1=0;
	    scanf("%d",&n);
	    for(i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    sort(a,a+n);
	     
	     for(i=0;i<n;i++){
	       //printf("%d\t ",a[i]);
	        if(i%2==0){
	            sum = (sum * 10) + a[i];
	      //      printf("%d\t ",a[i]);
	        }
	        else{
	            sum1 = (sum1 * 10) + a[i];
	           // printf("%d\t ",a[i]);
	        }
	    }
	    //printf("%d\t %d",sum1,sum);
	    printf("%d\n",sum+sum1);
	    
	}
	return 0;
}
