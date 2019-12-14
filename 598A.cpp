#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int i=0; i<t; i++)
	{
		long long int n,m=1;
		cin >> n;
		long long int sum = (n*(n+1))/2,sum2 = 0;
		while(m<=n)
		{
			sum2+=m;
			m=m*2;
		}
		cout << sum - sum2*2 << endl;
	}
	return 0;
}  