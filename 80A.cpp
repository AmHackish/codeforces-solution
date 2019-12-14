#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) 
{ 
    if (n <= 1) 
        return false; 
  	for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
    return true; 
} 
int main()
{
	int n,m,k=0;
	cin >> n >> m;
	for(int i=n+1; i<=m; i++)
	{
		if(isPrime(i))
		{
			k = i;
			break;
		}
	}
	if(k == m)
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;	
	return 0;
}  