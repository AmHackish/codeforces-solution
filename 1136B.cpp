#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n,k;
	cin >> n >> k;

	if(k == 1 or k == n)
		cout << 3*n << endl;
	else
		cout << min((3*n+k-1),(6+(n-k)*4+(k-2)*3)) << endl;
	return 0;

}
  