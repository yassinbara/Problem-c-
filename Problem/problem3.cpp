#include <iostream>

using namespace std;

enum enNumberType
{
    Odd = 1,
    Even = 2
};
int ReadNumber()
{
    int num;
    cout << "Pleas enter a Number?\n";
    cin>>num;
    return num;
}
enNumberType CheckNumberType(int num){
    int Resolt = num %2;
    if (Resolt == 0)
    {
        return enNumberType::Even;
    }
    else
    {
       return enNumberType::Odd;
    }
    
}
void PrintNumberType(enNumberType NumberType){
    if (NumberType == enNumberType::Even)
    {
        cout<<"\n Number is Even";
    }
    else
    {
        cout<<"\n Number is Odd";
        
    }
    
}
int main()
{
    PrintNumberType(CheckNumberType(ReadNumber()));
    return 0;
}