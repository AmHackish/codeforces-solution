#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	while(n--)
	{
		string s;
		cin >> s;

		vector<int>a;
		a.push_back(0);
		for(int i=0;i<s.length();i++)
		{
			if(s[i] == 'R')
				a.push_back(i+1);
		}
		a.push_back(s.length()+1);
		int k = 0;
		for(int i=0;i<a.size()-1;i++)
		{
			k = max(k,a[i+1]-a[i]);
		}
		cout << k << endl;
	}
	return 0;
}
