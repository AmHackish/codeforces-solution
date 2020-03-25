#include <bits/stdc++.h>
 
using namespace std;
int main()
{
	string s,t,p;
	cin >> s;

	int num=s[s.length()-1]-'0',index=-1;
	for(int i=0;i<s.length();i++)
	{
		if((s[i]-'0')%2 == 0)
		{
			index=i;
			if(num>(s[i]-'0'))
			{
				swap(s[i],s.back());
				cout << s << endl;
				return 0;
			}
		}
	}
	if(index == -1)
		cout << -1 << endl;
	else
	{
		swap(s[index],s.back());
		cout << s << endl;
	}
	return 0;
}