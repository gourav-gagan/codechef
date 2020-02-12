#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
        {
            int rs[6]={100,50,10,5,2,1};
            int total,sum=0,x;
            cin>>total;
            for(int i=0; i<6; i++)
            {
            if (total>=rs[i])
                {
                x=total/rs[i];
                total=total%rs[i];
                sum=sum+x;
                }
            }
            cout<<sum<<endl;
        }
return 0;
}
