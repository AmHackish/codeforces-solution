#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL); 

	string s;
	cin >> s;

	int cnt=0,n=s.length();
	vector<int> a(26);
	for(int i=0;i<n;i++)
		a[s[i]-'a']++;

	for(int i=0;i<26;i++)
	{
		if(a[i]%2!=0)
			cnt++;
	}
	if(cnt%2 != 0 or cnt== 0)
		cout << "First" << endl;
	else
		cout << "Second" << endl;
	return 0;
}