#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
	fast;

	int n;
	cin >> n;

	vector<int> a(n),b(2*n);
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		b[i] = a[i];
	}
	int j=0;
	for(int i=n;i<2*n;i++)
	{
		b[i] = a[j];
		j++;
	}

	int rest=0,l=0;
	for(int i=0;i<2*n;i++)
	{
		if(b[i] == 0)
			rest = 0 ;
		else
			rest ++;
		l = max(l,rest);
	}
	cout << l << endl;
	return 0;  
}