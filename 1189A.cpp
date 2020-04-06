#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	int n,one=0,odd=0;
	cin >> n;

	string s;
	cin >> s;

	for(int i=0;i<n;i++)
	{
		if(s[i] == '1')
			one++;
	}
	odd = n-one;
	if(one != odd)
	{
		cout << 1 << endl;
		cout << s << endl;
	}
	else
	{
		cout << 2 << endl;
		cout << s[0] << " ";
		for(int i=1;i<n;i++)
			cout << s[i];
		cout << endl;
	}
	return 0;
}