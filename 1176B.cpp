#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		int n,b=0,c=0,d=0;
		cin >> n;

		vector<lli> a(n);
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			a[i] = a[i]%3;
		}
		sort(a.begin(),a.end());
		for(int i=0;i<n;i++)
		{
			if(a[i] == 0)
				b++;
			if(a[i] == 1)
				c++;
			if(a[i] == 2)
				d++;
		}
		if(c>=d)
		{
			c = c-d;
			b+=d;
			b+=c/3;
		}
		else
		{
			b+=c;
			d = d-c;
			b+=d/3;
		}
		cout << b << endl;
	}
    return 0;
}
