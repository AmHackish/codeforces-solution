#include <bits/stdc++.h>
using namespace std;

int main()
{
	std::vector<int> ol(6);
	std::vector<int> vip(10);
	pair<int,int>c;
	std::vector<pair<int,int>> d;
	for(int i=0;i<6;i++)
	{
		cin >> ol[i];
		vip[ol[i]]++;
	}
	sort(vip.begin(),vip.end());
	for(int i=0;i<10;i++)
		if(vip[i]!=0)
		{
			c = make_pair(vip[i],i);
			d.push_back(c);
		}
	sort(d.begin(),d.end());
	if(d.size()>3 or (d.size()== 2 and d[1].first < 4) or (d.size()==3 and d[2].first < 4))
		cout << "Alien" << endl;
	else if((d.size() == 2 and d[1].first == 4) or d.size() == 1)
		cout << "Elephant" << endl;
	else
		cout << "Bear" << endl;	

	return 0;
}  