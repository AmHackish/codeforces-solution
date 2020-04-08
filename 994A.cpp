#include <bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n,m;
	cin >> n >> m;

	vector<int> x(n),y(m);
	for(int i=0;i<n;i++)
		cin >> x[i];

	for(int j=0;j<m;j++)
		cin >> y[j];

	vector<int>::iterator it;
	for(int j=0;j<n;j++)
	{
		it = find(y.begin(),y.end(),x[j]);
		if(it != y.end())
			cout << x[j] << " ";
	}
	cout << endl;
	return 0;
}
  