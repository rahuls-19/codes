#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void sort(int a[],int n){
    int i,k,temp;
    for(k=0;k<n-1;k++)
        for(i=0;i<n-k-1;i++){
            if(a[i]>a[i+1]){
                temp = a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
}
int main()
{
    int n,j,i,flag=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
     for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    sort(a,n);
    sort(b,n);
    for(j=0;j<n;j++){
        cout << a[j] << " " << b[j] << endl;
        if(b[j] >= a[j]){
            flag=1;
            
        }
    }
    printf("%d",flag);
    if(flag==0)
        printf("Yes\n");
    else
        printf("No\n");
    
    return 0;
}

