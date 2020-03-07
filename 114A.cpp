#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long int k,l;
	cin >> k >> l;
	float  x = log10(l)/log10(k);
	int t = floor(x);
	if(x == t)
	{
		if(pow(k,x) == l)
			cout << "YES" << endl << t-1 << endl;
		else
			cout << "NO" << endl;
	}
	else
		cout << "NO" << endl;
	return 0;
}
  