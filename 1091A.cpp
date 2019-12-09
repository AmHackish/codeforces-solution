#include <bits/stdc++.h>

using namespace std;

int main()
{
	int y,b,r;
	cin >> y >> b >> r;
	if((b-y)>=1 and (r-y)>=2)
		cout << y+y+1+y+2;
	else if((b-y)>=1 and (r-y)<2)
		cout << r+r-1+r-2;
	else if((b-y)<1 and (r-y)>=2)
		cout << b+b+b;
	else if((b-y)<1 and (r-y)<2)
	{
		if(b<r)
			cout << 3*b;
		else if(b>r)
			cout << r+r+r-3;
		else
			cout << r+r-1+r-2;

	} 
	return 0;
}  