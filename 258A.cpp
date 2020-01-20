#include <bits/stdc++.h>
 
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long int l,r,d,sol=0;
		cin >> l >> r >> d;
		if(l<=d)
		{
			if(d>r)
				sol = d;
			else
			{
				long long int i = r/d;
				sol = d*(i+1);
			}
		}
		else
		{
			sol = d;
		}
		cout << sol << endl;
	}
	return 0;
}