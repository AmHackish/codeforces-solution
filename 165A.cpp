#include <bits/stdc++.h>
 
using namespace std;
int main()
{
	int n;
	cin >> n;

	vector<pair<int,int>> c(n);
	for(int i=0;i<n;i++)
		cin >> c[i].first >> c[i].second;

	sort(c.begin(),c.end());

	if(n<5)
	{
		cout << 0 << endl;
		return 0;
	}
	else
	{
		int cnt=0;
		for(int i=2;i<=n-3;i++)
		{
			int a=0,b=0,d=0,e=0;
			for(int j=0;j<i and(b==0 or a==0);j++)
			{
				if(c[i].first == c[j].first and c[i].second > c[j].second)
					b++;
				if(c[i].first > c[j].first and c[i].second == c[j].second)
					a++;
			}
			for(int k=i+1;k<n and (e==0 or d==0);k++)
			{
				if(c[i].first == c[k].first and c[i].second < c[k].second)
					e++;
				if(c[i].first < c[k].first and c[i].second == c[k].second)
					d++;
			}
			if(a and b and e and d)
				cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}