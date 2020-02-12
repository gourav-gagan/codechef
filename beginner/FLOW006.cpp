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
        int r;
        cin>>N;
        while(N!=0)
        {
            r=N%10;
            N=N/10;
            sum=sum+r;
        }
        cout<<sum<<endl;
    }
    return 0;
}
