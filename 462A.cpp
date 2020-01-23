#include <bits/stdc++.h>
 
using namespace std;
int main()
{
	int n,y;
	cin >> n >> y;
	vector<int>a;
	int xi,ans=0;
	cin >> xi;
	a.push_back(xi);
	if(xi>0)
		cout << 0 << endl;
	else
	{
		cout << 1 << endl;
		ans=1;
	}
	n--;

	while(n--)
	{
		int x;
		cin >> x;
		a.push_back(x);
		if(ans == x)
		{
			ans++;
			cout << ans << endl;
		}
		else if(ans>x)
		{
			cout << ans << endl;
		}
		else
			cout << ans << endl;
	}
	return 0;
}