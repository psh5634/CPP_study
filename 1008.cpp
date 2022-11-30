#include <iostream>
using namespace std;

int main()
{
    int a,b; 
    double result;
    
    cin >> a >> b;
    result = (a * 1.0) / (b * 1.0); // int를 float형으로 변환 하는 방법 중 하나 
    
    cout.precision(15); // 소수점 고정 
    cout << result << endl;
    
    return 0;
}