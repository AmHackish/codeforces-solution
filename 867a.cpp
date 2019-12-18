#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,f=0,s=0;
	cin >> n;
	string si;
	cin >> si;
	for(int i=0;i<si.length()-1;i++)
	{
		if(si[i]=='F' and si[i+1]=='S')
			f++;
		else if(si[i]=='S' and si[i+1]=='F')
			s++;
	}
	if(s>f)
		cout << "YES" << endl;
	else
		cout << "NO"<<endl;
	return 0;
}  