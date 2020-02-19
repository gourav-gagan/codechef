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
            int n, lead=0;
            cin>>n;
            string s;
            cin>>s;
            int x=s.size();
            for (int i=0; i<x; i++)
            {
                if (i%2==0)
                    lead=lead+int(s[i]-48);
                else if (i%2==1)
                    lead=lead-int(s[i]-48);
                if (abs(lead)>(x-(i))/2)
                    { cout<<i+1; break;}
                else if (lead<0 && abs(lead)==(x-i+1)/2)
                    { cout<<i+1; break;}
                else if (lead==0 && i==x-1)
                    { cout<<x; break; }
            }
            cout<<endl;
        }
    return 0;
}
