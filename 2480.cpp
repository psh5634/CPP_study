#include <iostream>
using namespace std;

int main()
{
    int a,b,c; 
    cin >> a >> b >> c;

    if(a == b && a == c && b == c)
    {
        cout << 10000 + a * 1000 << endl;
    }
    else if(a != b && a != c && b != c)
    {
        if(a > b && a > c)
        {
            cout << a * 100 << endl;
        }
        else if(b > a &&  > c)
        {
            cout << b * 100 << endl;
        }
        else 
        {
            cout << c * 100 << endl;
        }
    }
    else
    {
        if(a == b)
        {
            cout << 1000 + a * 100 << endl;
        }
        else if(a == c)
        {
            cout << 1000 + a * 100 << endl;
        }
        else if(b == c)
        {
            cout << 1000 + b * 100 << endl;
        }

    }
    return 0;
}