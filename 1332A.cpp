#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	ios_base::sync_with_stdio(false);
  	cin.tie(NULL); 

  	int t;
  	cin >> t;

  	while(t--)
  	{
	  	lli a,b,c,d;
	  	lli x,y,x1,y1,x2,y2;
	  	cin >> a >> b >> c >> d;
	  	cin >> x >> y >> x1 >> y1 >> x2 >> y2;

	  	x+=-a+b;
	  	y+=-c+d;
	  	if(x>=x1 and x<=x2 and y>=y1 and y<=y2 and (x2>x1 or a+b==0) and (y2>y1 or c+d==0))
	  		cout << "Yes" << endl;
	  	else
	  		cout << "No" << endl;
	}
	  	return 0;
}