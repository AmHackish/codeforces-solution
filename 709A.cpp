#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,d,b;
	cin >> n >> b >> d;
	int cnt=0;
	std::vector<int> a(n);
	for(int i=0;i<n;i++)
		cin >> a[i];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>b)
			continue;
		else
		{
			sum+=a[i];
			if(sum>d)
			{
				cnt++;
				sum=0;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}  