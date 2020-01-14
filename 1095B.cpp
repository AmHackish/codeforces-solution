#include <bits/stdc++.h>
 
using namespace std;
int main()
{
	int n;
	cin >> n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)
		cin >> v[i];
	sort(v.begin(),v.end());
	if(n == 1 or n==2)
		cout << 0 << endl;
	else
	{
		cout << min((v[n-2]-v[0]),(v[n-1]-v[1])) << endl;
	}
	return 0;
}