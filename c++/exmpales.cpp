#include<iostream>
using namespace std;
enum enColor{red,green,yellow,blue};
enum enGendor{Male,Female};
enum enMartileStartus{Single,Married};
struct stAddress
{
    string StareetName;
    string BuildingNo;
    string POBox;
    string ZipCode;
};
struct stContactInfo
{
   string Phon;
   string emial;
   stAddress Address;
};
struct stPerson{
    string Filename;
    string Lastname;

    stContactInfo ContactInfo;

    enColor Color;
    enGendor Gendor;
    enMartileStartus MartileStartus;
};

int main(){
    stPerson person1;

    person1.Filename ="yassin";
    person1.Lastname ="barrar";
    person1.ContactInfo.Phon ="06344223";
    person1.ContactInfo.emial="sdfsd@sdfd.com";
    person1.ContactInfo.Address.StareetName="hadede";
    person1.ContactInfo.Address.POBox="2323";
    person1.ContactInfo.Address.BuildingNo="234234";
    person1.ContactInfo.Address.ZipCode ="7687776";

    person1.Color = enColor::blue;
    person1.MartileStartus =enMartileStartus::Married;
    person1.Gendor =enGendor::Female;


    cout<< person1.ContactInfo.emial<<'\n';

    return 0;
}