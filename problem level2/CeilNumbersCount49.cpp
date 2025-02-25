#include <iostream>
#include <cmath>

using namespace std;

float GetFractoinPart(float num)
{
    return num - int(num);
}
float MyCeil(float num)
{
    int IntPart;
    IntPart = int(num);
    float Fraction = GetFractoinPart(num);
    if (Fraction )
    {
        if (IntPart > 0)
            return ++IntPart;
    }
    
        return IntPart;
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

    cout << "\nMy ceil Result : " << MyCeil(number);
    cout << "\nC++ ceil Result : " << ceil(number);

    return 0;
}