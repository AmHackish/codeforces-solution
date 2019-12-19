#include <bits/stdc++.h>
using namespace std;

int main()
{
	int d1,d2,d3;
	cin >> d1 >> d2 >> d3;
	std::vector<int> v(4);
	v[0] = 2*d1 + 2*d2;
	v[1] = d1 + d3 + d2;
	v[2] = 2*d1 + 2*d3;
	v[3] = 2*d2 + 2*d3;
	sort(v.begin(),v.end());
	cout << v[0] << endl;

	return 0;
} 