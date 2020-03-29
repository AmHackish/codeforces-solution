#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n;
		cin >> n;

		vector<int> a(n);
		for(int i=0;i<n;i++)
			cin >> a[i];

		int k=0;
		for(int i=0;i<n;i++)
		{
			for(int j=n-1;j>=0;j--)
			{
				if(a[i] == a[j] and abs(j-i) >=2)
				{
					k++;
					break;
				}
			}
			if(k)
				break;
		}
		if(k)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
