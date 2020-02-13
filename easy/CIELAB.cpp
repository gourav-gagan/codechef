#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin>>a>>b;
    if ((a-b)%10==9)
        cout<<a-b-1;
    else
        cout<<a-b+1;
    return 0;
}
