#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,m,j,k,i;	
	cin >> t;

	char a,d[101],b[4],c,inp[501];
	while(t--)
	{
		cin >> inp;
		a = inp[0];
		i = 2;
		k = 0;
		while(1)
		{
			if(inp[i] == 'e')
				break;

			d[k] = inp[i];
			i++;
			k++;
		}
		d[k] = '\0';

		int len = strlen(inp);
		k = 0;
		for(j = i+1;j < len;j++)
		{
			b[k] = inp[j];
			k++;
		}
		b[k] = '\0';

	//	cout << b << endl;
		m = atoi(b);

		cout << a;
//	cout << m << "m" << endl;	
		for(i = 0;i < strlen(d);i++)
		{
			cout << d[i];
			if(i+1 == m && m !=strlen(d))
			{
				cout << ".";
			}
			
			
		}

		if((m > strlen(d)))
		{

			for(i = 0;i < m-strlen(d);i++)
				cout << "0";
		}
		
	

		
	}

}
