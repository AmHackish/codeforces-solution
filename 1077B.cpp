#include<bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int main()
{
	OPTIMASI
	int n,cnt=0;
	cin >> n;

	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin >> v[i];

	for(int i=1;i<n-1;i++)
	{
		if(v[i] == 0)
		{
			if(v[i-1] == 1 and v[i+1] == 1)
			{
				cnt++;
				v[i+1] = 0;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}