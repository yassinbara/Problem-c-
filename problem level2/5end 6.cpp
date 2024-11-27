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
void PrintDigits(int num){
    int Remind = 0;
    int sum = 0;
    while (num > 0)
    {
        Remind = num % 10;
        num= num /10;
        sum +=Remind;
       
       

        cout<<Remind<<endl;
    }
    cout<<"Resulta to sum : "<<sum <<endl;
        
}

int main(){

    PrintDigits(ReadPositiveNumber("Please enter a Postif Number?"));
    return 0 ;
}