#include<bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int main()
{
	OPTIMASI

	int t;
	cin >> t;

	while(t--)
	{
		int a,b,c,stone=0;
		cin >> a >> b >> c;
		c=c/2;
		stone = 3*min(c,b);
		b-=min(c,b);
		b/=2;
		stone += 3*min(a,b);
		cout << stone << endl;
	}
	return 0; 
}