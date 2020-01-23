#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		vector<lli>v(n);
		bool b = false,c=false;
		vector<int >a(11);
		for(int i=0;i<n;i++)
		{
			cin >> v[i];
			if(v[i] == 2048)
				b = true;
			else if(v[i] == 1)
				a[0]++;
			else if(v[i] == 2)
				a[1]++;
			else if(v[i] == 4)
				a[2]++;
			else if(v[i] == 8)
				a[3]++;
			else if(v[i] == 16)
				a[4]++;
			else if(v[i] == 32)
				a[5]++;
			else if(v[i] == 64)
				a[6]++;
			else if(v[i] == 128)
				a[7]++;
			else if(v[i] == 256)
				a[8]++;
			else if(v[i] == 512)
				a[9]++;
			else if(v[i] == 1024)
				a[10]++;
		}
		if(b)
			cout << "YES" << endl;
		else
		{	
			for(int i=1;i<11;i++)
				a[i]+=a[i-1]/2;

			if(a[10]>=2)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;

		}	
	}
	return 0;
}
  