#include<bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
typedef long long int lli;
using namespace std;

int main()
{
	OPTIMASI

	int k;
	cin >> k;
	while(k--)
	{
		int n,k=0;
		cin >> n;

		vector<int> a(n);
		for(int i=0;i<n;i++)
			cin >> a[i];

		sort(a.begin(),a.end(),greater<int> ());
		int maxi=0;
		for(int i=0;i<n;i++)
			maxi = max(maxi,min(i+1,a[i]));

		cout << maxi << endl;
	}

	return 0; 
}