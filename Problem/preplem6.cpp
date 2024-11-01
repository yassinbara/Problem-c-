#include <iostream>
using namespace std;

struct stInfo
{
    string FirstName;
    string LastName;
};
stInfo ReadName(){
    stInfo Info;

    cout<<"pleas entre FirstName\n";
    cin>>Info.FirstName;
    cout<<"pleas entre LasttName\n";
    cin>>Info.LastName;

    return Info;
}
string GetFullName(stInfo Info){
    string FullName;
     FullName = Info.FirstName+ " " + Info.LastName;
  

    return FullName;
}
void PrintFullName(string FullName){
      cout<<"Full Name is "<<FullName<<endl;
}

int main()
{
    PrintFullName(GetFullName(ReadName()));
    return 0;
}