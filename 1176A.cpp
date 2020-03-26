#include<bits/stdc++.h>
using namespace std;

int main()
{
	int q;
	cin >> q;

	while(q--)
	{
		long long int n,moves=0;
		cin >> n;
		bool b = true;
		while(n!=1)
		{
			if(n%5 == 0)
				n = (n/5)*4;
			else if(n%3 == 0)
				n = (n/3)*2;
			else if(n%2 == 0)
				n = n/2;
			else
			{
				cout << -1 << endl;
				b = false;
				break;
			}
			moves++;
		}
		if(b)
			cout << moves << endl;
	}
	return 0;
}
