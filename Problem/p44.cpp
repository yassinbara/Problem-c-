#include <iostream>
#include <cmath>

using namespace std;
enum enDayOfWeek
{
    Sat = 1,
    Sun = 2,
    Mon = 3,
    Tue = 4,
    Wed = 5,
    thu = 6,
    Fri = 7
};

int ReadNumberInRande(string message, int From, int To)
{
    float Number = 0;
    do
    {
        cout << message << endl;
        cin >> Number;
    } while (Number < From || Number > To);
    return Number;
}

enDayOfWeek ReadDayOfWeek()
{

    return (enDayOfWeek)ReadNumberInRande("Please enter day humber Sat =1,Sun =2,Mon =3,Tue = 4,Wed =5,thu=6 ,Fri=7", 0, 100);
}

string GetDyOfWeek(enDayOfWeek Day)
{

    switch (Day)
    {
    case enDayOfWeek::Sat:
        return "Saturday";
    case enDayOfWeek::Sun:
        return "Sunday";
    case enDayOfWeek::Mon:
        return "Monday";
    case enDayOfWeek::Tue:
        return "Tuesday";
    case enDayOfWeek::Wed:
        return "Wednesday";
    case enDayOfWeek::thu:
        return "Thursday";
    case enDayOfWeek::Fri:
        return "Friday";

    default:
        return "Not a valid Day";
    }
}

int main()
{

    cout << GetDyOfWeek(ReadDayOfWeek()) << endl;
    return 0;
}