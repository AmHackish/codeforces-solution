#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		lli n,d,ans;
		cin >> n >> d;
		if(d<=n)
			cout << "YES" << endl;
		else
		{
			ans = d;
			for(int i=1;i<=100000 and i<d;i++)
			{
				lli y = d/(i+1);
				if(d%(i+1)!=0)
					y++;
				ans = min(ans,(i+y));
			}
			if(ans <= n)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}

	return 0;
}