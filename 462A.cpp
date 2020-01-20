#include <bits/stdc++.h>
 
using namespace std;
int main()
{
	int t;
	cin >> t;
	vector<vector<char> > a(t,vector<char> (t));
	for(int i=0;i<t;i++)
		for(int j=0;j<t;j++)
			cin >> a[i][j];
	if(a.size()>1)
	{
		for(int i=0;i<t;i++)
		{
			for(int j=0;j<t;j++)
			{
				int cnt=0;
				if(i == 0 and j==0)
				{
					if(a[i+1][j] == 'o')
						cnt++;
					if(a[i][j+1] == 'o')
						cnt++;
				}
				else if(i == 0 and j==t-1)
				{
					if(a[i+1][j] == 'o')
						cnt++;
					if(a[i][j-1] =='o')
						cnt++;
				}
				else if(i == t-1 and j==0)
				{
					if(a[i-1][j]=='o')
						cnt++;
					if(a[i][j+1]=='o')
						cnt++;
				}
				else if(i==t-1 and j==t-1)
				{
					if(a[i-1][j]=='o')
						cnt++;
					if(a[i][j-1]=='o')
						cnt++;
				}
				else if(i==0)
				{
					if(a[i+1][j]=='o')
						cnt++;
					if(a[i][j+1]=='o')
						cnt++;
					if(a[i][j-1]=='o')
						cnt++;
				}
				else if(j ==0)
				{
					if(a[i+1][j]=='o')
						cnt++;
					if(a[i][j+1]=='o')
						cnt++;
					if(a[i-1][j]=='o')
						cnt++;
				}
				else if(i == t-1)
				{
					if(a[i-1][j]=='o')
						cnt++;
					if(a[i][j+1]=='o')
						cnt++;
					if(a[i][j-1]=='o')
						cnt++;
				}
				else if(j == t-1)
				{
					if(a[i-1][j]=='o')
						cnt++;
					if(a[i+1][j]=='o')
						cnt++;
					if(a[i][j-1]=='o')
						cnt++;
				}
				else
				{
					if(a[i+1][j]=='o')
						cnt++;
					if(a[i-1][j]=='o')
						cnt++;
					if(a[i][j-1]=='o')
						cnt++;
					if(a[i][j+1]=='o')
						cnt++;
				}
				if(cnt%2 !=0)
				{
					cout << "NO" << endl;
					return 0;
				}
			}
		}
	}
	cout << "YES" << endl;
	return 0;
}