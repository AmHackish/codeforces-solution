#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	if(c == 0 and a==b)
		cout<<"YES"<<endl;
	else if(c==0 and a!=b)
		cout <<"NO"<<endl;
	else
	{
		while(a<b and c>0)
			a = a+c;	
		while(a>b and c<0 )
			a = a+c;
		if(a == b)
			cout << "YES"<<endl;
		else
			cout<<"NO"<<endl;	
	}
	return 0;
}  