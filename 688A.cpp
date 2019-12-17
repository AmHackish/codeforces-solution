#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,days,p=0;
	cin >> n >> days;
	int beat=0;
	for(int i=0;i<days;i++)
	{
		string s;
		cin >> s;
		int k=0;
		for(int j=0;j<n;j++)
			if(s[j]=='0')
				k++;
		if(k)
			beat++;
		else
		{
			p = max(p,beat);
			beat = 0;
		}
	}
	if(beat > p)
		cout << beat << endl;
	else
		cout << p << endl;
	return 0;
}  