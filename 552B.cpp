#include <bits/stdc++.h>
 
using namespace std;

int counti(int x)
{
    int count=0;
    while(x != 0) 
    {
        x /= 10; 
        ++count;
    }
    return count;
}
int check(int x)
{
    while(x>0)
    {
        if(x%10 == 0)
            x =x/10;
        else if(x ==1)
            return 1;
        else
            return 0;
    }
    return 0;
}
 
int main()
{
    long long int n;
    cin >> n;
    if(n<10)
        cout << n << endl;
    else
    {
        long long int sum,k=0,y=0;
        y = check(n);
        k =counti(n);
        if(y == 1)
            sum = k;
        else
            sum = 0;
        while(n>10)
        {
            k =counti(n);
            y = check(n);
            if(y == 1)
            {
                sum+=(n-pow(10,k-2))*(k-1);
                n = pow(10,k-2);
            }
            else
            {
                sum+=(n-pow(10,k-1)+1)*(k); 
                n = pow(10,k-1);  
            }
        }
        cout << sum +9 << endl;
    }
    return 0;

}