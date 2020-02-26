#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t;
	cin >> t;
	
	vector<long long int> v(t);
	for(int i=0;i<t;i++)
		cin >> v[i];

	vector<pair<long long int,long long int> > c(t);
	for(int i=0;i<t;i++)
	{
		c[i].second = i+1;
		c[i].first = v[i];
	}

	sort(v.begin(),v.end());
	if(t == 1)
		cout << 1 << endl;
	else if(v[0] == v[1])
		cout << "Still Rozdil" << endl;
	else
	{
		 for(int i=0;i<t; i++)
		 	if(c[i].first == v[0])
		 	{
		 		cout << c[i].second;
		 		break;
		 	}
	}

	return 0;

}
  