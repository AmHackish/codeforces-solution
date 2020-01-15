#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int a,b,ships=0;
	cin >> a >> b;
	while(a<=0 and a!=b)
	{
		ships++;
		a=a-b;
	}
	cout << ships << endl;
	return 0;
}  