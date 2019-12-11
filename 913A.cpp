#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n,m,l,rem=0;
	cin >> n >> m;
	l = pow(2,n);
	rem = m%l;
	cout << rem << endl;
	return 0;
}  