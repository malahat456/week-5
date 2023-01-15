#include<iostream>
#include<cmath>
using namespace std;
main()
{
float num,result,result1,result2,result3,result4,result5;
cout<<"Enter the number: ";
cin>>num;
result=cbrt(num);
result1=ceil(num);
result2=floor(num);
result3=cos(num);
result4=sin(num);
result5=tan(num);
cout<<"The result is:  "<<result<<endl;
cout<<"The result1 is:  "<<result1<<endl;
cout<<"The result2 is:  "<<result2<<endl;
cout<<"The result3 is:  "<<result3<<endl;
cout<<"The result4 is:  "<<result4<<endl;
cout<<"The result5 is:  "<<result5<<endl;
}