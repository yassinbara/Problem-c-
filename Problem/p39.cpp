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
int CalculateRemainder(int TotalBill,int TotalCashPaid){
    return TotalBill - TotalCashPaid;
}


int main(){
    float TotalBill = ReadPositiveNumber("Pleas enter Total Bill?");
    float TotalCashPaid=ReadPositiveNumber("Pleas enter Total Cash Paid?");

    cout<<endl<<"Total Bill = "<<TotalBill<<endl;
    cout<<"Total Cash Paid = "<< TotalCashPaid<<endl;

    cout<<"**************************************\n";
    cout<<"Remainder = "<<CalculateRemainder(TotalBill, TotalCashPaid)<<endl;
    
    return 0;

}