#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long int n;
	cin >> n;

	vector<long long int> v(n);
	for(int i=0;i<n;i++)
		cin >> v[i];

	sort(v.begin(),v.end());
	long long int k =0,l=0,d=0;
	d = v[n-1]-v[0];
	if(v[n-1] == v[0])
	{
		cout << 0 << " " << ((n*(n-1))/2)*1ll;
		return 0;
	}
	for(int i=0;i<n;i++)
	{
		if(v[0] !=v[i])
			break;
		else
			k++;
	}
	for(int i=n-1;i>=0;i--)
	{
		if(v[n-1]!=v[i])
			break;
		else
			l++;
	}
	cout << d << " " << k*l*1ll << endl;
	return 0;
}
  