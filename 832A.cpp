#include <bits/stdc++.h>

using namespace std;
int main()
{
	unsigned long long int n,k,u;
	cin >> n >> k;
	u = n/k;
	if(u%2 !=0 or (k == 1 and n%2!=0))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}  