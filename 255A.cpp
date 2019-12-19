#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	std::vector<int> v(n);
	pair<int,int>c;
	std::vector<pair<int,int>> d;
	
	for(int i=0;i<n;i++)
	{
		cin >> v[i];
		c=make_pair(i,v[i]);
		d.push_back(c);
	}
	std::vector<int> res(3);
	for(int i=0;i<n;i=i+3)
		res[0]+=d[i].second;
	for(int i=1;i<n;i=i+3)
		res[1]+=d[i].second;
	for(int i=2;i<n;i=i+3)
		res[2]+=d[i].second;
	if(res[0]>res[1] and res[0]>res[2])
		cout << "chest" << endl;
	else if(res[1]>res[0] and res[1]>res[2])
		cout << "biceps" << endl;
	else if(res[2]>res[1] and res[2]>res[0])
		cout << "back" << endl;
	return 0;
} 