#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	int n,k;
	cin >> n >> k;

	string s;
	cin >> s;

	vector<int> v(k);
	for(int i=0;i<n;i++)
		v[s[i]-'A']++;

	sort(v.begin(),v.end());
	cout << v[0]*k << endl;

	return 0;
}
