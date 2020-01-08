#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int cnt=0,pnt=0,index=0;
	cin >> s;
	for(int i=0;i<s.length()-1;i++)
	{
		if(s[i] == 'A' and s[i+1] == 'B')
		{
			cnt++;
		}
	}
	for(int j=0;j<s.length()-1;j++)
		if(s[j] == 'B' and s[j+1] == 'A')
		{
			pnt++;
		}
	if(pnt == 0 and cnt == 0 )
		cout << "NO" << endl;
	else if(pnt == 1 and cnt == 1)
	{
		for(int i=1;i<s.length()-1;i++)
		{
			if(s[i] == 'A' and s[i+1] == 'B' and s[i-1] == 'B')
				index++;
			if(s[i] == 'B' and s[i+1] == 'A' and s[i-1] == 'A')
				index++;
		}
		if(index)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;

	}
	else if(pnt!=0 and cnt!=0)
		cout << "YES" << endl;
}
