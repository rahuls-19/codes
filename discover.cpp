#include<bits/stdc++.h>
using namespace std;
int search(int a[],int low,int high,int x){
	if(low<=high){
		int mid=(high+low)/2;
		if(x>a[mid]){
		 return search(a,mid+1,high,x);
			}
		else if(a[mid]>x){
		  return search(a,low,mid-1,x);
				}
		else 
			return 1;
		
	}
return -1;
}
int main(void){
	int n,q,i,x,res;
	scanf("%d%d",&n,&q);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		}
	sort(a,a+n);
	while(q--){
		scanf("%d",&x);
		
		res = search(a,0,n-1,x);
		if(res == 1)
			printf("YES\n");
		else 
			printf("NO\n");
		}
return 0;
}
		

