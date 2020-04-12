#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
	fast;

	int t;
	cin >> t;

	while(t--)
	{
		int n,m,sum=0;
		cin >> n >> m;

		vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin >> v[i];
			sum += v[i];
		}
		sum -= v[n-1];
		if(n == 1)
			cout << v[0] << endl;
		else
		{
			cout << min(m-v[n-1],sum)+v[n-1] << endl;
		}
	}
	return 0;
}