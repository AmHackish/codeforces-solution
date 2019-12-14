#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,k,pr=0,l=0;
	cin >> n >> k;
	vector<int> v(n);
	for(int i=0; i<n; i++)
		cin >> v[i];
	for(int i=0;i<n; i++)
	{
		if(v[i]<=k)
			pr++;
		else
			break;
		l=i;
	}
	for(int i=n-1;i>l; i--)
	{
		if(v[i]<=k)
			pr++;
		else
			break;
	}	
	cout << pr << endl;
	return 0;
}  