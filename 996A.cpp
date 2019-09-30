#include <bits/stdc++.h>
 
using namespace std;
int main()
{
	long long int n;
	int p,q,r,s,t=0;
	cin >> n;
	p = n/100;
	t += p;
	n = n-(p*100);
	q = n/20;
	t += q;
	n = n-(q*20);
	r = n/10;
	t += r;
	n = n-(r*10);
	s = n/5;
	t += s;
	t+= (n-(s*5));
	cout << t << endl;
	return 0;
}