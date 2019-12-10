#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n,x;
	cin >> n >> x;
	long long int cnt = 0;
	for(long long int i=0; i<n; i++)
	{
		char c;
		int t;
		cin >> c >> t;
		if(c == '+')
			x = x + t;
		else 
		{
			if(x >= t)
				x = x-t;
			else
				cnt++;
		}
	}	
	cout << x << " " << cnt << endl;
	return 0;
}  