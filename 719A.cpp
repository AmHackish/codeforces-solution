#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	std::vector<int> v(n);
	for(int i=0; i<n; i++)
		cin >> v[i];
	if(n == 1 and v[0] == 15)
		cout << "DOWN" << endl;
	else if(n == 1 and v[0] == 0)
		cout << "UP" << endl;
	else if(n == 1)
		cout << -1 << endl;
	else
	{
		if(v[n-1] == 15)
			cout << "DOWN" << endl;
		else if(v[n-1] == 0)
			cout << "UP" << endl;
		else if(v[n-2]>v[n-1])
			cout << "DOWN" << endl;
		else 
			cout << "UP" << endl;
	}
	return 0;
}  