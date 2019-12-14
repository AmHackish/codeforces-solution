#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		string s;
		cin >> s;
		vector<int> v(s.length());
		for(int j=0; j<s.length(); j++)
			v[j] = (int)s[j];
		sort(v.begin(),v.end());
		int k=0;
		for(int j=0; j<s.length()-1;j++)
			if(v[j+1]-v[j] == 1)
				k++;	
		if(k == s.length()-1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}  