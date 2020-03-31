#include<bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int main()
{
	OPTIMASI

	int n,k;
	cin >> n >> k;
	string s;
	cin >> s;

	if(n == 1 and k == 1)
	{
		cout << 0 << endl;
		return 0;
	}
	if(s[0]!='1' and k!=0)
	{
		s[0] = '1';
		k--;
	}
	for(int i=1;i<s.length();i++)
	{
		if(k<=0)
			break;
		if(s[i]!='0')
		{
			s[i] = '0';
			k--;
		}
	}
	cout << s << endl;
	return 0; 
}