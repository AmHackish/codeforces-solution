#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
	fast;

	int n;
	cin >> n;

	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin >> a[i];

	sort(a.begin(),a.end());
	vector<int>ans;
	for(int i=0;i<n;i++)
		if(a[i]!=a[i+1])
			ans.push_back(a[i]);

	if(a[n-1]!=a[n-2])
		ans.push_back(a[n-1]);

	for(auto x:ans)
		cout << x << " ";
	return 0;
}