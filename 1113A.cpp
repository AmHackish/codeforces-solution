#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	int n,v;
	cin >> n >> v;
	if(v>=n)
		cout << n-1 << endl;
	else
	{
		int cost = v,fuel = v;
		for(int i=1;i<n;i++)
		{	
			fuel--;
			if((n-i-1)>fuel)
			{
				cost += i+1;
				fuel++;
			}
		}
		cout << cost << endl;
	}
    return 0;
}
