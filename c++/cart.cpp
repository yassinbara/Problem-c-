#include<iostream>
#include<string>
using namespace std;
int main()
{
    string string1;
    string string2;
    string string3;
    cout<<"Pleas enter String1?\n";
    getline(cin,string1);
    cout<<"Pleas enter String2?\n";
    getline(cin,string2);
    cout<<"Pleas enter String3?\n";
    getline(cin,string3);

    cout<<"*******************************"<<endl;
    cout<<"The length of String1 is "<<string1.length()<<"\n";
    cout<<"Characters at 0,2,4,7 are : "<<string1[0,2,3]<<"\n";
    cout<<"Concatenating String2 and String3 = "<<string2 + string3<<"\n";
    int e=stoi(string2)+stoi(string3);
    cout<<string2<<"*"<<string3<<"="<<e <<"\n";
    
    return 0;

} 
