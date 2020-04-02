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
		long long int  s,a,b,c,cho,k;
		cin >> s >> a >> b >> c;
		cho = s/c;
		k = cho/a;
		cho += k*b;
		cout << cho << endl;
	}

	return 0; 
}