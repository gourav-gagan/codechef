#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned short int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        int sum1=0, sum2=0;
        vector <int> w;
        cin >> n >> k;
        int d=n-k;
        while (n--)
        {
            int x;
            cin >> x;
            w.push_back(x);
        }
        sort (w.begin(), w.end());
        for (int i=0; i<min(k,d); i++)
        {
            sum1=w[i]+sum1;
        }
        for (int i=min(k,d); i<w.size(); i++)
        {
            sum2=w[i]+sum2;

        }
        cout << sum2-sum1 <<endl;
    }
    return 0;
}
