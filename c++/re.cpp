#include <iostream>
using namespace std;
int main()
{
   string name;
   int Age;
   string city;
   string country;
   float monthlysalary;
   int yearlysalary;
   char gender;
   bool married;
   cout <<"please enter your name?"<< endl;
   cin  >> name;
   cout <<"please enter your age?"<< endl;
   cin  >> Age;
   cout <<"please enter your city?"<< endl;
   cin  >> city;
   cout <<"please enter your country?"<< endl;
   cin  >> country;
   cout <<"please enter your monthlysalary?"<< endl;
   cin  >> monthlysalary;
   cout <<"please enter your yearlysalary?"<< endl;
   cin  >> yearlysalary;
   cout <<"please enter your gender?"<< endl;
   cin  >> gender;
   cout <<"please enter your married?"<< endl;
   cin  >> married;

cout<<"-------------------------"<<endl;
   cout << "name:"<<name<<endl;
   cout << "Age:"<<Age<<endl;
   cout << "city:"<<city<<endl;
   cout << "country:"<<country<<endl;
   cout << "monthlysalary:"<<monthlysalary<<endl;
   cout << "yearlysalary:"<<monthlysalary * 12<<endl;
   cout << "gender:"<<gender<<endl;
   cout << "married:"<<married<<endl;
   return 0;
} 
