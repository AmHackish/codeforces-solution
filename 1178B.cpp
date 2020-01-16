#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	vector <long long int> f(s.length()), b(s.length());
	for(int i=1;i<s.length();i++){
		if(s[i]=='v' and s[i-1]=='v')
				f[i]=f[i-1]+1;
		else
			f[i]=f[i-1];
	}
	for(int i=s.length()-2;i>=0;i--){
		if(s[i]=='v' and s[i+1]=='v')
				b[i]=b[i+1]+1;
		else
			b[i]=b[i+1];
	}
	long long int sol=0;
	for(int i=0;i<s.length();i++)
		if(s[i]=='o')
			sol += f[i]*b[i];
	//for(int i=0;i<s.length();i++)
	//	cout << f[i] << " " << b[i] << endl;
	cout << sol << endl;
	return 0;
}  