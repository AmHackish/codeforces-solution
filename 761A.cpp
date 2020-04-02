#include<bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
typedef long long int lli;
using namespace std;

int main()
{
	OPTIMASI

	int a,b;
	cin >> a >> b;
	if(a == 0 and b == 0)
		cout << "NO" << endl;
	else if(abs(b-a)==1 or abs(b-a) == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0; 
}