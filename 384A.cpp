#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<vector<char>> v(n,vector<char> (n));
	if(n == 1)
		cout << 1 << endl << 'C' << endl;
	else
	{
		if(n%2 == 0)
		{
			for(int i=0;i<n;)
			{
				for(int j=0;j<n;)
				{
					v[i][j] = 'C';
					j++;
					v[i][j] = '.';
					j++;
				}
				i++;
				for(int j=0;j<n;)
				{
					v[i][j]='.';
					j++;
					v[i][j]='C';
					j++;
				}
				i++;
			}
		}
		else
		{
			cout << (n*n)/2 + 1 << endl;
			bool c=true;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					if(c){
						cout << 'C';
						c = !c;}
					else{
						cout << '.';
						c = !c;}
				}
				cout << endl;
			}
		}
		if(n%2==0)
		{
			cout << n*n/2 << endl;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				cout << v[i][j];
			cout << endl;
		}
		}
	}
	return 0;
}  