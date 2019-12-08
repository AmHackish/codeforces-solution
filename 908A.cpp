#include <bits/stdc++.h>
 
using namespace std;
int main()
{
	string s;
	cin >> s;
	int cnt=0;
	for(int i=0; i<s.length(); i++)
	{
		if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u' or s[i] == '1' or s[i] == '3' or s[i] == '5' or s[i] == '7' or s[i] == '9')
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}