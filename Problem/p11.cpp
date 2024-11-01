#include <iostream>
using namespace std;

enum enPassfail
{
    pass = 1,
    fail = 2
};
void ReadMark(int &mark1, int &mark2, int &mark3)
{

    cout << "pleas entre you Mark?\n";
    cin >> mark1;
    cout << "pleas entre you Mark?\n";
    cin >> mark2;
    cout << "pleas entre you Mark?\n";
    cin >> mark3;
}
int sumofmark(int mark1, int mark2, int mark3)
{
    return mark1 + mark2 + mark3;
}
float calculetAverge(int mark1, int mark2, int mark3)
{
    return (float)sumofmark(mark1, mark2, mark3) / 3;
}
enPassfail ChckAvrage(float Avrage)
{
    if (Avrage >= 50)
        return enPassfail::pass;
    else
        return enPassfail::fail;
}
void PrintAvrage(float Avrage)
{
    cout << "your is Avrage " << Avrage << endl;

    if (ChckAvrage(Avrage) == enPassfail::pass)
        cout << "\n your Passed";
    else
        cout << "\n your Failed";
}
int main()
{
    int mark1, mark2, mark3;
    ReadMark(mark1, mark2, mark3);
    PrintAvrage(calculetAverge(mark1, mark2, mark3));
    return 0;
}