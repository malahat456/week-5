#include<iostream>
using namespace std;
float  taxCalculator(float price,char type);

main()
{
    float price;
    char type;
    cout<<"Enter the vehicle price: ";
    cin>>price;
    cout<<"Enter the code: ";
    cin>>type;
    taxCalculator( price,type);
    cout<<taxCalculator;
}
float  taxCalculator(float price,char type)
{
 float taxAmount,total,taxRate;
 char M,E,S,V,T;

 if(type=='M')
{
    taxAmount=(price*(0.06/100));
    total=price+taxAmount;
     cout<<total;
}
 if(type=='E')
{
   taxAmount=(price*(0.08/100));
    total=price+taxAmount;
     cout<<total;
}
 if(type=='S')
{
    taxAmount=(price*(0.1/100));
    total=price+taxAmount;
     cout<<total;
}
 if(type=='V')
{
    taxAmount=(price*(0.12/100));
    total=price+taxAmount;
    cout<<total;
}
 if(type=='T')
{
    taxAmount=(price*(0.15/100));
    total=price+taxAmount;
    cout<<total;
}

}