#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int n,m,u;
	cin >> u;
	for(int i=0; i<u; i++)
	{
		cin >> n >> m;
	int sockes = n,t=n/m;
	while(t!=0)
	{
		sockes += t;
		t = (sockes - n)/m;
		n = sockes;
	}
	if(sockes%m == 0)
		sockes ++;
	cout << sockes << endl;
	}
	return 0;
}