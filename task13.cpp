#include <iostream>
#include <windows.h>
using namespace std;
void tomcat(int holidays);
main()
{
 int holidays;
 cout<<"enter holidays";
 cin>>holidays; 
 tomcat(holidays);

 void tomcat(int holiday);
 
 int working_days;
 int time_for_games;
 int diff_from_norm;
 int days_hours;
 int days_min;
 working_days=365-holidays;
 time_for_games=working_days*63+holidays*127;
 diff_from_norm=30000-time_for_games;
 days_hours=(diff_from_norm/60);
 days_min=(diff_from_norm%60);
 
 
 if(diff_from_norm<0);
 {
 cout<<"tom will be sad"<<endl;
 cout<<"hours and min less for play:" <<days_hours;
 cout<<""<<days_min;
 }
 if(diff_from_norm>0);
 {
 cout<<"tom will be happy";
 cout<<days_hours << " = hours and minutes =" << days_min;
 }
}
 