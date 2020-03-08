#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int d,sumtime,sum1=0,sum2=0;
	cin >> d >> sumtime;

	vector<pair<int,int>> time(d);
	for(int i=0;i<d;i++)
	{
		cin >> time[i].first >> time[i].second;
		sum1+= time[i].second;
		sum2+= time[i].first;
	}
	if(sum1 < sumtime or sum2 > sumtime)
		cout << "NO" << endl;
	else
	{
		sumtime-= sum2;
		if(sumtime!=0)
		{
			for(int i=0;i<d;i++)
			{
				if(time[i].first < time[i].second)
				{
					 if(time[i].second - time[i].first < sumtime)
					{
						sumtime-=(time[i].second - time[i].first);
						time[i].first = time[i].second;
					}
					else
					{
						time[i].first+=sumtime;
						sumtime=0;
					}
				}
				if(sumtime == 0)
				{
					cout << "YES" << endl;
					for(int j=0;j<d;j++)
						cout << time[j].first << " ";
					cout << endl;
					return 0;
				}
			}
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
			for(int j=0;j<d;j++)
				cout << time[j].first << " ";
			cout << endl;
			return 0;
		}
	}

	return 0;
}
  