#include <iostream>

using namespace std;

float ReadPositiveNumber(string message)
{
    float Number = 0;
    do
    {
        cout << message ;
        cin >> Number;

    } while (Number <= 0);
    return Number;
}
void ReadArray(int array[100], int &arraylenght)
{
    cout << "Please enter number of Elements?\n";
    cin >> arraylenght;
    cout << "Enter array elemente.\n";

    for (int i = 0; i < arraylenght; i++)
    {
        cout << "Element [" << i + 1 << " ] :";
        cin >> array[i];
    }
    cout << endl;
}
void PrintArray(int array[100], int arraylenght)
{
    for (int i = 0; i < arraylenght; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
int TimesRepeated(int Number, int arr[100], int arraylenght)
{
    int count = 0;
    for (int i = 0; i < arraylenght - 1; i++)
    {
        if (Number == arr[i])
        {

            count++;
        }
    }
    return count;
}
int main()
{

    int array[100], arraylenght, NumberToCheck;
    ReadArray(array, arraylenght);
    cout << "Original array :";
    NumberToCheck = ReadPositiveNumber("Element the number you want to check :");
    PrintArray(array, arraylenght);
    cout << " Number " << NumberToCheck;
    cout << " is repeated ";
    cout << TimesRepeated(NumberToCheck, array, arraylenght) << " time(s)\n";

    return 0;
}