#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<long long int> key(n);
	for(int i=0; i<n; i++)
		cin >> key[i];
	int cnt=0;
	sort(key.begin(), key.end());
	cnt = key[n-1] - key[0] + 1 - n;
	cout << cnt << endl;
	return 0;
}  