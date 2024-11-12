#include <iostream>
 using namespace std;

float ReadPositiveNumber(string message){
    int Number =0;
    do
    {
        cout<<message<<endl;
        cin>>Number;
    } while (Number <= 0);

    return Number;
    
}

float TotalMonths(float LoanAmount, float MonthlyInstallment){

return LoanAmount/MonthlyInstallment;

}


 int main(){
    float LoanAmount =ReadPositiveNumber("Please enter loan Amount?");
    float MonthlyInstallment =ReadPositiveNumber("Please Enter Montly Installment");

    cout<<"\n Total Months to pay = "<<TotalMonths(LoanAmount,MonthlyInstallment)<<endl;

    return 0;
 }