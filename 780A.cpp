#include <bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	n = n*2;
	int so=0,x,ans=0;
	map<int,int> socks;
	while(n--)
	{
		cin >> x;
		if(socks[x] == 1)
			so--;
		else
			so++;
		socks[x]++;
		ans = max(ans,so);
	}
	cout << ans << endl;

	return 0;
}
  