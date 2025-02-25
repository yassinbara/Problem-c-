#include <iostream>
#include <cmath>

using namespace std;

float GetFractoinPart(float num)
{
    return num - int(num);
}
float MyRound(float num)
{
    int IntPart;
    IntPart = int(num);
    float Fraction = GetFractoinPart(num);
    if (Fraction >= .5)
    {
        if (IntPart > 0)
        {
            return ++IntPart;
        }
        else
            return --IntPart;
    }
    else
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

    cout << "\nMy Round Result : " << MyRound(number);
    cout << "\nC++ Round Result : " << round(number);

    return 0;
}