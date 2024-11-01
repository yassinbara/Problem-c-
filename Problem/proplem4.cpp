#include <iostream>
using namespace std;
struct stInfo
{
   int Age;
   bool HasDrivedLicense;
   bool HasRecommendation;
};
stInfo ReadInfo(){
    stInfo Info;
    cout<<"pleas enter Age?\n";
    cin>>Info.Age ;
    cout<<"Do you have drived license"<<endl;
    cin>>Info.HasDrivedLicense;
    cout<<"Do you have Recommendation"<<endl;
    cin>>Info.HasRecommendation;
    return Info;
}
bool IsAccepted(stInfo Info){
   return  Info.HasRecommendation?(true) : (Info.Age >21 && Info.HasDrivedLicense);
}
void PrintResolt(stInfo Info){
   
    IsAccepted(Info)?(cout<<"\nHird"<<endl):(cout<<"\nRejected"<<endl);
}
int main()
{
    PrintResolt(ReadInfo());
    return 0;
}