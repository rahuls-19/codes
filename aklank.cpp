#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,c,b,i;
	cin >> n >> c >> b;

	int a[n];
	for(i = 0;i < n;i++)
		cin >> a[i];

	int count = 0;
	for(i = 0;i < n;i++)
	{
		while(a[i] % c == 0 || a[i] % b == 0)
		{      if(a[i]% c==0 && a[i]% b==0){
                           if(c < b){
				a[i] /= c;}
			   else 
				a[i] /= b;
			}
			else{
			if(a[i] % c == 0)
			{
				a[i] /= c;
			
			}

			else
			{
				a[i] /= b;
			}
				}

			count++;
		}
	}

	if(count % 2 != 0)
		cout << "Aklank's day";

	else
		cout << "Bad Luck";

}
