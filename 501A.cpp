#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int vasya=0,misha=0;
	vasya = max(((3*b)/10),(b-((b/250)*d)));
	misha = max(((3*a)/10),(a-((a/250)*c)));
	if(vasya>misha)
		cout << "Vasya" << endl;
	else if(vasya < misha)
		cout << "Misha" << endl;
	else
		cout << "Tie" << endl;
	return 0;
}