#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned short int t;
    cin>>t;
    while (t--)
    {
        double salary, hra, da;
        cin>>salary;
        if (salary<1500)
        {
            hra=(10*salary)/100;
            da=(90*salary)/100;
        }
        else if (salary>=1500)
        {
            hra=500;
            da=(98*salary)/100;
        }
        cout<<fixed<<setprecision(2)<<salary+hra+da<<endl;
    }
    return 0;
}
