#include <bits/stdc++.h>
 
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int>v(n);
	int cnt1=0,cnt2=0;
	for(int i=0;i<n;i++)
	{
		cin >> v[i];
		if(v[i]==0)
			cnt2++;
		else
			cnt1++;
	}
	if(cnt2 ==0)
		cout << -1 << endl;

	else if(cnt1<9)
		cout << 0 << endl;
	else 
	{
		cnt1 = cnt1 - (cnt1%9);
		for(int i=0;i<cnt1;i++)
			cout << 5;
		for(int j=0;j<cnt2;j++)
			cout << 0;
		cout << endl;
	}

	return 0;
}