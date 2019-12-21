#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<string> s(n);
	for(int i=0;i<n;i++)
		cin >> s[i];
	if(n == 6)
		cout << 0 << endl;
	else
	{
		cout << 6-n << endl;
		sort(s.begin(),s.end());
		int r=0,p=0,y=0,o=0,t=0,g=0,b=0;
		for(int i=0;i<n;i++)
		{
			if(s[i][0] == 'p')
				p++;
			if(s[i][0] == 'g')
				g++;
			if(s[i][0] == 'b')
				b++;
			if(s[i][0] == 'o')
				o++;
			if(s[i][0] == 'r')
				r++;
			if(s[i][0] == 'y')
				y++;
		}
		if(p==0)
			cout <<"Power" << endl;
		if(g==0)
			cout << "Time" << endl;
		if(b==0)
			cout<< "Space" << endl;
		if(o==0)
			cout << "Soul" << endl;
		if(r==0)
			cout <<"Reality" << endl;
		if(y==0)
			cout << "Mind" << endl;
	}
	return 0;
}  