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
void PrintInvertedNumberPattern(int Number){

    for (int i = 1; i <= Number; i++)
    {
        
        for (int j = 1; j <=i ; j++)
        {
            cout<<i;
        }
        cout<<"\n";
    }
    
}

int main(){

PrintInvertedNumberPattern(ReadPositiveNumber("Please enter  the Inverted pattern number?"));

    return 0 ;

}