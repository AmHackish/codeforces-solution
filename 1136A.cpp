#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		int l,r;
		cin>>l>>r;
		v[i] = r-l+1;
	}
	int k;
	cin>>k;
	for(int i=0;i<n;i++)
	{
		if((k-v[i])<=0)
		{
			n = n-i;
			break;
		}
		else
			k=k-v[i];
	}
	cout << n<<endl;
	return 0;
}  