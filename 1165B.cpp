#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL); 

	int n;
	cin >> n;

	vector<int> a(n);
	map<int,int> m;

	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		m[a[i]]++;
	}

	sort(a.begin(),a.end());
	int j=1,cnt=0;
	for(int i=0;i<n;i++)
	{
		if(a[i] >= j)
		{
			m[a[i]]--;
			j++;
		}
		else
		{
			i+=m[a[i]];
			if(a[i]>=j)
			{
				m[a[i]]--;
				j++;
			}
		}
	}
	cout << j-1  << endl;

	return 0;
}