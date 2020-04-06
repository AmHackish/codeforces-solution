#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	ios_base::sync_with_stdio(false);
  	cin.tie(NULL); 

  	lli a,b,c;
  	cin >> a >> b >> c;
  	
  	lli ans = c*2+(min(a,b)*2);
  	if(a!=b)
  		ans++;
  	cout << ans << endl;
  	return 0;
}