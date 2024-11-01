#include<iostream>
using namespace std;
enum enPassfail {pass=1, fail=2};
int ReadMark(){
    int Mark;
    cout<<"plaes entre your Mark\n";
    cin>>Mark;

    return Mark;
}

enPassfail CheckMark(int Mark){
    if(Mark >= 50)
    return enPassfail::pass;
    else
    return enPassfail::fail;
}
void PrintResult(int Mark){
    if(CheckMark(Mark) == enPassfail::pass)
    cout<<"\n Your Mark is pass\n";
    else
    cout<<"\n Your Mark is fail"<<endl;
}
int main(){
    PrintResult(ReadMark());
    return 0;
}