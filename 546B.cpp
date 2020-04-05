#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	int n;
	cin >> n;

	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin >> a[i];

	sort(a.begin(),a.end());
	int coin=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i] == a[j])
			{
				a[j]++;
				coin++;
			}
			else
				break;
		}
	}
	cout << coin << endl;
}