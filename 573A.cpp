#include<bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int main()
{
	OPTIMASI
	int n;
	cin >> n;

	vector<long long int> a(n);
	for(int i=0;i<n;i++)
		cin >> a[i];

	for(int i=0;i<n;i++)
	{
		while(a[i]%2 == 0)
			a[i]/=2;
		while(a[i]%3 == 0)
			a[i]/=3;
	}
	for(int i=0;i<n-1;i++)
		if(a[i]!=a[i+1])
		{
			cout << "No" << endl;
			return 0;
		}
	cout << "Yes" << endl;
	return 0; 
}