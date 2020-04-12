#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
	fast;

	lli a,b,s,m;
	cin >> a >> b >> s;

	a = abs(a);
	b = abs(b);
	m = a+b;
	m = s-m;
	if(m == 0)
		cout << "Yes" << endl;
	else if(m<0)
		cout << "No" << endl;
	else
	{
		if(m%2 == 0)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}