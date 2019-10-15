#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int n,k,l,c,d,p,nl,np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int a,b,h;
	a = (k*l)/nl;
	b = c*d;
	h = p/np;
	int mini,minii;
	if(a < b)
		mini = a;
	else
		mini = b;
	if(mini < h)
		minii = mini;
	else
		minii = h; 
	int ans;
	ans = minii/n;
	cout << ans << endl;
	return 0;
}