#include<bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
typedef long long int lli;
using namespace std;

int main()
{
	OPTIMASI

	int n,m;
	cin >> n >> m;

	vector<string> ans(n);
	for(int i=0;i<n;i++)
		cin >> ans[i];

	vector<int> marks(m);
	for(int i=0;i<m;i++)
		cin >> marks[i];

	int j=0,score=0;
	for(int j=0;j<m;j++)
	{
		int a=0,b=0,c=0,d=0,e=0,k=0;
		for(int i=0;i<n;i++)
		{
			if(ans[i][j] == 'A')
				a++;
			if(ans[i][j] == 'B')
				b++;
			if(ans[i][j] == 'C')
				c++;
			if(ans[i][j] == 'D')
				d++;
			if(ans[i][j] == 'E')
				e++;
		}
		k = max(a,max(b,max(c,max(d,e))));
		score += marks[j]*k;
	}
	cout << score << endl;
	return 0; 
}