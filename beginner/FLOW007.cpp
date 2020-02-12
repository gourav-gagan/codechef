#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        while(n>0)
            if (n%10==0)
                n=n/10;
            else
                break;
        while (n>0)
        {
            cout<<n%10;
            n=n/10;
        }
        cout<<endl;
    }
    return 0;
}
