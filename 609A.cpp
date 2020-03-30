#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	vector<int>a(n);
	for(int i=0;i<n;i++)
		cin >> a[i];

	sort(a.begin(),a.end(),greater<int>());

	int i=0,cnt=0,k=0;
	while(i<n)
	{
		if(a[i]>m)
			break;
		else
		{
			m-=a[i];
			k++;
		}
		i++;
	}
	if(m>0)
		cout << k+1 << endl;
	else
		cout << k << endl;
}