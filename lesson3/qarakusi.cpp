#include <iostream>
using namespace std;
int main()
{
    int i,j,n;
    char c;
    cout<<"nermuceq qarakusu koxm@ ";
    cin>>n;
    cout<<"nermuceq ayn nshan@ voric petq e kazmvac lini qarakusin ";
    cin>>c;
    cout<<endl;
    for (i=1; i<=n;i++)
            cout<<c<<' ';
    cout<<endl;
    for(j=1;j<=n-3;j++)
    {
        cout<<c;
        for(i=1;i<= 2*n-3;i++)
        cout<<' ';
        cout<<c<<endl;

    }
    for(i=1;i<=n;i++)
        cout<<c << ' ';
    cout<<endl;

   return 0;

}



