#include<iostream>
#include<cmath>
float formula(float a,float b,float c);
float formula1(float a,float b,float c);
using namespace std;
main()
{
int a,b,c;
float result1,result2,discriminant;
cout<<"Enter the value of a: ";
cin>>a;
cout<<"Enter the value of b: ";
cin>>b;
cout<<"Enter the value of c: ";
cin>>c;
discriminant=(b*b)-(4*a*c);
result1=formula(a, b, c);
result2=formula1( a, b, c);
cout<<"The value for positive x is: "<<result1;
cout<<"The value for negative x is: "<<result2;
}
float formula(float a,float b,float c)
{
float result1,discriminant;
result1=(-b)+(sqrt(discriminant)/(2*a));

return result1;
}
float formula1(float a,float b,float c)
{
float result2,discriminant;
result2=(-b)-(sqrt(discriminant)/(2*a));
return result2;
}







