#include <iostream>
#include <cmath>

using namespace std;
enum enMonthOfYear
{
    Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6,
    Jul = 7, Aug = 8, sep = 9, Oct = 10, Nov = 11,
    Dec = 12
};

int ReadNumberInRange(string message, int From, int To) {

    int Number =0;
    do
    {
        cout<<message<<endl;
        cin>>Number;
    } while (Number < From || Number >To);
    
    return Number;
}

enMonthOfYear ReadMonthOfYear() {

    return (enMonthOfYear)ReadNumberInRange("Please enter a month [1 to 12]" ,0,100);
}

string GetMonthOfYear(enMonthOfYear Month) {

    switch (Month)
    {
    case enMonthOfYear::Jan:
        return "January";
    case enMonthOfYear::Feb:
        return "Fabruary";
    case enMonthOfYear::Mar:
        return "March";
    case enMonthOfYear::Apr:
        return "April";
    case enMonthOfYear::May:
        return "May";
    case enMonthOfYear::Jun:
        return "Jun";
    case enMonthOfYear::Jul:
        return "July";
    case enMonthOfYear::Aug:
        return "August";
    case enMonthOfYear::sep:
        return "September";
    case enMonthOfYear::Oct:
        return "October";
    case enMonthOfYear::Nov:
        return "Novenmber";
    case enMonthOfYear::Dec:
        return "December";
    default:
        return "Not a valid Month";
    }
}

int main()
{

    cout << GetMonthOfYear(ReadMonthOfYear()) << endl;

    return 0;
}