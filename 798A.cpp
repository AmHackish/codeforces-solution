#include <bits/stdc++.h>

using namespace std;
int main()
{
	string s;
	cin >> s;
	int k=0;
	if(s.length() == 1)
	{
		cout << "YES" << endl;
		return 0;
	}
	for(int i=0; i<=(s.length()/2-1); i++)
			if(s[i] != s[s.length()-i-1])
				k++;
	if(k == 1)
		cout << "YES" << endl;
	else if(k == 0 and s.length()%2 !=0)
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
	return 0;
} 