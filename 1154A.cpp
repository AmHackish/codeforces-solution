#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	vector<long long int> v(4);
	for(int i=0; i<4; i++)
		cin >> v[i];
	sort(v.begin(),v.end());
	long long int a,b,c,d;
	a = v[3] - v[0];
	d = v[2] - v[1];
	b = (v[0]+d)/2;
	c = abs(v[0]-d)/2;
	cout << a << " " << b << " "  << c << endl;;
	return 0;
}