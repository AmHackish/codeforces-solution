#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	if(n<m)
		cout << -1 << endl;
	else if(n%2 == 0)
	{
		int k = n/2;
		if(k<m)
			cout << m << endl;
		else if(k>=m)
		{
			if(k%m == 0)
				cout << k<<endl;
			else
				cout << (k/m)*m + m;
		}
	}
	else
	{
		int k = n/2+1;
		if(k<m)
			cout << m << endl;
		else if(k>=m)
		{
			if(k%m == 0)
				cout << k<<endl;
			else
				cout << (k/m)*m + m;
		}
	}
	cout << endl;
	return 0;
}  