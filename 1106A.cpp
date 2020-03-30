#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<vector<char>> a(n,vector<char> (n));
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin >> a[i][j];

	int cnt=0;
	for(int i=1;i<n-1;i++)
		for(int j=1;j<n-1;j++)
		{
			if(a[i][j] == 'X')
			{
				if(a[i-1][j-1] == a[i-1][j+1] and a[i-1][j-1] == 'X' and a[i-1][j-1] == a[i+1][j-1] and a[i-1][j-1] == a[i+1][j+1])
					cnt++;
			}
		}
	cout << cnt << endl;

	return 0;
}