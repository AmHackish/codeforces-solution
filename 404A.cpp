#include <bits/stdc++.h>
 
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<vector<char> > a(n,vector<char> (n));
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin >> a[i][j];
	char c=a[0][0],k=a[0][1];
	
	if(c!=k)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i == j and c != a[i][j])
				{
					cout << "NO" << endl;
					return 0;
				}
				else if(i+j == n-1 and c!=a[i][j])
				{
					cout << "NO" << endl;
					return 0;
				}
				else if(a[i][j]!=k and i!=j and (i+j)!=n-1)
				{
					cout << "NO" << endl;
					return 0;
				} 

			}

		}
	}
	else
	{
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;
	return 0;
}