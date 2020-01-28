#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string s;
	cin >> s;
	if(s[0] == 'a' and s[1] == '1')
		cout << 3 << endl;
	else if(s[0] == 'h' and s[1] == '1')
		cout << 3 << endl;
	else if(s[0] == 'a' and s[1] == '8')
		cout << 3 << endl;
	else if(s[0] == 'h' and s[1] == '8')
		cout << 3 << endl;
	else if(s[1]=='1' and s[0] != 'a' and s[0]!='h')
		cout << 5 << endl;
	else if(s[1]=='8' and s[0] != 'a' and s[0]!='h')
		cout << 5 << endl;
	else if(s[0] == 'a' and s[1]!='1' and s[1]!='8')
		cout << 5 << endl;
	else if(s[0] == 'h' and s[1]!='1' and s[1]!='8')
 		cout << 5 << endl;
 	else 
 		cout << 8 << endl;
	
	return 0;
}
  