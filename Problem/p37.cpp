#include <iostream>

using namespace std;

float ReadNumber(string message){
    float Number =0;
    cout<<message<<endl;
    cin>>Number;
    return Number;
}

float SumNumber(){
    int number =0,sum = 0, counter =1;

    do
    {
        number =ReadNumber("Pleas enter number " + to_string(counter));
        if (number == -99)
        {
            break;
        }
        sum +=number;
        counter++;
    } while (number != -99);
    return sum;
}

int main(){

    cout<<endl<<"Result  = "<<SumNumber()<<endl;

    return 0;
}