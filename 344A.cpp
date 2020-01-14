#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    for(int j=0;j<n;j++)
    {
        string s;
        cin >> s;
        vector<int>v(4);
        int len;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='L')
                v[0]++;
            if(s[i] == 'R')
                v[1]++;
            if(s[i]=='U')
                v[2]++;
            if(s[i]=='D')
                v[3]++;
        }
        len = s.length()-abs(v[0]-v[1])-abs(v[2]-v[3]);
        cout << len << endl;
        vector<char>t(len);

        if(len)
        {
            int k = min(v[0],v[1]);
            if(k!=0)
            {
                for(int i=0;i<2*k;i=i+2)
                    t[i] = 'L';
                for(int i=1;i<2*k;i=i+2)
                    t[i] = 'R';
            }
            int l = min(v[3],v[2]);
            cout << l;
            if(l!=0)
            {
                for(int i = (k*2)+1;i<len;i=1+2)
                    t[i]='U';
                for(int i=(k*2)+2;i<len;i=i+2)
                    t[i]='R';
            }
            for(int i=0;i<len;i++)
                cout << t[i] ;
            cout << endl;
        }
        else 
            cout << endl;
    }
    return 0;

}