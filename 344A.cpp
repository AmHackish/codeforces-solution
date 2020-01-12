#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        string s,t;
        cin >> s >> t;
        vector<int> a(26);
        vector<int> b(26);
        for(int j=0;j<s.length();j++)
            a[s[j]-'a']++;
        for(int j=0;j<t.length();j++)
            b[t[j]-'a']++;
        int cnt=0;
        for(int k=0;k<26;k++)
        {
            if(a[k] == 0 and b[k]!=0)
                cnt++;
            if(a[k]>b[k] and a[k]!=0)
                cnt++;
        }
        if(cnt)
            cout << "NO" << endl;
        else
        {
            int k=0,j=0;
            while(k<s.length() and j<t.length())
            {
                if(s[k] == t[j])
                {
                    k++,j++;
                                    }
                else if(s[k]!=t[j] and t[j]!=t[j-1] and j!=0)
                {
                    cnt++;
                    break;
                }
                else if(s[k]!=t[j] and t[j]==t[j-1] and j!=0)
                {
                    j++;
                    
                }
                else if(s[k] !=t[j])
                {
                    cnt++;
                    break;
                }
            }
            if(k!=s.length() and j == t.length() or cnt)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        
        }
    }
    return 0;

}