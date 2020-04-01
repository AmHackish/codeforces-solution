#include<bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int main()
{
	OPTIMASI

	int x,y,z;
	cin >> x >> y >> z;
	if(x > y)
	{
		if(x>(y+z))
			cout << '+' << endl;
		else
			cout << '?' << endl;
	}
	else if(x == y and z==0)
		cout << 0 << endl;
	else
	{
		if(y>(x+z))
			cout << '-' << endl;
		else
			cout << '?' << endl;
	}
	return 0; 
}