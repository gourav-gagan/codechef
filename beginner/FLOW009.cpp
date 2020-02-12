#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned short int t;
    cin>>t;
    while(t--)
    {
        double quantity, price;
        double total;
        cin>>quantity>>price;
        total=quantity*price;
        if (quantity>1000)
        {
            total=total-((10*total)/100);
            cout<<fixed<<setprecision(6)<<total<<endl;
        }
        else
        {
            cout<<fixed<<setprecision(6)<<total<<endl;
        }
    }
    return 0;
}
