#include <bits/stdc++.h>
 
using namespace std;
int main()
{
	int n,k=0;
	cin >> n;
	string s;
	cin >> s;
	vector<int> alpha(26);
	for(int i=0; i<n; i++)
	{
		if(s[i] >= 97)
			alpha[s[i]-97]++;
		else if(s[i] >=65 and s[i] <=90)
			alpha[s[i]-65]++;
	}
	for(int i=0; i<26; i++)
	{
		if(alpha[i] == 0)
		{
			k++;
			break;
		}
	}
	if(k)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
	return 0;
}