#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int q;
	cin >> q;
	long long int n;
	for(int i=0; i<q; i++)
	{
		cin >> n;
		if(n == 2)
			cout << 2 << endl;
		else if(n%2!=0)
			cout << 1 << endl;
		else if(n%2 == 0)
			cout << 0 << endl;
	}
	cout << endl;
	return 0;
}