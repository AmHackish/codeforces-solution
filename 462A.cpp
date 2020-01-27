#include <bits/stdc++.h>
 
using namespace std;
int main()
{
	string s,t;
	cin >> s;

	t=s;
	int cnt=0;
	for(int i=0;i<s.length();i++)
		if((s[i]-'0')%2 == 0)
		{
			cnt++;
			break;
		}

	if(cnt == 0)
		cout << -1 << endl;
	else
	{
		int n =s.length();
		int temp = INT_MIN,k=INT_MIN,j=0;
		for(int i=0;i<n-1;i++)
			if((s[i]-'0')%2 == 0)
			{
				j=i;
				temp = s[i];
				break;
			}
		int p=0;
		for(int i=0;i<n-1;i++)
			if((t[i]-'0')%2 == 0)
			{
				if(k<=t[i])
				{
					k = t[i];
					p=i;
				}
			}
		s[j] = s[n-1];
		s[n-1] = temp;
		t[p] = t[n-1];
		t[n-1] = k;
		cout << s << " " << t << endl;
		if(s>t)
			cout << s << endl;
		else
			cout << t << endl;
	}

	return 0;
}