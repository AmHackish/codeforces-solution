#include <bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	lli n,m,c,a;
	cin >> n >> m;

	if(n == 1)
	{
		cout << 1 << endl;
		return 0;
	}
	if(n == 2)
	{
		if(m == 2)
			cout << 1 << endl;
		else
			cout << 2 << endl;
		return 0;
	}
	if(n == 3)
	{
		if(m == 3)
			cout << 2 << endl;
		else if(m == 2)
			cout << 1 << endl;
		else
			cout << 2 << endl;
		return 0;
	}
	if(abs(n-m) > abs(m-1))
	{
		c = n;
		a = m+1;
	}
	else if(abs(n-m)<abs(m-1))
	{
		c = 1;
		a = m-1;
	}
	else
	{
		a = m-1;
	}
	cout << a << endl;
	return 0;
}
  