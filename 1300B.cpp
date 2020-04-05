#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;

		vector<lli> a(2*n);
		for(int i=0;i<2*n;i++)
			cin >> a[i];

		sort(a.begin(),a.end());
		cout << a[n]-a[n-1] << endl;
	}
	return 0;
}