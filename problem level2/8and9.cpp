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
int CountDigitFrequency(short DigitToCheck,int Number )
{
    int Remind = 0, FreqCount = 0;

    while (Number > 0)
    {
        Remind = Number % 10;
        Number = Number / 10;
        if (DigitToCheck == Remind)
        {
            FreqCount++;
        }
    }

    return FreqCount;
}

void PrintAllDigitsFrequencey(int Number)
{
    for (int i = 0; i < 10; i++)
    {
        short  DigitFrequency = 0;
         DigitFrequency = CountDigitFrequency(i, Number);
        if ( DigitFrequency > 0)
        {

            cout << "\n Digit " << i << " Frequency is "
                 <<  DigitFrequency << " Time(s).\n";
        }
    }
}
int main()
{
    int Number = ReadPositiveNumber("Please enter  the main number?");
    PrintAllDigitsFrequencey(Number);
    return 0;
}