#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned short int t;
    cin>>t;
    while (t--)
    {
        unsigned short int a,b,c;
        cin>>a>>b>>c;
        if (a+b+c==180)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
