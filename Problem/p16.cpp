#include <iostream>
 #include <cmath>

using namespace std;
void ReadNumber(float &a, float &d){
    cout<<"pleas enter your number?\n";
    cin>>a;
    cout<<"pleas enter your number?\n";
    cin>>d;


}
float RectangleAreaBySideAndDiagonal(float a,float d){
    return a*sqrt(pow(d,2)-pow(a,2));
}
void PrintResult(float area){
    cout<<"\nyour a Rectangle Area  is:"<<area;
}
int main(){
    float a,d;
    ReadNumber(a,d);
    PrintResult(RectangleAreaBySideAndDiagonal(a,d));
    return 0;
}
