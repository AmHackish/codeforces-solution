#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n,k=0;
	cin >> n;

	vector<lli> v(n);
	for(int i=0;i<n;i++)
		cin >> v[i];

	sort(v.begin(),v.end());
	for(int i=1;i<n-1;i++)
		if(v[i]>v[0] and v[i]<v[n-1])
			k++;
	cout << k << endl;
	return 0;
}
  