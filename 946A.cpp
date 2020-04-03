#include<bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
typedef long long int lli;
using namespace std;

int main()
{
	OPTIMASI

	int n,B=0,C=0;
	cin >> n;

	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		if(a[i]<0)
			B+=a[i];
		else
			C+=a[i];
	}
	cout << C-B << endl;
	return 0; 
}