#include<iostream>
using namespace std;

void ReadMark(int &mark1,int &mark2,int &mark3){
     cout<<"pleas entre your mark?\n";
    cin>>mark1;
    cout<<"pleas entre your mark?\n";
    cin>>mark2;
    cout<<"pleas entre your mark?\n";
    cin>>mark3;
}
int SumOfMark(int mark1,int mark2,int mark3){
    return mark1+mark2+mark3;
}
float CalculetAverage(int mark1,int mark2,int mark3){
    return (float)SumOfMark(mark1,mark2,mark3)/3;
}
void PrintAverage(float Average){
     cout<<"result is :"<<Average<<endl;
}
int main(){
    int mark1,mark2,mark3;
    ReadMark(mark1,mark2,mark3);
    PrintAverage(CalculetAverage(mark1,mark2,mark3));
    return 0;


}