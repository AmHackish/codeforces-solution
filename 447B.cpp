#include<bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int main()
{
	OPTIMASI

	string s;
	cin >> s;

	int k,sum=0,n=s.length();
	cin >> k;

	vector<int>a(26);
	for(int i=0;i<26;i++)
		cin >> a[i];

	for(int i=0;i<s.length();i++)
		sum+= (i+1)*a[s[i]-'a'];

	sort(a.begin(),a.end());
	while(k--)
	{
		n++;
		sum+=(n)*a[25];
	}
	cout << sum << endl;
	return 0; 
}