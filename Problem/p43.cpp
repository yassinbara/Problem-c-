#include <iostream>
#include <cmath>

using namespace std;

struct stTaskDuration
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

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

stTaskDuration SecondsToTaskDuration(int TotalSeconds)
{

    stTaskDuration TaskDuration;
    const int SecondsParDay = 24 * 60 * 60;
    const int SecondsParHour = 60 * 60;
    const int SecondsParMinute = 60;

    int Remainder = 0;
    TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsParDay);
    Remainder = TotalSeconds % SecondsParDay;
    TaskDuration.NumberOfHours = floor(Remainder / SecondsParHour);
    Remainder = Remainder % SecondsParHour;
    TaskDuration.NumberOfMinutes = floor(Remainder / SecondsParMinute);
    Remainder = Remainder % SecondsParMinute;
    TaskDuration.NumberOfSeconds = Remainder;

    return TaskDuration;
}

void PrintTaskDurationInSeconds(stTaskDuration TaskDuration)
{

    cout << endl
         << TaskDuration.NumberOfDays << ":"
         << TaskDuration.NumberOfHours << ":"
         << TaskDuration.NumberOfMinutes << ":"
         << TaskDuration.NumberOfSeconds << "\n";
}

int main()
{
    float TotalSeconds = ReadPositiveNumber("Pleas enter Total Seconds?");

    PrintTaskDurationInSeconds(SecondsToTaskDuration(TotalSeconds));

    return 0;
}