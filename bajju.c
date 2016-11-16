    #include<stdio.h>
    #define M 1000000007
    #include<bits/stdc++.h>
    using namespace std;
    char a[100001];
    int main()
    {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		int i, j , k , l,m, p=0;
    		cin>>a;
    		l = strlen(a);
    		j = 0; k= 0; m=0; 
    		for(i = 0; i<l; i++)
    		{
    			if(a[i] == 'I')
    			j++;
    			if(a[i] == 'E')
    			k++;
    			if(a[i] == 'M')
    			m++;
    			if(m>k || m >j)
    			{
    				cout<<"No"<<endl;
    				p++;
    				break;
    			}
    			if(k > j)
    			{
    				cout<<"No"<<endl;
    				p++;
    				break;
    			}
    		}
    		if(p == 0)
    		cout<<"Yes"  << endl;
    	}
    	return 0;
    } 
