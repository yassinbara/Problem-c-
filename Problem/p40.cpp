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
float TotalBillAfterServiceAndTax(float TotalBill){
    TotalBill *= 1.1;
    TotalBill *= 1.16;
    return TotalBill ;
}


int main(){
    float TotalBill = ReadPositiveNumber("Pleas enter Total Bill?");

    cout<<endl<<"Total Bill = "<<TotalBill<<endl;

    cout<<"Total Bill After Service Fee And Sales Tax = "<<TotalBillAfterServiceAndTax(TotalBill)<<endl;
    
    return 0;

}