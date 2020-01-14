#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int x,y,n;
	cin >> x >> y >> n;
	std::vector<long long int> v(n);
	v[0]=x;
	v[1]=y;
	if(x == 0 and y == 0)
	{
		cout << 0 << endl;
	}
	else
	{
		for(long long int i=2;i<n;i++)
			v[i]=v[i-1]-v[i-2];
		if(v[n-1]<0)
			cout << 1000000007+v[n-1] << endl;
		else
			cout << (v[n-1]%1000000007) << endl;
	}
	return 0;
}  