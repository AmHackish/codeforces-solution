#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	vector<vector<int>> a(3, vector<int> (3));
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			cin >> a[i][j];

	vector<vector<int>> b(3, vector<int> (3,1));
	

	if(a[0][0]%2 !=0)
	{
		b[0][1]=0;
		b[1][0]=0; 
		b[0][0]=0;
	}
	if(a[0][1]%2 !=0)
	{
		b[0][1] = abs(b[0][1]-1);
		b[0][0] = abs(b[0][0]-1);
		b[0][2] = abs(b[0][2]-1);
		b[1][1] = abs(b[1][1]-1);	
	}
	if(a[0][2]%2 !=0)
	{
		b[0][2] = abs(b[0][2]-1);
		b[0][1] = abs(b[0][1]-1);
		b[1][2] = abs(b[1][2]-1);
	}
	if(a[1][0]%2!=0)
	{
		b[1][0] = abs(b[1][0]-1);
		b[0][0] = abs(b[0][0]-1);
		b[2][0] = abs(b[2][0]-1);
		b[1][1] = abs(b[1][1]-1);
	}
	if(a[1][1]%2!=0)
	{
		b[0][1] = abs(b[0][1]-1);
		b[1][1] = abs(b[1][1]-1);
		b[2][1] = abs(b[2][1]-1);
		b[1][0] = abs(b[1][0]-1);
		b[1][2] = abs(b[1][2]-1);		
	}
	if(a[1][2]%2!=0)
	{
		b[1][2] = abs(b[1][2]-1);
		b[0][2] = abs(b[0][2]-1);
		b[2][2] = abs(b[2][2]-1);
		b[1][1] = abs(b[1][1]-1);
	}
	if(a[2][0]%2 !=0)
	{
		b[2][0] = abs(b[2][0]-1);
		b[1][0] = abs(b[1][0]-1);
		b[2][1] = abs(b[2][1]-1);
	}
	if(a[2][2]%2 !=0)
	{
		b[2][2] = abs(b[2][2]-1);
		b[2][1] = abs(b[2][1]-1);
		b[1][2] = abs(b[1][2]-1);
	}
	if(a[2][1]%2 !=0)
	{
		b[2][1] = abs(b[2][1]-1);
		b[2][2] = abs(b[2][2]-1);
		b[2][0] = abs(b[2][0]-1);
		b[1][1] = abs(b[1][1]-1);	
	}

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cout << b[i][j];
		cout << endl;
	}

	return 0;
}
  