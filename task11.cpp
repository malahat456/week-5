#include<iostream>
using namespace std;
main()
{
int hours;
int minutes;
int result;
int result1;
int result2;
cout<<"Enter hours: ";
cin>>hours;
cout<<"Enter minutes: ";
cin>>minutes;
result1=(hours*60)+(minutes+15);
result2=result1/60;
result=(result1)-(result2*60);
cout<<"Time "<<result2<<":"<<result;
}