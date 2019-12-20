#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<string> v(n);
	for(int i=0;i<n;i++)
		cin >> v[i];
	int a=0,b=0;
	string s = v[0];
	for(int i=0;i<n;i++)
	{
		if(v[0] == v[i])
			b++;
		else
			a = i;
	}
	string str=v[a];
	if(b>(n-b))
		cout << s << endl;
	else
		cout << str << endl;
	return 0;

}  