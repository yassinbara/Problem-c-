#include <iostream>
 #include <cmath>

using namespace std;
void ReadTriangleData(float &a,float &b , float &c){
    cout<<"pleas enter your number?\n";
    cin>>a;
    cout<<"pleas enter your number?\n";
    cin>>b ;
    cout<<"pleas enter your number?\n";
    cin>>c;
   


}
float CircleAreaByATdiangle(float a,float b , float c){
    float ip =3.141592653589793238;
    float p;
    p =(a+b+c)/2;
    float T;
    T =((a+b+c)/4*sqrt(p*(p-a)*(p-b)*(p-c)));
    return ip*pow(T,2);
}
void PrintResult(float area){
    cout<<"\nyour a,float b , float c Rectangle Area  is:"<<area;
}
int main(){
    float a,b ,c;
    ReadTriangleData(a,b ,c);
    PrintResult(CircleAreaByATdiangle(a,b ,c));
    return 0;
}
