#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	string s;
	cin >> s;

	vector<int>v(26);
	for(int i=0;i<s.length();i++)
		v[s[i]-'a']++;

	int a=0;
	for(int i=0;i<26;i++)
		if(v[i]>1)
			a++;

	if(n == 1)
		cout << "Yes" << endl;
	else if(a<1)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
	return 0;
}
  