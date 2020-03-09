#include <bits/stdc++.h>
using namespace std;

int main()
{
	float l,h,ans;
	cin >> h >> l;
	ans = (l*l- h*h) / (2*h);
	cout << setprecision(9) << ans << endl;

}
