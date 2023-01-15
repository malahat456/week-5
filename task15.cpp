#include<iostream>
using namespace std;
main()
{
double volume;
double totalVolume;
double finalVolume;
double flowRateOfP1;
double flowRateOfP2;
double volumeOfP1;
double volumeOfP2;
double volumePer;
double contributionPerOfP1;
double contributionPerOfP2;
double contributionOfP1;
double contributionOfP2;
double overFlow;
float time;
cout<<"Enter the volume of pool:";
cin>>totalVolume;
cout<<"Enter the flow rate of pipe 1:";
cin>>flowRateOfP1;
cout<<"Enter the flow rate of pipe 2:";
cin>>flowRateOfP2;
cout<<"Enter the absence of worker in hours:";
cin>>time;
volumeOfP1=flowRateOfP1*time;
volumeOfP2=flowRateOfP2*time;
volume=volumeOfP1+volumeOfP2;
finalVolume=volume/totalVolume;
if(volume<=totalVolume)
{
volumePer=finalVolume*100;
contributionOfP1=volumeOfP1/volume;
contributionOfP2=volumeOfP2/volume;
contributionPerOfP1=contributionOfP1*100;
contributionPerOfP2=contributionOfP2*100;
cout<<"The pool is "<< volumePer <<" %full."<<endl;
cout<<"Pipe 1:"<< contributionPerOfP1 << " %"<<endl;
cout<<"Pipe1 2:"<<contributionPerOfP2<<" %"<<endl;
}
if(volume>totalVolume)
{
overFlow=volume-totalVolume;
cout<<"For "<< time <<" hours the pool overflows with " << overFlow <<" liters " <<endl;
}
 }