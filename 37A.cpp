#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string s;
	cin >> s;

	int j = 0;
	for(int i=0;i<s.length()-1;i++)
	{
		if(s[i]==s[i+1])
		{
			s.erase(s.begin()+i);
			s.erase(s.begin()+i);
			j++;
			i=0;
		}
	}
	if(s.length()==2 and s[0]==s[1])
		j++;
	if(j%2 == 0)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
	return 0;

}
  