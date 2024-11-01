#include <iostream>
using namespace std;
int ReadNumber()
{
    int Number;
    cout << "pleas entre your Number?\n";
    cin >> Number;

    return Number;
}
float CalculetHelfNumber(int Number)
{
   
    return (float)Number / 2 ;
}
void PrintResolt(int Number)
{
    string Result ="Helt of "+ to_string(Number) + " is " "" +to_string(CalculetHelfNumber(Number));
    cout<<endl<<Result;
}
int main()
{
    PrintResolt(ReadNumber());
    return 0;
}