#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t;
	cin >> t;
	while(t--)
	{
		int ans=0,n,y,j;
		string s;
		cin >> s;
		bool test0 = true;
		for(char u:s)
			if(u == '0')
				{test0 = false;break;}
		if(test0)
		{
			cout << "cyan" << endl;
			continue;
		}
		for(char u:s)
			ans += u - '0';
		if(ans%3!=0)
		{
			cout << "cyan" << endl;
			continue;
		}
		bool teste = false;
		test0 = false;
		for(char u:s)
		{
			int te = u - '0';
			if(te == 0 and !test0)
				{test0 = true;continue;}
			if(te == 0 and test0)
				{teste = true;continue;}
			if(te%2 == 0)
				teste = true; 
		}
		if(teste)
			cout << "red" << endl;
		else
			cout << "cyan" << endl;
		
	}
	return 0;
}
  