#include<bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
typedef long long int lli;
using namespace std;

int main()
{
	OPTIMASI

	int n;
	cin >> n;

	vector<int> v;
	for(int i=1;i<=1000;i++)
	{
		int k=i;
		vector<int> a;
		a.clear();
		while(k!=0)
		{
			int j = k%10;
			a.push_back(j);
			k = k/10;
		}
		reverse(a.begin(),a.end());
		for(int l=0;l<a.size();l++)
			v.push_back(a[l]);
	}
	cout << v[n-1] << endl;
	return 0; 
}