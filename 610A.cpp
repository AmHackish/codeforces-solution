#include<bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int main()
{
	OPTIMASI
	long long int n;
	cin >> n;
	if(n%2 == 1)
		cout << 0 << endl;
	else
	{
		n = n/2;
		if(n%2 == 0)
			cout << n/2-1 << endl;
		else
			cout << n/2 << endl;
	}
	return 0;
}