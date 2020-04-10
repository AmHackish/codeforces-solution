#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
    int n;
    cin >> n;
    
    lli sum=0,sum1=0,sum2=0;

    vector<lli> a(n),b,c;
    for(int i=0;i<n;i++)
    {
    	cin >> a[i];
    	if(a[i]%2 == 0)
       		b.push_back(a[i]);
    	else
    		c.push_back(a[i]);
    	sum += a[i];
    }
    sort(b.begin(),b.end(),greater<int>());
    sort(c.begin(),c.end(),greater<int>());

    lli i=0,j=0,k=1;
    sum1 = sum;
    while(true)
    {
    	if(k and i<b.size())
    	{
    		sum1 -= b[i];
    		i++;
    	}
    	else if(!k and j<c.size())
    	{
    		sum1-= c[j];
    		j++;
    	}
    	else
    		break;
    	k = 1-k;
    }

    i=0,j=0,k=0;
    sum2 = sum;
    while(true)
    {
    	if(k and i<b.size())
    	{
    		sum2 -= b[i];
    		i++;
    	}
    	else if(!k and j<c.size())
    	{
    		sum2-= c[j];
    		j++;
    	}
    	else
    		break;
    	k = 1-k;
    }

    cout << min(sum2,sum1) << endl;
    return 0;
}
