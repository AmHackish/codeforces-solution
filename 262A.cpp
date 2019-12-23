#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,num=0;
	cin >> n >> k;
	std::vector<string> s(n);
	for(int i=0;i<n;i++)
	{
		cin >> s[i];
		int len=0;
		for(int j=0;j<s[i].length();j++)
		{
			if(s[i][j]=='4' or s[i][j]=='7')
				len++;
		}
		if(len<=k)
			num++;
	}
	cout << num << endl;
	return 0;
}  