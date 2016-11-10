#include<bits/stdc++.h>

using namespace std;

int main()
{

	int t,a,b,c;
	cin >> t;
	while(t--)
	{
		cin >> a >> b >> c;

		if((a + b + c) % 2 == 0)
			cout << "Possible" <<endl;

		else
			cout << "Not Possible" << endl;
	}

}
