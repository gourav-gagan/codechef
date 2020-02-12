#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int t, n;
    cin>>t;
    vector <int> v;
    while (t--)
    {
        cin>>n;
        v.push_back(n);
    }
    sort (v.begin(),v.end());
    for (int i: v)
    {
        cout<<i<<endl;
    }
    return 0;
}
