#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	
	vector<long long int> v(t),a(t);
	for(int i=0;i<t;i++)
		cin >> v[i];

	sort(v.begin(),v.end());
	int sol=0;
	for(int i=0;i<t-1;i+=2)
		sol+= v[i+1]-v[i];
	cout << sol << endl;
	return 0;
}
