#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,cnt=0;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		string s;
		int b,a;
		cin >> s >> b >> a;
		if(b>=2400 and a>b)
			cnt++;
	}
	if(cnt)
	cout <<"YES"<<endl;
	else
		cout <<"NO"<<endl;
	return 0;
}  