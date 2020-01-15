#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int cnt =0;
		for(int i=1;i<=9;i++)
		{
			int s=0;
			for(int j=0;j<9;j++)
			{
				s = s*10+i;
				if(s>n)
					break;
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}  