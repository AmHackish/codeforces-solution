#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	vector<int> v(4);
	cin >> v[0] >> v[1] >> v[2] >> v[3];
	sort(v.begin(),v.end());

	if(v[2]+v[1]>v[3] and v[3]+v[2]>v[1] and v[1]+v[3]>v[2])
		cout << "TRIANGLE" << endl;
	else if(v[0]+v[1]>v[2] and v[1]+v[2]>v[0] and v[2]+v[0]>v[1])
		cout << "TRIANGLE" << endl;
	else if(v[0]+v[1]>v[3] and v[3]+v[1]>v[0] and v[0]+v[3]>v[1])
		cout << "TRIANGLE" << endl;
	else if(v[0]+v[1] == v[2] or v[1]+v[2] == v[3])
		cout << "SEGMENT" << endl;
	else
		cout << "IMPOSSIBLE" << endl;
	return 0;
}
  