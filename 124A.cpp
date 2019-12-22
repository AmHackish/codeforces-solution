#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,b,t;
	cin >> n >> a >> b;
	n = n-a;
	t = n;
	n = n-b;
	if(n == 0)
		cout << b << endl;
	else if(n<0)
		cout << t << endl;
	else 
		cout << b+1 << endl;
	return 0;
}  