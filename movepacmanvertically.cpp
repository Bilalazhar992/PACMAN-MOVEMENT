#include <iostream>
#include <windows.h>
using namespace std;
void maze();
void move(int,int);
void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X= x;
 coordinates.Y= y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
main()
{
system ("cls");
int x = 2;
int y = 3;
maze();
gotoxy (2,2);
cout<<" P ";
while(true)
{
 move(x,y); 
 if (y<=22)
 {
  y=y+1;
 }
 if (y==22)
 {
  gotoxy(2,y-1);
  cout<<"  ";
  y=3; 
 }
 }
}
void maze()
{
cout<<"#############################################################################################"<<endl;
cout<<"||..   .....................................................................     ......    ||"<<endl;
cout<<"||..   %%%%%%%%%%%%%%%%%%%%%           ...       %%%%%%%%%%%%%%%%%%%%%  |%|.      %%%%     ||"<<endl;
cout<<"||..            |%|      |%|        |%|...       |%|               |%|  |%|.       |%|     ||"<<endl;
cout<<"||..            |%|      |%|        |%|...       |%|               |%|  |%|.       |%|     ||"<<endl;                                                                                                                                                                                                                                                                             
cout<<"||..            %%%%%%%%%%%%    . . |%|...       %%%%%%%%%%%%%%%%%%%%%     .      %%%%.    ||"<<endl;
cout<<"||..            |%|      |%|    . . |%|...       .....................  |%|.          .    ||"<<endl;
cout<<"||..            %%%%%%%%%%%%    . . |%|...       %%%%%%%%%%%%%%%%%%%%%  |%|.      %%%%.    ||"<<endl;                                                                                        
cout<<"||..                     |%|    .                |%|................    |%|.       |%|.    ||"<<endl;
cout<<"||..         ..........  |%|    .                |%|                |%|    .       |%|.    ||"<<endl;
cout<<"||..   |%|      |%|%%%%|%|. |%|    . |%|               ................|%|    .  |%|. |%|. ||"<<endl;
cout<<"||..   |%|      |%|    |%|..         %%%%%%%%%%%%%%%%  ................|%|    ...|%|.      ||"<<endl;
cout<<"||..   |%|      |%|    |%|..                    ...|%| ................|%|    ...|%|.      ||"<<endl;
cout<<"||..   |%|                 .                    ...|%|                        ...|%|%%%%%% ||"<<endl;
cout<<"||..   |%|      %%%%%%%%%%%%%%%%%               ...|%|%%%%%%%%%%%%%%       |%| . |%|       ||"<<endl;
cout<<"||..   ..............................................................      |%| ........... ||"<<endl;
cout<<"||     ..............................................................           .........  ||"<<endl;
cout<<"||..   |%|      |%|    |%|..         %%%%%%%%%%%%%%%%     .............|%| |%| ..|%|.      ||"<<endl;
cout<<"||..   |%|      |%|    |%|..                    ...|%|              %%%%%% |%| ..|%|.      ||"<<endl;
cout<<"||..   |%|                 .                    ...|%|                     |%| ..|%|.      ||"<<endl;
cout<<"||..   |%|     %%%%%%%%%%%%%%%%%%%%             ...|%|%%%%%%%%%%%%%%%%%%%  |%| ..|%|%%%%%% ||"<<endl;
cout<<"||....................................................................  |%| ............   ||"<<endl;
cout<<"||  ..................................................................          ........   ||"<<endl;                                                                                        
cout<<"#############################################################################################"<<endl;
}
void move(int x, int y)
{
 gotoxy(x,y-1);
 cout<<"     ";
 gotoxy(x,y);
 cout<< " P ";
 Sleep(200);
}
