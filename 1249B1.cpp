#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	int q;
	cin >> q;

	while(q--)
	{
		int n;
		cin >> n;

		vector<int> p(n);
		for(int i=0;i<n;i++)
		{
			cin >> p[i];
			p[i]--;
		}

		for(int i=0;i<n;i++)
		{
			int cnt=0,k=i;
			do {
				cnt++;
				k = p[k];
			}
			while(k!=i);
			cout << cnt << " ";
		}
		cout << endl;
	}
}