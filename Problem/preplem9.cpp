#include<iostream>
using namespace std;
void ReadNum(int &num1,int &num2,int &num3){
    
    cout<<"pleas entre your number?\n";
    cin>>num1;
    cout<<"pleas entre your number?\n";
    cin>>num2;
    cout<<"pleas entre your number?\n";
    cin>>num3;

}
int SumOf3Number(int num1,int num2,int num3){
    return num1 + num2 + num3;
}
void PrintResult(int total){
    cout<<"result is :"<<total<<endl;
}
int main(){
     int num1,num2,num3;
     ReadNum(num1,num2,num3);
     PrintResult(SumOf3Number(num1,num2,num3));
    return 0;
}