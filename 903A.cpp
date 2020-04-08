#include <bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;

		if(n%3 == 0 or n%7 == 0 or n%10 == 0)
			cout << "YES" << endl;
		else
		{
			bool ca = false;
			if(n>10)
			{ 
				n-=10;
				if(n%7 == 0 or n%3 == 0)
					ca = true;
			}
			if(n>7)
			{
				n-=7;
				if(n%3==0 or n%10 == 0)
					ca = true;
			}
			else if(n>3)
			{
				n-=3;
				if(n%7 == 0 or n%10 == 0)
					ca = true;
			}
			if(ca)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}

	}
	return 0;
}
  