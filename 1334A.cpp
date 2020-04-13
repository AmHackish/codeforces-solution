#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
	fast;

	int n;
	cin >> n;

	while(n--)
	{
		int t,x=0,y=0,p,c;
		cin >> t;
		bool ans=true;

		while(t--)
		{
			cin >> p >> c;
			if(p<x or c<y or c-y>p-x)
				ans = false;
			x = p;
			y = c;
		}
		if(ans)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;  
}