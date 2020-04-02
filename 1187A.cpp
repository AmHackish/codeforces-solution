#include<bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
typedef long long int lli;
using namespace std;

int main()
{
	OPTIMASI

	int T;
	cin >> T;

	while(T--)
	{
		long long int n,s,t;
		cin >> n >> s >> t;
		cout << max(n-s,n-t)+1 << endl;
	}
	return 0; 
}