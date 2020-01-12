#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b;
	cin >> a >> b;
	int hors=a;
	while(a>=b)
	{
		hors += a/b;
		a = a/b+a%b;
	}
	cout << hors << endl;
	return 0;
}

