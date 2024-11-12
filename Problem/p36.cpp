#include <iostream>
#include <cmath>

using namespace std;

enum enOperationType
{
    Add = '+',
    Subtrsact = '-',
    Multiply = '*',
    Divide = '/'
};

float ReadNumber(string message){

    float Number =0;
    cout<<message<<endl;
    cin>>Number;
    return Number;
}

enOperationType ReadOpType(){
    char OT ='+';
    cout<<"Pleas enter Operation Type( +, - , * , /)?\n";
    cin>>OT;
    return (enOperationType) OT;
}

float Calculate(float Number1 ,float Number2 , enOperationType OpType){

    switch (OpType)
    {
    case enOperationType::Add:
        return Number1 + Number2;
    case enOperationType::Subtrsact:
        return Number1 - Number2;
    case enOperationType::Divide:
        return Number1 / Number2;
    case enOperationType::Multiply:
        return Number1 * Number2;
    
    default:
          return Number1 + Number2;

    }
}

int main()
{
    float Number1 =ReadNumber("Pleas enter the first number?");
    float Number2 =ReadNumber("Pleas enter the second number?");

    enOperationType OpType =ReadOpType();

    cout<<endl<<"Result = "<<Calculate(Number1,Number2,OpType)<<endl;

    return 0;
}
