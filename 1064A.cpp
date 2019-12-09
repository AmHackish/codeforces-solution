#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> v(3);
	cin >> v[0] >> v[1] >> v[2];
	if((v[0]+v[1]) > v[2] and (v[1]+v[2]) > v[0] and (v[2]+v[0]) > v[1])
		cout << 0 << endl;
	else
	{
		sort(v.begin(), v.end());
		cout << v[2]-v[0]-v[1]+1 << endl;
	}
	return 0;
}  