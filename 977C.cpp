#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n,k=0;
	cin >> n >> k;

	vector<lli> v(n);
	for(int i=0;i<n;i++)
		cin >> v[i];

	int x=0,y=0;
	sort(v.begin(),v.end());
	if(k == n)
		cout << v[n-1] << endl;
	else if(k == 0 and v[0]!=1)
		cout << 1 << endl;
	else if(k == 0 and v[0]==1)
		cout << "-1" << endl;
	else if(v[k] == v[k-1])
		cout << -1 << endl;
	else
		cout << v[k-1] << endl;
	return 0;
}
  