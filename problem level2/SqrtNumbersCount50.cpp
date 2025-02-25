#include <iostream>
#include <cmath>

using namespace std;


float MySqrt(float num)
{
        return pow(num,0.5);
}
float ReadNumber()
{
    float num;
    cout << "please enter number?\n ";
    cin >> num;

    return num;
}

int main()
{

    float number = ReadNumber();

    cout << "\nMy sqrt Result : " << MySqrt(number);
    cout << "\nC++ sqrt Result : " << sqrt(number);

    return 0;
}