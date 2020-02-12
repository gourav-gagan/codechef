#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    unsigned long int t[n];
    int count=0;
    unsigned long int k;
    cin>>k;
    while (n--)
    {
        cin>>t[n];
        if (t[n]%k==0)
        count++;
    }
    cout<<count;
    return 0;
}
