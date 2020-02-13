#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int s[n];
        for (int i=0; i<n; i++)
        {
           cin>>s[i];
        }
        int min=abs(s[0]-s[1]);
        for (int i=0; i<n; i++)
        {
            for (int j=i+1; j<n; j++)
                if (abs(s[i]-s[j])<min)
                    min=abs(s[i]-s[j]);
        }
        cout<<min<<"\n";
    }
    return 0;
}
