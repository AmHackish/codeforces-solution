#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if(n%2 == 0)
	{
		cout << n/2 << endl;
		for(int i=0;i<n/2; i++)
			cout << 2 << " ";
		cout << endl;
	}
	else
	{
		int k = n - ((n/2)-1)*2;
		cout << n/2 <<endl;
		for(int i=0;i<(n/2)-1; i++)
			cout << 2 << " ";
		cout << k << endl;
	}
	return 0;
}  