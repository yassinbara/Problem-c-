#include <iostream>
#include <cmath>

using namespace std;

float ReadPositiveNumber(string message)
{
    float Number = 0;
    do
    {
        cout << message << endl;
        cin >> Number;

    } while (Number <= 0);
    return Number;
}
int ReverseNumber(int num)
{
    int Remind = 0, num2 = 0;

    while (num > 0)
    {
        Remind = num % 10;
        num = num / 10;
        num2 = num2 * 10 + Remind;
    }

    return num2;
}

void PrintDigits(int Number)
{
    int Remind = 0;

    while (Number > 0)
    {
        Remind = Number % 10;
        Number = Number / 10;
        cout << Remind << endl;
    }
}

int main()
{

    PrintDigits(ReverseNumber(ReadPositiveNumber("Please enter  the main number?")));
    return 0;
}