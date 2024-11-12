#include <iostream>
 #include <cmath>

using namespace std;
void ReadDiameter(float &D){
    cout<<"pleas enter your number?\n";
    cin>>D;
   


}
float CircleAreaByDiameter(float D){
    return (pow(D,2)*3.14)/4;
}
void PrintResult(float area){
    cout<<"\nyour D Rectangle Area  is:"<<area;
}
int main(){
    float D;
    ReadDiameter(D);
    PrintResult(CircleAreaByDiameter(D));
    return 0;
}
