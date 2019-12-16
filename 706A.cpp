#include <bits/stdc++.h>

using namespace std;
int convertBinaryToDecimal(string s)
{
    int decimalNumber = 0, i = s.length()-1, remainder,j=0;
    while (i>=0)
    {
    	remainder = s[i]-'0';
        decimalNumber += remainder*pow(2,j);
        ++j;
        i--;
    }
    return decimalNumber;
}
int main()
{
	string s;
	cin >> s;
	long long int m = convertBinaryToDecimal(s);
	int trains=0,k=1;
	while(k<m)
	{
		trains++;
		k=k*4;
	}
	cout << trains<<endl;
	return 0;
}  