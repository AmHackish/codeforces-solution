#include <bits/stdc++.h>
using namespace std;

int main()
{
	std::vector<int> v(5);
	int sum=0;
	for(int i=0;i<5;i++)
	{
		cin >> v[i];
		sum+=v[i];
	}
	if(sum%5 == 0 and sum!=0)
		cout << sum/5;
	else
		cout << -1 << endl;
	return 0;
} 