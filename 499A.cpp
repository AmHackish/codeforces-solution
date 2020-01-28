#include <bits/stdc++.h>
 
using namespace std;
int main()
{
	int n,x;
	cin >> n >> x;

	vector<pair<int,int>> c(n);
	for(int i=0;i<n;i++)
		cin >> c[i].first >> c[i].second;

	sort(c.begin(),c.end());

	int t=1,m=0;
	for(int i=0;i<n;i++)
	{
		bool k=false;
		while(c[i].first >= t)
		{
			k=true;
			t=t+x;
		}
		if(k)
			t=t-x;
		m+=c[i].second-t+1;
		t=c[i].second+1;
	}
	cout << m << endl;
	return 0;
}