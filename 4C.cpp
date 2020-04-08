#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	ios_base::sync_with_stdio(false);
  	cin.tie(NULL); 

  	int t;
  	cin >> t;

  	while(t--)
  	{
		int n,m;
		cin >> n >> m;

		vector<vector<char>> a(n,vector<char> (m));

		if((n*m)%2 == 0)
		{
			for(int i=0;i<n-1;i++)
			{
				if(i%2 == 0)
				{
					int j=0;
					while(j<m)
					{
						if(j%2 == 0)
							a[i][j] = 'B';
						else
							a[i][j] = 'W';
						j++;
					}
				}
				else
				{
					int j=0;
					while(j<m)
					{
						if(j%2 == 0)
							a[i][j] = 'W';
						else
							a[i][j] = 'B';
						j++;
					}
				}
			}
			for(int j=0;j<m;j++)
			{
				a[n-1][j] = 'B';
			}
		}
		else
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<m;j+=4)
				{
					a[i][j]='B';
				}
				for(int j=1;j<m;j+=2)
					a[i][j] = 'W';
				for(int j=2;j<m;j+=6)
				{
					if(i%2 == 0)
						a[i][j] = 'B';
					else
						a[i][j] = 'W';
				}
			}
		}

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
				cout << a[i][j];
			cout << endl;
		}

	}
  	return 0;
}