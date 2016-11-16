#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n,q,i,x;
	char str[10];
	stack<int>s;
	cin >> n;
	int a[n];
	for(i = 0;i < n;i++)
		cin >> a[i];
	int sum = 0;
	cin >> q >> x;
	i = 0;
	while(q--)
	{
		cin >>str;
		if(strcmp(str,"Harry") == 0)
		{
			
			sum += a[i];
			s.push(a[i]);
			if(sum == x)
			{	
				cout << s.size() << endl;
				break; 
			}
			i++;
		}

		else
		{
			sum -= a[i];
			s.pop();
			
		}
		
	}

}
