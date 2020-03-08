#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
	fast
	int n;
	cin >> n;

	vector<pair<int,int>> days(n*n);
	vector<bool>a(51,false);
	vector<bool>b(51,false);
	vector<int>ans;

	for(int i=0;i<n*n;i++)
		cin >> days[i].first >> days[i].second;

	for(int i=0;i<n*n;i++)
	{
		if(a[days[i].first] == false and b[days[i].second] == false)	
		{
			ans.push_back(i+1);
			a[days[i].first] = true;
			b[days[i].second] = true;
		}
	}

	for(int i=0;i<ans.size();i++)
		cout << ans[i] << " ";
	cout << endl;
	return 0;
}
  