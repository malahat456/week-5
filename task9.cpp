#include<iostream>
using namespace std;
int evenish(int num);
main()
{
int num,result;
cout<<"Enter the number: ";
cin>>num;
result=evenish(num);
}
int evenish(int num)
{
int rem,rem1,rem2,rem3,rem4,result1;
rem=num/10;
rem1=(num%10);
rem2=((num%10)%10);
rem3=(((num%10)%10)%10);
rem3=((((num%10)%10)%10)%10);
result1=rem+rem1+rem2+rem3+rem4;
 if(result1%2==0)
 {
  cout<<"Evenish";
 }
 if(result1%2!=0)
 {
  cout<<"Oddish";
 }
}
