#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n, tax=0;
        cin>>n;
        if (n<=250000)
            tax=0;
        else if (n>250000 && n<=500000)
        {
            tax=(n-250000)*5/100;
        }
        else if (n>500000 && n<=750000)
        {
            tax=12500+((n-500000)/10);
        }
        else if (n>750000 && n<=1000000)
        {
            tax=37500+((n-750000)*15/100);
        }
        else if (n>1000000 && n<=1250000)
        {
            tax=75000+((n-1000000)/5);
        }
        else if (n>1250000 && n<=1500000)
        {
            tax=125000+((n-1250000)/4);
        }
        else if (n>1500000)
        {
            tax=187500+((n-1500000)*3/10);
        }
        cout<<n-tax<<endl;
    }
    return 0;
}
