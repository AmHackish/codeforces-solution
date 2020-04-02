#include<bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
typedef long long int lli;
using namespace std;

int main()
{
	OPTIMASI

	int t;
	cin >> t;

	while(t--)
	{
		long long int n,k,i,moves=0;
		cin >> n >> k;
		while(n!=0)
		{
			i = n%k;
			n-=i;
			moves += i;
			if(n == 0)
			{
				break;
			}
			else
			{
				n=n/k;
				moves++;
			}
		}
		cout << moves << endl;
	}
	return 0; 
}