#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int a[3]={1,2,4};
        if (n<=3)
            cout<<a[n-1]<<endl;
        else
            {
                for (i=0; i<n-3; i++)
                {
                    j=i%3;
                    a[j]=a[0]+a[1]+a[2];
                }
                cout<<a[j]<<endl;
            }
    }
    return 0;
}
