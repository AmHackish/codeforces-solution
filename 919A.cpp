#include <bits/stdc++.h>
using namespace std;

int main()
{
	float n,m;
	float cost=10000000;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		float a,b;
		cin>>a>>b;
		cost = min(cost,(a*m)/b);
	}
	cout<< setprecision(8)<<cost<<endl;
	return 0;
}  