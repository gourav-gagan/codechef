#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int x;
   float y;
   cin>>x>>y;
   if (x%5==0 && x<y-0.50)
    {
        y=y-x-0.50;
        cout<<setprecision(2)<<fixed<<y;
    }
    else
    {
        cout<<setprecision(2)<<fixed<<y;
    }
    return 0;

}
