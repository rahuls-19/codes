#include<bits/stdc++.h>

using namespace std;

int main()
{

	long long int n,res,i;
	cin >> n;
	long long  int a[n];
	for(i = 0;i < n;i++)
		cin >> a[i];

	sort(a,a+n,greater<int>());
	res = 1;
	for(i = 0;i <3 && i < n;i++)
	{
		res = res*a[i];
	}

	cout << res << endl;

	
return 0;

}
