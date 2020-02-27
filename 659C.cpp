#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long int n,m;
	cin >> n >> m;

	vector<long long int>v(n);
	for(long long int i=0;i<n;i++)
		cin >> v[i];

	sort(v.begin(),v.end());

	long long int i=1,j=0;
	vector<long long int> c;

	while(m>0)
	{
		if(i == v[j])
			i++,j++;
		else
		{
			c.push_back(i);
			m=m-i;
			i++;
		}
	}
	int k =c.size();
	if(m < 0)
		k --;
	cout << k << endl;
	for(int i=0;i<k;i++)
		cout << c[i] << " ";
	cout << endl;

	return 0;

}
  