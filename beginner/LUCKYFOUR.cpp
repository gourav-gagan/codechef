#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x;
        cin>>x;
        int count=0;
        while(x>0)
        {
            if(x%10==4)
                count++;
            x=x/10;
        }
        cout<<count<<"\n";
    }
    return 0;
}
