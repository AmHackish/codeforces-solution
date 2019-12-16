#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s,t;
	cin >> s>>t;
	int k=0;
	for(int j=0;j<t.length();j++)
	{
		if(s[k] == t[j])
			k++;
	}
	cout << k+1 <<endl;
	return 0;
}  