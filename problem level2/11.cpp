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


bool PrintPalindrome(int num){
    return num == ReverseNumber(num);

}
int main(){

if (PrintPalindrome(ReadPositiveNumber("Please enter  the Palindrome number?")))
{
    cout<<"Yes,it a Palindrome number\n";
}else
    cout<<"NO,it NOT a Palindrome number\n";

    return 0;
}