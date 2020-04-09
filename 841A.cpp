#include <bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n,k;
	cin >> n >> k;

	string s;
	cin >> s;

	vector<int> v(26);
	for(int i=0;i<s.length();i++)
		v[s[i]-'a']++;

	sort(v.begin(),v.end());
	int cnt=0;
	bool l = true;
	for(int i=0;i<26;i++)
	{
		if(v[i]>k)
			l = false;
	}
	for(int i=0;i<26;i++)
		if(v[i])
			cnt++;
	if(l)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
  