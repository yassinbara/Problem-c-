#include<iostream>
using namespace std;
string ReadName(){
    string name;
    cout<<"pleas enter name :\n";
    getline(cin,name);

    return name;
}
void PrinName(string name){

    cout<<"you entre name :"<<name<<"\n";
    

}

int main(){
    
    PrinName(ReadName());
    
    return 0;
}