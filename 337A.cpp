#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,t;
	cin >> n >>t;
	std::vector<int> v(t);
	for(int i=0;i<t;i++)
		cin >> v[i];
	std::vector<int>dif;
	sort(v.begin(),v.end());
	for(int i=0;i<t-(n-1);i++)
		dif.push_back(v[i+n-1]-v[i]);
	sort(dif.begin(),dif.end());
	cout << dif[0] << endl;
}  