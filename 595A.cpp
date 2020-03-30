#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	
	m = m*2;
	vector<vector<int>> light(n, vector<int> (m));

	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin >> light[i][j];

	int cnt=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j+=2)
		{
			if(light[i][j] == 1 or light[i][j+1]==1)
				cnt++;
		}
	}
	cout << cnt << endl;
}