#include <bits/stdc++.h>
 
using namespace std;
int main()
{
	int n,t,k=0;
	cin >> n >> t;
	vector<int> a(n);
	for(int i=1; i<n; i++)
		cin >> a[i];
	int i=1;
	while(i+a[i] <= t)
	{
		if((i+a[i] == t))
		{
			k++;
			break;
		}
		i = i+a[i];
	}
	if(k)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}