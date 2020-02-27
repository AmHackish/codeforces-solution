#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n,k,j=0,o=0;
	cin >> n >> k;

	vector<long long int> v(n);
	for(int i=0;i<n;i++)
		cin >> v[i];

	sort(v.begin(),v.end());
	int temp = 0,x=0;

	for(j=0;j<k;j++)
	{
		while(x!=n-1 and v[x] == temp)
			x++;
		cout << v[x]-temp << endl;
		temp = v[x];
	}
	return 0;

}
  