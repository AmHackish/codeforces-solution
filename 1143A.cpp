#include<bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
typedef long long int lli;
using namespace std;

int main()
{
	OPTIMASI

	int k,ans=0,p=0;
	cin >> k;
	vector<int> a(k);
	for(int i=0;i<k;i++)
		cin >> a[i];

	for(int i=k-1;i>=0;i--)
	{
		if(a[i] == 0)
		{
			ans = i+1;
			break;
		}
	}
	for(int i=k-1;i>=0;i--)
	{
		if(a[i] == 1)
		{
			p = i+1;
			break;
		}
	}
	cout << min(ans,p) << endl;
	return 0; 
}