#include<bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
typedef long long int lli;
using namespace std;

int main()
{
	OPTIMASI

	int x;
	cin >> x;

	if(x==1)
		cout << -1 << endl;
	else
	{
		for(int i=1;i<=x;i++)
		{
			for(int j=1;j<=x;j++)
			{
				if((i*j) > x and (j%i) == 0 and (j/i) <x)
				{
					cout << j << " " << i << endl;
					return 0;
				}
			}
		}
		cout<< -1<< endl;
	}
	return 0; 
}