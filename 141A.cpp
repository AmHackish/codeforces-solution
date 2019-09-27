#include <bits/stdc++.h>
 
using namespace std;
int main()
{
	string s1,s2,s3;
	int k=0,m=0;
	cin >> s1 >> s2 >> s3;
	vector<int> night1(26);
	vector<int> night2(26);
	for(int i=0; i<s1.length(); i++)
		night1[s1[i]-65]++;
	for(int j=0; j<s2.length(); j++)
		night1[s2[j]-65]++;
	for(int i=0; i<s3.length(); i++)
		night2[s3[i]-65]++;
	for(int i=0; i<26; i++)
		if(night1[i] != night2[i])
			k++;
	if(k)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;

	return 0;
}