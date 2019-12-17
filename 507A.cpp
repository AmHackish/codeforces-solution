#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin >> n >> k;
	pair<int ,int>c;
	std::vector<pair<int,int>> d;
	
	for(int i=0;i<n;i++)
	{
		int t;
		cin >> t;
		c = make_pair(t,i+1);
		d.push_back(c);
	}

	int sum=0,cnt =0;
	sort(d.begin(), d.end());
	for(auto p: d)
	{
		sum+=p.first;
		if(sum>k)
			break;
		cnt++;
	}
	cout << cnt << endl;
	for(int i=0;i<cnt;i++)
		cout << d[i].second<< " ";
	cout << endl;

	return 0;
}  