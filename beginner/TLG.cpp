#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int s[n], t[n];
    int st=0, tt=0;
    int w[n], l[n];
    int ww, ll;
    for (int i=0; i<n; i++)
    {
        cin>>s[i]>>t[i];
        st=st+s[i];
        tt=tt+t[i];
        if (max(st,tt)==st) w[i]=1;
        else w[i]=2;
        l[i]=max(st,tt)-min(st,tt);
        if (l[i]>ll)
        {
            ll=l[i];
            ww=w[i];
        }
    }
    cout<<ww<<" "<<ll;
    return 0;
}
