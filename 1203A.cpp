#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		int n,c=0,k=0,q=0,r=0;
		cin >> n;

		vector<int> p(n);
		for(int i=0;i<n;i++)
			cin >> p[i];
		for(int i=0;i<n-1;i++)
		{
			if(abs(p[i]-p[i+1]) != 1)
			{
				c++;
				break;
			}
		}
		if(c)
		{
			for(int i=0;i<n-1;i++)
			{
				if(abs(p[i]-p[i+1]) == 1)
					k++;
					
				else
				{
					if(p[i] == 1 and p[i+1] == n)
						q++;
					else if(p[i] == n and p[i+1] == 1)
						r++;
				}
			}
			if(k == n-2 and (q == 1 or r==1))
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		else
			cout << "YES" << endl;

	}
	return 0;
}
