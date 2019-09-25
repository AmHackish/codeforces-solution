#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector<int> magnet(n);
    int x=0,y=0,w=0;
    for(int i=0; i<n; i++)
        cin >> magnet[i];
    if(n > 2)
    {
        for(int i=0; i<n-1; i++)
    {
        if(magnet[i] != magnet[i+1])
            w++;
    }
    cout << w+1 << endl;
    }
    if(n==1)
        cout << 1 << endl;
    if(n ==2 and magnet[0]!=magnet[1])
        cout << 2 << endl;
    else if(n == 2 and magnet[0] == magnet[1])
        cout << 1 << endl;
    return 0;
}