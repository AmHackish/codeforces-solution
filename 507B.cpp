#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
	fast;

	double r,x,y,x1,y1;
	cin >> r >> x >> y >> x1 >> y1;

	double d = sqrt(abs((x1-x)*(x1-x)) + abs((y1-y)*(y1-y)));
	r = r*2;
	cout << ceil(d/r) << endl;
	return 0;
}