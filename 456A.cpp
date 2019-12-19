#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	pair<int,int>c;
	std::vector<pair<int,int>> d;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin >> a >> b;
		c = make_pair(a,b);
		d.push_back(c);
	}
	int k=0;
	sort(d.begin(),d.end());
	for(int i=0;i<d.size()-1;i++)
	{
		if(d[i].first<d[i+1].first and d[i].second>d[i+1].second)
		{
			k++;
			break;
		}
	}
	if(k)
		cout << "Happy Alex" << endl;
	else
		cout << "Poor Alex" << endl;
	return 0;
} 