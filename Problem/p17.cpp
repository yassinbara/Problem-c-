#include <iostream>
 #include <cmath>

using namespace std;
void ReadNumber(float &a, float &h){
    cout<<"pleas enter your number?\n";
    cin>>a;
    cout<<"pleas enter your number?\n";
    cin>>h;


}
float TriangleArea(float a,float h){
    return (a/2)*h;
}
void PrintResult(float area){
    cout<<"\nyour a Rectangle Area  is:"<<area;
}
int main(){
    float a,h;
    ReadNumber(a,h);
    PrintResult(TriangleArea(a,h));
    return 0;
}
