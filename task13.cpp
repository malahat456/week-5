#include<iostream>
using namespace std;
main()
{
int p1,p2,num;
string ten,unit;
cout<<"Enter a 2 digit number: ";
cin>>num;
p2=num%10;
p1=(num/10)%10;
 if(p1==0)
 {
 ten="";
 }
 if(p1==2)
 {
 ten="twenty";
 }
 if(p1==3)
 {
 ten="thirty";
 }
 if(p1==4)
 {
 ten="forty";
 }
 if(p1==5)
 {
 ten="fifty";
 } 
 if(p1==6)
 {
 ten="sixty";
 }
 if(p1==7)
 {
 ten="seventy";
 }
 if(p1==8)
 {
 ten="eighty";
 }
 if(p1==9)
 {
 ten="ninety";
 }
 if(p2==0)
 {
 unit="";
 }
 if(p2==1)
 {
 unit="one";
 }
 if(p2==2)
 {
 unit="two";
 }
 if(p2==3)
 {
 unit="three";
 }
 if(p2==4)
 {
 unit="four";
 }
 if(p2==5)
 {
 unit="five";
 } 
 if(p2==6)
 {
 unit="six";
 }
 if(p2==7)
 {
 unit="seven";
 }
 if(p2==8)
 {
 unit="eight";
 }
 if(p2==9)
 {
 unit="nine";
 }
cout<<ten<< " " <<unit;
}





















