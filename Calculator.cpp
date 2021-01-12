#include <iostream>
#include <conio.h>
#include <math.h>
#include <sstream>

using namespace std;

int main()
{
    double a,b,num;
    char c;

    string s;

    cin >> s;

    stringstream ss(s);

    ss>>a>>c>>b;

    cout<<"="<<endl;

    switch(c)
    {
        case '+':
            cout<<a+b;
            break;

        case '-':
            cout<<a-b;
            break;

        case '*':
            cout<<a*b;
            break;

        case '/':
            cout<<a/b;
            break;

        case '^':
            cout<<pow(a,b);
            break;
    }

    getch();

    return 0;
}
