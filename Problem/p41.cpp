#include<iostream>
#include<cmath>

using namespace std;

float ReadPositiveNumber(string message)
{
    float Number = 0;
    do{
    cout << message << endl;
    cin >> Number;
    }while(Number <= 0);
    return Number;
}

float HouraToDays(float NumberOfHours){

    return (float)NumberOfHours /24;
}

float HouraToWeeks(float NumberOfHours){
    return (float)NumberOfHours /24 / 7;
}

float DaysToWeeks(float NumberOfDays){
    return (float)NumberOfDays /7;
}

int main(){
    float NumberOfHours = ReadPositiveNumber("Pleas enter Number Of Hours ?");
    float NumberOfDays = HouraToDays(NumberOfHours);
    float NumberOfWeeks =DaysToWeeks(NumberOfDays) ;

    cout<<endl<<"Total Hours = "<<NumberOfHours<<endl;
    cout<<"Total Days = "<<NumberOfDays<<endl;
    cout<<"Total Weeks = "<<HouraToWeeks(NumberOfHours)<<endl;


    
    return 0;

}