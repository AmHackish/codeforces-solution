#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	int h1,m1,h2,m2;
	char c1,c2;
	cin >> h1 >> c1 >> m1 >> h2 >> c2 >>  m2;

	if(m1 == 0 and m2 == 0)
		m1 = 30;
	else
		m1 = (m1+m2)/2;
	if(h1 != h2)
		h1 = (h1+h2)/2;
	if(h1 < 10)
		cout << 0 << h1 << c1;
	else
		cout << h1 << c1;
	if(m1<10)
		cout << 0 << m1 << endl;
	else
		cout << m1 << endl;
	return 0;
}
