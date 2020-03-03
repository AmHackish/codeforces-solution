#include <bits/stdc++.h>

using namespace std;

int main(){
	int r,c;
	vector <string> mat(r);
	r=mat.size();
	c=mat[0].size();
	vector <string> result;
	string s;
	for (int i=0;i<c+2;i++) 
		s+="*";
	result.push_back(s);
	for (int i=0;i<r;i++)
	{
		string s1;
		s1="*"+mat[i]+"*";
		result.push_back(s1);
	}
	result.push_back(s);
}