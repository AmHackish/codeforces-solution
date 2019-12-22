#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,d;
	cin >> n >> d;
	int sum=0;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin >> v[i];
		sum+=v[i];
	}
	sum += 10*(n-1);
	if(sum>d)
		cout << -1 << endl;
	else
	{
		d = d-sum;
		d = d/5;
		cout << (n-1)*2+d<<endl;
	}
	return 0;
}  