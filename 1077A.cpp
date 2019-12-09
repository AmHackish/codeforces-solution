#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int i=0; i<t; i++)
	{
		long long int a,b,k;
		cin >> a >> b >> k;
		if(k%2 == 0)
			cout << ((k/2)*a) - ((k/2)*b) << endl;
		else
			cout << ((k/2)*a) - ((k/2)*b) + a << endl;
	}
	return 0;
}  