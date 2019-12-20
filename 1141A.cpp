#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,m;
	cin >> n >> m;
	if(n==m)
		cout << 0 << endl;
	else
	{
		if(m%n != 0)
			cout << -1 << endl;
		else if(m%2!=0 and m%3!=0)
			cout << -1 << endl;
		else
		{
			long long int p=m/n;
			long long int moves = 0;
			while(p%2 == 0 or p%3 == 0)
			{
				if(p%6 == 0)
				{
					moves+=2;
					p=p/6;
				}
				else if(p%3 == 0)
				{
					moves++;
					p=p/3;
				}
				else if(p%2 == 0)
				{
					moves++;
					p=p/2;
				}
			}
			if(p == 1)
				cout << moves << endl;
			else
				cout << -1<<endl;
		}

	}
	return 0;

}  