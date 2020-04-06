#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	ios_base::sync_with_stdio(false);
  	cin.tie(NULL); 

  	int t;
  	cin >> t;

  	while(t--)
  	{
	  	string s;
	  	cin >> s;

	  	set<char> t;
	  	for(int i=0;i<s.length();i++)
	  	{
	  		if(s[i]==s[i+1])
	  			i++;
	  		else
	  			t.insert(s[i]);
	  	}
	  	for(auto x : t)
	  		cout << x;
	  	cout << endl;
	  }
  	return 0;
}