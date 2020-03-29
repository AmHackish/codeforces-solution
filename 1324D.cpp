#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<long long int> a(n),b(n);
	for(int i=0;i<n;i++)
		cin >> a[i];
	for(int i=0;i<n;i++)
		cin >> b[i];

	vector<long long int> c(n);
	for(int i=0;i<n;i++)
		c[i] = a[i]-b[i];
	
	sort(c.begin(),c.end());
	
	long long int good = 0,upper=0;
	for(int i=0;i<n;i++)
	{
		if(c[i]>0)
		{
			upper = lower_bound(c.begin(),c.end(),-c[i]+1)-c.begin();
			good+=(i-upper);
		}
	}
	cout << good << endl;
	return 0;
}
