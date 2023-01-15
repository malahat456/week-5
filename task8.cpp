#include<iostream>
#include<cmath>
using namespace std;
bool symmetrical(int number);
main()
{
int num;
cout<<"Enter the number: ";
cin>>num;
int num1,num2,num3,num4,rem1,rem2,rem3,rem4;
  num1=num/10;
  num2=num1/10;
  num3=num2/10;
  num4=num3/10;
  rem1=num%10;
  rem2=num1%10;
  rem3=num2%10;
  rem4=num3%10;
if (rem1==rem3)
 {
  symmetrical(num);
 }
 if (rem1!=rem3)
 {
  cout<<"Not symmetrical";
 }
}
bool symmetrical(int number)
{
 cout<<"Symmetrical";
}




 