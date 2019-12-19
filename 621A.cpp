#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	std::vector<long long int> v(n);
	std::vector<long long int> odd;
	long long int sum=0;
	for(int i=0;i<n;i++)
	{
		cin >> v[i];
		if(v[i]%2==0)
			sum+=v[i];
		else
			odd.push_back(v[i]);
	}
	if(odd.size()%2 == 0)
	{
		for(int i=0;i<odd.size();i++)
			sum+=odd[i];
	}
	else
	{
		sort(odd.begin(),odd.end());
		for(int i=1;i<odd.size();i++)
			sum+=odd[i];
	}
	cout << sum << endl;
	return 0;
} 