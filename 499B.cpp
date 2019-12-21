#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	pair<string,string> c;
	vector<pair<string,string>> d;
	for(int i=0;i<m;i++)
	{
		string a,b;
		cin >> a >> b;
		c = make_pair(a,b);
		d.push_back(c);
	}
	std::vector<string> v(n);
	for(int i=0;i<n;i++)
	{
		cin >> v[i];
		for(int j=0;j<m;j++)
		{
			if(v[i] == d[j].first and v[i].length()>d[j].second.length())
			{
				v[i] = d[j].second;
				break;
			}
		}
		cout << v[i]  << " ";
	}
	cout << endl;
	return 0;
}  