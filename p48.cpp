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

float MonthlyInstallment(float LoanAmount, float HowManyMonthly){

return (float) LoanAmount/HowManyMonthly;

}


 int main(){
    float LoanAmount =ReadPositiveNumber("Please enter loan Amount?");
    float HowManyMonthly =ReadPositiveNumber("How Many Monthly ");

    cout<<"\n  Monthly Installment = "<<MonthlyInstallment(LoanAmount,HowManyMonthly)<<endl;

    return 0;
 }