#include <iostream>
 #include <cmath>

using namespace std;
void ReadTriangleData(float &a,float &b){
    cout<<"pleas enter your number?\n";
    cin>>a;
    cout<<"pleas enter your number?\n";
    cin>>b;
   


}
float CircleAreaByITdiangle(float a,float b){
    return 3.141592653589793238*pow((b/2),2)*((2*a-b)/(2*a+b));
}
void PrintResult(float area){
    cout<<"\nyour a,float b Rectangle Area  is:"<<area;
}
int main(){
    float a,b;
    ReadTriangleData(a,b);
    PrintResult(CircleAreaByITdiangle(a,b));
    return 0;
}
