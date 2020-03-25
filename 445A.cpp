#include <bits/stdc++.h>
 
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	vector<vector<char>> v(n,vector<char> (m));
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin >> v[i][j];

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(i%2 == 0 and j%2 == 0 and v[i][j] == '.')
				v[i][j] = 'B';
			else if(i%2!=0 and j%2!=0 and v[i][j] == '.')
				v[i][j] = 'B';
			else if(v[i][j] == '.')
				v[i][j] = 'W';
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cout << v[i][j];
		cout << endl;
	}
	return 0;
}