#include<iostream>
using namespace std;
void ReadArreyDate(float x[3]){
cout<<"Pleas Enter Grade1\n";
    cin>>x[0];
    cout<<"Pleas Enter Grade3\n";
    cin>>x[1];
    cout<<"Pleas Enter Grade2\n";
    cin>>x[2];
}
float PrentResolt(float x[3]){

cout<<"***************************************"<<endl;
float resolt =(x[0]+x[1]+x[2])/3;
    
    return resolt;
}

int main(){
    float x[3];
    ReadArreyDate(x);
    
    cout<<"The averade of grades is "<<PrentResolt(x);
    return 0;
}