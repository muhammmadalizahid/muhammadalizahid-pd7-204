#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printHeader();
void printmaze();
void printcar();
void printlanes();
void erasecar();
void movecarleft();
void movecarright();
void printobstacle();
void moveobstacle();
int px=70, py=28;
int ox=44, oy=13;
int main()
{
 printHeader();
 printmaze();
 printlanes();
 printcar();
 moveobstacle();
 while(true)
 {
    moveobstacle();
 if (GetAsyncKeyState(VK_LEFT) & 0x8000)
  {
  movecarleft();
  }
 if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
  {
  movecarright();
  }
 }
 
}

void printHeader()
{
    system("cls");
    int x=60, y=1;
    gotoxy(x,y++);
    cout<<"##### ####  ####  #   #    ##### ####";
    gotoxy(x,y++);
    cout<<"#     #  #  #   #  # #         # #   #";
    gotoxy(x,y++);
    cout<<"#     ####  ####    #      ##### #    #";
    gotoxy(x,y++);
    cout<<"#     #  #  #  #   # #     #     #   # ";
    gotoxy(x,y++);
    cout<<"##### #  #  #   # #   #    ##### ####";  
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X=x;
    coordinates.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

char getCharAtxy(short int x, short int y)
{
 CHAR_INFO ci;
 COORD xy = {0, 0};
 SMALL_RECT rect = {x, y, x, y};
 COORD coordBufSize;
 coordBufSize.X = 1;
 coordBufSize.Y = 1;
 return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar: ' ';
}

void printmaze()
{
    int x=38, y=10;
    gotoxy(x,y++);   
    cout<<"##############################################################################";
    gotoxy(x,y++);
    cout<<"#                                                                            #";
    gotoxy(x,y++);
    cout<<"#                                                                            #";
    gotoxy(x,y++);
    cout<<"#                                                                            #";
    gotoxy(x,y++);
    cout<<"#                                                                            #";
    gotoxy(x,y++);
    cout<<"#                                                                            #";
    gotoxy(x,y++);
    cout<<"#                                                                            #";
    gotoxy(x,y++);
    cout<<"#                                                                            #";
    gotoxy(x,y++);
    cout<<"#                                                                            #";
    gotoxy(x,y++);
    cout<<"#                                                                            #";
    gotoxy(x,y++);
    cout<<"#                                                                            #";
    gotoxy(x,y++);
    cout<<"#                                                                            #";
    gotoxy(x,y++);
    cout<<"#                                                                            #";
    gotoxy(x,y++);
    cout<<"#                                                                            #";
    gotoxy(x,y++);
    cout<<"#                                                                            #";
    gotoxy(x,y++);
    cout<<"#                                                                            #";
    gotoxy(x,y++);
    cout<<"#                                                                            #";
    gotoxy(x,y++);
    cout<<"#                                                                            #";
    gotoxy(x,y++);
    cout<<"#                                                                            #";
    gotoxy(x,y++);
    cout<<"#                                                                            #";
    gotoxy(x,y++);
    cout<<"#                                                                            #";
    gotoxy(x,y++);
    cout<<"#                                                                            #";
    gotoxy(x,y++);
    cout<<"#                                                                            #";
    gotoxy(x,y++);
    cout<<"#                                                                            #";
    gotoxy(x,y++);
    cout<<"#                                                                            #";
    gotoxy(x,y++);
    cout<<"##############################################################################";
}

void printcar()
{
  gotoxy(px,py);
  cout<<"   ______";
  gotoxy(px,py+1);
  cout<<"  /o    o\\";
  gotoxy(px,py+2);
  cout<<"-| ______ |-";
  gotoxy(px,py+3);
  cout<<" | \\____/ |";
  gotoxy(px,py+4);
  cout<<" |  ____  |";
  gotoxy(px,py+5);
  cout<<" | /____\\ |";
  gotoxy(px,py+6);
  cout<<"  \\o____o/";
} 

void printlanes()
{
    int x=39;
    int y=13;
     gotoxy(x,y++);
     cout<<"    |            |            |            |            |            |      ";
     gotoxy(x,y++);
     cout<<"    |            |            |            |            |            |      ";
     gotoxy(x,y++);
     cout<<"                                                                            ";
     gotoxy(x,y++);
     cout<<"                                                                            ";
     gotoxy(x,y++);
     cout<<"                                                                            ";
     gotoxy(x,y++);
     cout<<"    |            |            |            |            |            |      ";
     gotoxy(x,y++);
     cout<<"    |            |            |            |            |            |      ";
     gotoxy(x,y++);
     cout<<"                                                                            ";
     gotoxy(x,y++);
     cout<<"                                                                            ";
     gotoxy(x,y++);
     cout<<"                                                                            ";
     gotoxy(x,y++);
     cout<<"    |            |            |            |            |            |      ";
     gotoxy(x,y++);
     cout<<"    |            |            |            |            |            |      ";
     gotoxy(x,y++);
     cout<<"                                                                            ";
     gotoxy(x,y++);
     cout<<"                                                                            ";
     gotoxy(x,y++);
     cout<<"                                                                            ";
     gotoxy(x,y++);
     cout<<"    |            |            |            |            |            |      ";
     gotoxy(x,y++);
     cout<<"    |            |            |            |            |            |      ";
} 

void erasecar()
{
  gotoxy(px,py);
  cout<<"         ";
  gotoxy(px,py+1);
  cout<<"           ";
  gotoxy(px,py+2);
  cout<<"            ";
  gotoxy(px,py+3);
  cout<<"            ";
  gotoxy(px,py+4);
  cout<<"           ";
  gotoxy(px,py+5);
  cout<<"            ";
  gotoxy(px,py+6);
  cout<<"            ";
}

void movecarright()
 {
   if (px + 13<101 && getCharAtxy(px+13,py) == ' ')
    {
      erasecar();
      px = px + 13;
      printcar();
    }
 }

 void movecarleft()
 {
   if (px - 13 > 40 && getCharAtxy(px-13, py) == ' ')
    {
      erasecar();
      px = px - 13;
      printcar();
    }
 }

 void printobstacle()
 {
    gotoxy(ox,oy);
    cout<<" __________";
    gotoxy(ox,oy+1);
    cout<<"/|   |    |\\";
 }

 void removeobstacle()
 {
    gotoxy(ox,oy);
    cout<<"           ";
    gotoxy(ox,oy+1);
    cout<<"            ";
}

void moveobstacle()
{

 removeobstacle();
 ox = ox + 13;
 if(ox >= 100)
 {
 ox = 44;
 }
 printobstacle();
 Sleep(200);
}
