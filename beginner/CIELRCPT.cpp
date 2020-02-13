#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int p;
        cin>>p;
        int count=p/2048;
        p=p-(count*2048);
        while (p>0)
        {
            if (p%2==1)
                count++;
            p=p/2;
        }
        cout<<count<<endl;
    }
    return 0;
}
