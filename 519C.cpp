#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
	fast;

	int n,m;
	cin >> n >> m;
	
	int t=0;
	while((n>=2 and m>=1) or (n>=1 and m>=2))
	{
		if(n>m)
		{
			n-=2;
			m--;
		}
		else
		{
			m-=2;
			n--;
		}
		t++;
	} 
	cout << t << endl;
	return 0;
}