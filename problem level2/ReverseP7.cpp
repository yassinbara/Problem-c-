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

int main()
{

    cout << "\n Reverse is = \n"
         << ReverseNumber(ReadPositiveNumber("Please enter a Postif Number?"))
         << "\n";
    return 0;
}