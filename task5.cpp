#include<iostream>
#include<windows.h>
using namespace std;
void printMaze();
void gotoxy(int x,int y);
void erase(int x,int y);
void printPacMan(int x,int y);
char getCharAtxy(short int x,short int y);
main()
{
    int pacManX=4;
    int pacManY=4;
    bool gameRunning=true;
    system("cls");
    printMaze();
    printPacMan(pacManX,pacManY);
    while(gameRunning)
    {
        if(GetAsyncKeyState(VK_LEFT))
        {
            char nextLocation=getCharAtxy(pacManX-1,pacManY);
            if(nextLocation==' ')
            {
                erase(pacManX,pacManY);
                pacManX=pacManX-1;
                printPacMan(pacManX,pacManY);
            }
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
            char nextLocation=getCharAtxy(pacManX+1,pacManY);
            if(nextLocation==' ')
            {
                erase(pacManX,pacManY);
                pacManX=pacManX+1;
                printPacMan(pacManX,pacManY);
            }
        }
        if(GetAsyncKeyState(VK_UP))
        {
            char nextLocation=getCharAtxy(pacManX,pacManY-1);
            if(nextLocation==' ')
            {
                erase(pacManX,pacManY);
                pacManY=pacManY-1;
                printPacMan(pacManX,pacManY);
            }
        }
        if(GetAsyncKeyState(VK_DOWN))
        {
            char nextLocation=getCharAtxy(pacManX,pacManY+1);
            if(nextLocation==' ')
            {
                erase(pacManX,pacManY);
                pacManY=pacManY+1;
                printPacMan(pacManX,pacManY);
            }
        }
            if(GetAsyncKeyState(VK_ESCAPE))
            {
                gameRunning=false;
            }
            Sleep(200);
            
    }
}    
void gotoxy(int x,int y)
{
    COORD coordinates;
    coordinates.X=x;
    coordinates.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
char getCharAtxy(short int x,short int y)
{
    CHAR_INFO ci;
    COORD xy={0,0};
    SMALL_RECT rect={x,y,x,y};
    COORD coordBufSize;
    coordBufSize.X=1;
    coordBufSize.Y=y;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),&ci,coordBufSize,xy,&rect)?ci.Char.AsciiChar:' ';
}
void erase(int x,int y)
{
    gotoxy(x,y);
    cout<<" ";
}
void printPacMan(int x,int y)
{
    gotoxy(x,y);
    cout<<"P";
}
void printMaze()
{
    cout<<"#############################################################"<<endl;
cout<<"||..  ........................................   .......   ||"<<endl;
cout<<"||..  %%%%%%%%%%%%%%     ...   %%%%%%%%%%  |%|..    %%%%%  ||"<<endl;
cout<<"||..       |%|   |%|  |%|...   |%|    |%|  |%|..      |%|  ||"<<endl;
cout<<"||..       |%|   |%|  |%|...   |%|    |%|  |%|..      |%|  ||"<<endl;
cout<<"||..       %%%%%%% .. |%|...   %%%%%%%%%%     ..    %%%%%. ||"<<endl;
cout<<"||..       |%|     .. |%|...   .......... |%| ..         . ||"<<endl;
cout<<"||..       %%%%%%%%.. |%|...   %%%%%%%%   |%| ..    %%%%%. ||"<<endl;
cout<<"||..            |%|.           |%|...     |%| ..      |%|. ||"<<endl;
cout<<"||..    ........|%|.       P   |%|...|%|      ..      |%|. ||"<<endl;
cout<<"||..|%| |%|%|%|.|%|. |%|          ...|%|      ..|%|   |%|. ||"<<endl;
cout<<"||..|%| |%| |%|..    %%%%%%%%%%   ...|%|       .|%|.  |%|  ||"<<endl;
cout<<"||..|%| |%| |%|..         ...|%|   %%%%%      . |%|.       ||"<<endl;
cout<<"||..|%|         .         ...|%|           |%|..|%|.       ||"<<endl;
cout<<"||..|%| %%%%%%%%%%%       ...|%|%%%%%%%    |%|..|%|%%%%%%% ||"<<endl;
cout<<"||.....................................    |%|............ ||"<<endl;
cout<<"||  ...................................           ........ ||"<<endl;
cout<<"||..|%| |%| |%|..    %%%%%%%%%%  ...|%|    |%|..|%|.       ||"<<endl;
cout<<"||..|%| |%| |%|..         ...|%|  %%%%%    |%|..|%|.       ||"<<endl;
cout<<"||..|%|         .     G   ...|%|           |%|..|%|.       ||"<<endl;
cout<<"||..|%| %%%%%%%%%%%       ...|%|%%%%%%     |%|..|%|%%%%%%% ||"<<endl;
cout<<"||....................................     |%|............ ||"<<endl;
cout<<"||  ..................................            ........ ||"<<endl;
cout<<"#############################################################"<<endl;
}
