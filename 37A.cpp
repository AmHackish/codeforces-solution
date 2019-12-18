#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,x;
	cin >> n >> x;
	vector<int> cards(n);
	int sum=0,card=0;;
	for(int i=0;i<n;i++)
	{
		cin >> cards[i];
		sum+=cards[i];
	}
	cout<<sum<<endl;
	if(sum>0)
	{

		while(sum!=0)
		{
			if(sum>=x)
			{
				sum = sum-x;
				card++;
				cout << card << " ";
			}
			else
			{
				int t = x-sum;
				card++;
				sum=sum-t;
			}
		}
	}
	else
	{
		cout << "sum";
		while(sum!=0)
		{
			if(abs(sum)>=x)
			{
				card++;
				cout << card << " ";
				sum = sum+x;
			}
			else
				card++;
		}
	}
	cout << card << endl;
	return 0;

}  