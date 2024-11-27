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

void InvertedPattern(int num){

    for (int  i =num ; i >= 1 ; i--)
    {
        for (int  j = 1; j <= i; j++)
        {
            cout <<i;
        }
        cout <<endl;
    }
    
}

int main(){

    InvertedPattern(ReadPositiveNumber("Please enter  the Inverted pattern number?"));
    return 0;
}