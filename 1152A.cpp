#include<bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
typedef long long int lli;
using namespace std;

int main()
{
	OPTIMASI

	int n,m,ev=0,odd=0,ev2=0,odd2=0;
	cin >> n >> m;

	vector<lli> chest(n),keys(m);
	for(int i=0;i<n;i++)
	{
		cin >> chest[i];
		if(chest[i]%2 == 0)
			ev++;
		else
			odd++;
	}
	for(int i=0;i<m;i++)
	{
		cin >> keys[i];
		if(keys[i]%2 == 0)
			ev2++;
		else
			odd2++;
	}
	cout << min(ev,odd2)+min(odd,ev2) << endl;
	return 0; 
}