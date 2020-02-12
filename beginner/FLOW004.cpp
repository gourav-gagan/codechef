#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        int sum=0;
        int rf, r;
        cin>>N;
        rf=N%10;
        while(N!=0)
        {
            r=N%10;
            N=N/10;

        }
        sum=rf+r;
        cout<<sum<<endl;
    }
    return 0;
}
