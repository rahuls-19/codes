#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,j,count=0;
	scanf("%d%d",&n,&m);
	int a[n],b[m];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);
	for(j=a[0];j<=b[0];j++){
		int afac=0;
		for(i=0;i<n;i++){
			if(j%a[i]==0)
				afac++;
				}
		for(i=0;i<m;i++){
			if(b[i]%j==0)
				afac++;
				}
			if(afac == n+m)
				count++;
 		}
printf("%d\n",count);
return 0;
}
				
