#include <bits/stdc++.h>
 
using namespace std;
int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	int maxi = a+b*c;
	if(maxi < (a*(b+c)))
		maxi = a*(b+c);
	if(maxi < (a*b*c))
		maxi = a*b*c;
	if(maxi < ((a+b)*c))
		maxi = (a+b)*c;
	if(maxi < (a+b+c))
		maxi = a+b+c;
	if(maxi < (a*b+c))
		maxi = a*b+c;
		
	cout << maxi << endl;
	return 0;
}