#include <bits/stdc++.h>
using namespace std;

int main()
{
	int r,c;
	cin >> r >> c;
	char a[r][c];
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			cin >> a[i][j];
	int k=0,l=0,strawberry=0;
	for(int i=0;i<r;i++)
	{
		k=0;
		for(int j=0;j<c;j++)
			if(a[i][j] == 'S')
				k++;
		if(k == 0)
			strawberry += c;
	}
	k=strawberry/c;
	for(int i=0;i<c;i++)
	{
		l=0;
		for(int j=0;j<r;j++)
			if(a[j][i] == 'S')
				l++;

		if(l == 0)
			strawberry += r-k;
	}	
	cout << strawberry << endl;
	return 0;
} 