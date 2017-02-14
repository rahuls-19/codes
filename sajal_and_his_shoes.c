#include <stdio.h>
 void countsort(int a[],int n){
     int count[10000],i,sum=0;
     for(i=1;i<=1000;i++){
         count[i]=0;
     }
     for(i=0;i<n;i++){
         count[a[i]]++;
     }
     for(i=1;i<=1000;i++){
         if(count[i] > 1){
             sum =sum + count[i]/2;
         }
     }
     printf("%d",sum);
 }
int main()
{
    int n,t,a[10000],i;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    countsort(a,n);
    printf("\n");
    
    
    }
    return 0;
}

