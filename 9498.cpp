#include <iostream>
using namespace std;

int main()
{
    int score;
    cin >> score;
    
    if (89 < score && score < 101)
    {
        cout << "A" << endl;
    }
    else if (79 < score && score < 90)
    {
        cout << "B" << endl;
    }
    else if (69 < score && score < 80)
    {
        cout << "C" << endl;
    }
    else if (59 < score && score < 70)
    {
        cout << "D" << endl;
    }
    else 
    {
        cout << "F" << endl;
    }

    return 0;
}