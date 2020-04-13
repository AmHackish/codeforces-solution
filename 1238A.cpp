#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
	fast;

	int t;
	cin >> t;

	while(t--)
	{
		lli x,y;
		cin >> x >> y;
		x = x-y;

		if(x == 1)
			cout << "NO" << endl;
		else if(x%2 == 0 or x%3 == 0)
			cout << "YEs" << endl;
		else if((x+1)%6 == 0 or (x-1)%6 == 0)
			cout << "Yes" << endl;
		else
		{
			for(int i=5;i<100000;i+=2)
			{
				if((i+1)%6 == 0 or (i-1)%6 == 0)
				{
					if(x%i == 0)
					{
						cout << "YES" << endl;
						break;
					}
				}
			}
			cout << "NO" << endl;
		}
	}
	return 0;  
}