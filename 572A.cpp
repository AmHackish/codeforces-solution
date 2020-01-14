#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x,y,k,m;
	cin >> x >> y >> k  >> m;
	std::vector<int> a(x);
	std::vector<int> b(y);
	for(int i=0;i<x;i++)
		cin >> a[i];
	for(int j=0;j<y;j++)
		cin >> b[j];
	if(a[k-1]>=b[y-m])
		cout << "NO" << endl;
	else 
		cout << "YES" << endl;
	return 0;
}  