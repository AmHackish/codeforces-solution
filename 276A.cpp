#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n,k;
	cin >> n>>k;
	vector<long long int> joy(n);
	for(int i=0; i<n; i++)
	{
		long long int f,t;
		cin >> f >> t;
		if(t>k)
			joy[i] = f-(t-k);
		else
			joy[i] = f;	
	}
	sort(joy.begin(),joy.end());
	cout << joy[n-1] << endl;
	return 0;
}  