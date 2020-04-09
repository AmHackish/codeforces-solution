#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL); 

	long long int l,r,a,b,c;
	cin >> l >> r;

	if(abs(l-r)<=1)
	{
		cout << -1 << endl;
		return 0;
	}
	else if(abs(l-r) == 2)
	{
		a = (l+r)/2;
		if(a%2 == 0)
			cout << -1 << endl;
		else
			cout << a-1 << " " << a << " " << a+1 << endl;
		return 0;
	}
	else
	{
		if(l%2 == 0)
			cout << l << " " << l+1 << " " << l+2 << endl;
		else if(r%2 == 0)
			cout << r-2 << " " << r-1 << " " << r << endl;
		else
			cout << l+1 << " " << l+2 << " " << l+3 << endl;
	}
	return 0;
}