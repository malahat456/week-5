#include<iostream>
#include<cmath>
using namespace std;
double volume(float metres);
double volume1(float centimetres);
double volume2(float milliimetres);
double volume3(float kilometres);
main()
{
    float length,width,height,metres,centimetres,kilometres,millimetres;
    string outputUnit;
    cout<<"Enter the length";
    cin>>length;
    cout<<"Enter the width";
    cin>>width;
    cout<<"Enter the height";
    cin>>height;
    cout<<"Enter the outputUnit";
    cin>>outputUnit;
    if(outputUnit=="metres")
    {
    volume(metres);
    cout<<"The volume is: "<<metres<<"cubic metres";
    }
    if(outputUnit=="centimetres")
    {
    volume1(centimetres);
    cout<<"The volume is: "<<centimetres<<"cubic centimetres";
    }
    if(outputUnit=="millimetres")
    {
    volume2(millimetres);
    cout<<"The volume is: "<<millimetres<<"cubic millimetres";
    }
     if(outputUnit=="kilometres") 
     {
    volume3(kilometres);
    cout<<"The volume is: "<<kilometres<<"cubic kilometres";
    }
}
  double volume(float metres)
    {
        double metres1,length,width,height;
        metres1=(length*width*height)/3;
    }
     double volume1(float centimetres)
     {
        double centimetres1,length,width,height;
      centimetres1=((((length*width*height)/3)*100)*pow(100,2));
     }
     double volume2(float milliimetres)
     {
        double millimetres1,length,width,height;
        millimetres1=((((length*width*height)/3)*1000)*pow(1000,3));
     }
     double volume3(float kilometres)
     {
        double kilometres1,length,width,height;
        kilometres1=((((length*width*height)/3)*0.1)*pow(0.1,-3));
     }
     







     
