#include <iostream>
 #include <cmath>

using namespace std;
void ReadRadious(float &a){
    cout<<"pleas enter your number?\n";
    cin>>a;
   


}
float CircleArea(float a){
    return pow(a,2)*3.14;
}
void PrintResult(float area){
    cout<<"\nyour a Rectangle Area  is:"<<area;
}
int main(){
    float a;
    ReadRadious(a);
    PrintResult(CircleArea(a));
    return 0;
}
