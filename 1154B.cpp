#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
	fast
	int n;
	cin >> n;

	vector<int> a(n);
	vector<int>ans;

	for(int i=0;i<n;i++)
		cin >> a[i];

	sort(a.begin(),a.end());
	
	for(int i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1])
			continue;
		else
			ans.push_back(a[i]);
	}
	ans.push_back(a[n-1]);
	int cnt = ans.size();

	if(cnt == 1)
		cout << 0 << endl;

	else if(cnt == 2)
	{
		if(ans[0]%2!=0 and ans[1]%2!=0)
			cout << (ans[1]-ans[0])/2<< endl;
		else if(ans[0]%2 == 0 and ans[1]%2 == 0)
			cout << (ans[1]-ans[0])/2<< endl;
		else
			cout << ans[1]-ans[0] << endl; 

	}
		
	else if(cnt > 3)
		cout << -1 << endl;
	else if(cnt == 3)
	{
		if(ans[2]-ans[1] != ans[1]-ans[0])
			cout << -1 << endl;
		else
			cout << ans[2]-ans[1] << endl;
	}
	return 0;
}
  