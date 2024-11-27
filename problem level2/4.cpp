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

bool IsPerfectNumber(int num)
{

    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum += i;
        }
    return num == sum;
}


void PrintPrefectNumbersFrom1ToN(int num)
{
     for (int  i = 1; i <= num; i++)
    {
        
    if (IsPerfectNumber(i))
    {
        cout <<i<<endl;
        
    }
    }
}

int main()
{
    PrintPrefectNumbersFrom1ToN(ReadPositiveNumber("Please enter a Positive Number?"));
    return 0;
}