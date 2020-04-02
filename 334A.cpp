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
	for(int i=1;i<= n*n;i++)
		v.push_back(i);

	int x=0,y=n*n-1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n/2;j++)
		{
			cout << v[x] << " ";
			x++;
		}
		for(int j=0;j<n/2;j++)
		{
			cout << v[y] << " ";
			y--;
		}
		cout << endl;
	}
	return 0; 
}