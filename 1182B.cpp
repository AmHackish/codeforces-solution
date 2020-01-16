#include <bits/stdc++.h>

using namespace std;

int main()
{
	int h,w;
	bool f=false;
	cin >> h >> w;
	vector<vector<char>> v(h,vector<char> (w));
	for(int i=0;i<h;i++)
		for(int j=0; j<w;j++)
			cin >> v[i][j];
	for(int i=1;i<h-1 and !f;i++)
	{
		for(int j=1;j<w-1 and !f;j++)
		{
			if(v[i][j] == '*' and v[i-1][j] == '*' and v[i+1][j] == '*' and v[i][j-1] == '*' and v[i][j+1] == '*')
			{
				f=true;
				for(int k=i;k>=0 and v[k][j]=='*';k--)
					v[k][j]='.';
				for(int k=i+1;k<h and v[k][j]=='*';k++)
					v[k][j]='.';
				for(int k=j-1;k>=0 and v[i][k]=='*';k--)
					v[i][k]='.';
				for(int k=j+1;k<w and v[i][k]=='*';k++)
					v[i][k]='.';
			}
		}
	}
	if(f)
		for(int i=0;i<h and f;i++)
			for(int j=0;j<w and f;j++)
				if(v[i][j]=='*')
					f=!f;
	if(f)
		cout << "YES" << endl;
	else
	cout << "NO" << endl;
	return 0;
}  