#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int>v(3);
	for(int i=0;i<3;i++)
		cin >> v[i];
	sort(v.begin(),v.end());
	if(n%v[0] == 0)
	{
		cout << n/v[0];
		return 0;
	}
	else
	{
		int k=0;
		while(n>v[0])
		{
			n = n-v[0];
			if(n<v[1])
				break;
			k++;
		}
		n = n+v[0];
		if(n%v[1] == 0)
		{
			cout << k+n/v[1] << endl;
			return 0;
		}
		else
		{
			while(n>v[1])
			{
				n=n-v[1];
				if(n<v[2])
					break;
				k++;
			}
			n = n+v[1];
			cout << k+n/v[2] << endl;
		}
	}
	return 0;

}  