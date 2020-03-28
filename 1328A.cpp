#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long int a,b;
		cin >>  a >> b;
		if(a%b == 0)
			cout << 0 << endl;
		else
		{
			long long int k = a/b;
			cout << abs(b*(k+1) -a) << endl;
		}
	}
	return 0;
}
