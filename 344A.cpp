#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,k;
    cin >> n >> k;
    int x;
    cin >> x;
    std::vector<int> v;
    while(x>0)
    {
        v.push_back(x%10);
        x=x/10;
    }
    
    int cnt=0;
    for(int i=0;i<n and i+k<n; i++)
        if(v[i] != v[i+k])
            cnt++;
    
    if(cnt == 0)
    {
        cout << n << endl;
        for(int i=v.size()-1;i>=0;i--)
            cout << v[i];
        cout << endl;
    }
    else
    {
        if(k<n)
            v[n-1-k] = v[n-1];
        if(n>2)
        {
            v[n-2]=v[n-2]+1;
            v[n-2-k] = v[n-2];
        }
        else if(n>4)
        {
            for(int i=2;i<n/2;i++)
            {
                if(v[i]!= v[i+k])
                    v[i+k] == v[i];
            }
        }
        cout << n << endl;
        for(int i=v.size()-1;i>=0;i--)
            cout << v[i];
    }
    return 0;

}