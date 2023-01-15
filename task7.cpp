#include<iostream>
using namespace std;
int multiply(int num);
main()
{
int number,result;
cout<<"Enter the number: ";
cin>>number;
result=multiply(number);
cout<<"The result is: "<<result;
}
int multiply(int num)
{
 int result1;
 result1=num*5;
 return result1;
}