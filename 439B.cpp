#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n,x;
	cin >> n >> x;

	vector<long long int>v(n);
	for(int i=0;i<n;i++)
		cin >> v[i];

	long long int time=0;

	sort(v.begin(),v.end());
	for(int i=0;i<n;i++)
	{
		time+=v[i]*x;
		if(x>1)
			x--;
	}
	cout << time << endl;
	return 0;

}
  