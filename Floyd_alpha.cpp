#include <iostream>

using namespace std;

int main()
{
    int N, i, j;
    char alpha='A';

    cin>>N;

    cout<<"\n\n"<<'*'<<"\n";

    for(i=1;i<N;i++)
    {
        cout<<'*';

        for(j=1;j<=i;j++)
        {
            cout<<alpha<<'*';
        }

        cout<<"\n";
        alpha++;
    }
}
