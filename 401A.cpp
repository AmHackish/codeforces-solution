#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,x;
	cin >> n >> x;
	int nct=0;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin >> v[i];
		nct += v[i];
	}
	if(abs(nct) == 0)
		cout << 0 << endl;
	else if(abs(nct)<x)
		cout << 1 << endl;
	else
	{
		if(abs(nct)%x == 0)
			cout << abs(nct)/x << endl;
		else
			cout << abs(nct)/x+1 << endl;
	}
	return 0;
}

