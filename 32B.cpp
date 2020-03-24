#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s,t="";
	cin >> s;
	int i;
	if(s.length() == 1 and s[0] == '.')
		t+='0';
	for(i=0;i<s.length()-1;)
	{
		if(s[i] == '.')
		{
			t+='0';
			i++;
		}
		else if(s[i] == '-' and s[i+1] == '.')
		{
			t+='1';
			i+=2;
		}
		else if(s[i] == '-' and s[i+1] == '-')
		{
			t+='2';
			i+=2;
		}
	}
	if(s[s.length()-1]=='.')
	{
		if(s[s.length()-2]=='.')
			t+='0';
		else
		{
			if(t[t.length()-1] == '2')
				t+='0';
		}
	}
	cout << t << endl;
}
