#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void printname();
int x;
int y;

main()
{
 int x=60;
 int y=17;
 printname();
 gotoxy(x+1,y);
 

}
void printname()

{
  system("cls");
  gotoxy(60,17);
  cout<<"#      #    #######   #####     #####   #####      #   ####### "<<endl;
  gotoxy(61,17);
  cout<<"#      #    #     #   #    #    #   #   #    #     #   #     # "<<endl;
  gotoxy(62,17);
  cout<<"#      #    #     #   #     #  #    #   #     #    #   #     # "<<endl;
  gotoxy(63,17);
  cout<<"#      #    #     #   #      ##     #   #      #   #   #     # "<<endl;
  gotoxy(64,17);
  cout<<"########    #######   #             #   #       #  #   ####### "<<endl;
  gotoxy(65,17); 
  cout<<"#      #    #     #   #             #   #        # #   #     # "<<endl;
  gotoxy(66,17);
  cout<<"#      #    #     #   #             #   #         #    #     # "<<endl;
  gotoxy(67,17);
  cout<<"#      #    #     #   #             #   #              #     # "<<endl;
}
void gotoxy(int x,int y)
{
    COORD coordinates;
    coordinates.X= x;
    coordinates.Y= y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}