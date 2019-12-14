#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n;
	cin >> n;
	char a[n][n];
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin >> a[i][j];
	char c = a[0][1],X = a[0][0];
	int k=0,l=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if((i == j or j == n-1-i) and a[i][j] == X)
				l++;
			else if(i!=j and j!=n-1-i and a[i][j] == c)
				k++;
		}
	}
	if(l == (n+n-1) and k == ((n*n)-(n+n-1)))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
} 