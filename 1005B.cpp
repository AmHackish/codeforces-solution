#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
    string s,t;
    cin >> s >> t;

    int n=s.length(),m=t.length();
    int i=n-1,j=m-1;

    while(i>=0 and j>=0)
    {
    	if(s[i] == t[j])
    	{
    		i--;
    		j--;
    	}
    	else
    		break;
    }
    cout << i+1+j+1 << endl;
    return 0;
}
