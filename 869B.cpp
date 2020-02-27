#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long int a,b;
	cin >> a >> b;

	int k=1;
	if((b-a)>=5)
		cout << 0 << endl;
	else
	{
		if(b == a)
			cout << 1 << endl;
		else
		{
			for(long long int i = a+1; i<=b;i++)
				k = (k*(i%10))%10;
			cout << k%10 << endl;
		}
	}
	return 0;

}
  