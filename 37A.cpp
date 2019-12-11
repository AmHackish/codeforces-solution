#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> bar(n);
	for(int i=0; i<n; i++)
		cin >> bar[i];
	vector<int> v(1001);
	for(int i=0; i<n; i++)
		v[bar[i]]++;
	sort(v.begin(), v.end());
	int cnt=0;
	for(int i=0; i<1001; i++)
		if(v[i]!=0)
			cnt++;
	cout << v[1000] << " " << cnt << endl;
	return 0;
}  