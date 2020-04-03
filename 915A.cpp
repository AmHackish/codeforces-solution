#include<bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
typedef long long int lli;
using namespace std;

int main()
{
	OPTIMASI

	int n,k,ans=10000;
	cin >> n >> k;

	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		if(k%a[i] == 0)
			ans = min(ans,k/a[i]);
	}
	cout << ans << endl;
	return 0; 
}