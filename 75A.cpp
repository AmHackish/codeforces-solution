#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	long long int a,b,c,d=0,e=0,f=0;
	cin >> a >> b;
	c = a+b;
	vector<int> s1,s2,s3;
	while(a!=0)
	{
		lli rem = a%10;
		if(rem!=0)
			s1.push_back(rem);
		a=a/10;
	}
	while(b!=0)
	{
		lli rem = b%10;
		if(rem!=0)
			s2.push_back(rem);
		b=b/10;
	}
	while(c!=0)
	{
		lli rem = c%10;
		if(rem!=0)
			s3.push_back(rem);
		c=c/10;
	}
	
	for(lli i=0;i<s1.size();i++)
		d+= pow(10,i)*s1[i];
	for(lli i=0;i<s2.size();i++)
		e+= pow(10,i)*s2[i];
	for(lli i=0;i<s3.size();i++)
		f+= pow(10,i)*s3[i];

	if((d+e) == f)
		cout << "YES" << endl;
	else
		cout << "NO" << endl; 
	return 0;
}