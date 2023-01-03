#include <iostream>
using namespace std;
void flowers();
main()
{
  flowers();

} 
void flowers() 
{
int redrose;
  int whiterose;
  int tulips;
  int price;
  int  discount;
  int total;
 
 cout<<"number of redrose:";
 cin>>redrose;
 cout<<"number of whiterose:";
 cin>>whiterose;
 cout<<"number of tulips:";
 total=whiterose*2 + redrose*4.10 + tulips*2.50;
 discount= total-total*0.2;
 if(total<200);
 {
  cout<<"total:" <<total <<endl;
 }
 if(total>200);
 {
 cout<<"total:"<<total <<endl;
 cout<< "discount price:" <<discount <<endl;
 }
}  
