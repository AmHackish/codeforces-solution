#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	string s;
	cin >> s;

	vector<string> name(5);
	name[0] = "Danil";
	name[1] = "Olya";
	name[2] = "Salva";
	name[3] = "Ann";
	name[4] = "Nikita";

	vector<int> v(5);
	for(int j=0;j<5;j++)
	{
		for(int i=0;i<=s.length()-name[j].length();i++)
		{
			for(int k=0;k<name[j].length();k++)
				if(s[i+k]!=name[j][k])
					break;
			if(k == name[j].length())
				v[j]++;
		}
	}
	for(int i=0;i<5;i++)
		cout << v[i] << endl;
	sort(v.begin(),v.end());
	if(v[4] == 0)
		cout << "NO" << endl;
	if(v[4]>=2)
		cout << "NO" << endl;
	if(v[4] == 3 and v[3] == 0)
		cout << "YES" << endl;
	return 0;
}
  