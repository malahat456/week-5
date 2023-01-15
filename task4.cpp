#include<iostream>
using namespace std;
int hour(int hours,int days,int workers);
main()
{
    int hours,days,workers,hours1;
    cout<<"Enter the hours in range(0 to 200): ";
    cin>>hours;
    cout<<"Enter the days in range(0 to 20000): ";
    cin>>days;
    cout<<"Enter the workers in range(0 to 200): ";
    cin>>workers;
    hour(hours,days,workers); 
}
int hour(int hours,int days,int workers)
{
    float days1,days2,hours1,time;
days1=(days/100)*10;
days2=days-days1;
hours1=10*days2*workers;
time=hours1-hours;
if(hours1>=hours)
{
    cout<<"Yes  "<<time<<" left";
}
if(hours1<hours)
{
    cout<<"Not enough time "<<-time<<" hours needed";
}
}