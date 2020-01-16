#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int x,y,z;
	cin >> x >> y >> z;

	long long int money = (x/z) +(y/z) +((x%z)+(y%z))/z;
	cout << money << " ";
	x = x%z;
	y = y%z;
	if((x+y)>=z)
	{
		cout << z-max(x,y) << endl;
	}
	else
		cout << 0 << endl;
	return 0;
}  