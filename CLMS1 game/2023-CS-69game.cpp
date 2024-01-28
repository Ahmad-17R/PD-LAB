#include <iostream>
#include <windows.h>
#include <conio.h>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;

void title();//print title
void gamewon();//game wins
void gameover();//game loses
string setcolor(unsigned short color);//sets the color of enemies

void printmaze();//prints the maze of the game


void gotoxy(int x, int y);//sets the coordinates
//Movement functions enemy one
void printenemy1(int, int);
void eraseenemy1();
void moveenemy1(string);
string changedirection1(string); 

//Movement functions enemy two
string changedirection2(string);
void printenemy2(int, int);
void eraseenemy2();
void moveenemy2(string);


//Movement function enemy three
string changedirection3(string);
void printenemy3(int, int);
void eraseenemy3();
void moveenemy3(string);


void placeBonusPill();//PLACES bonuspill 
char getCharAtxy(short int x, short int y);//gets next character

//Movement of player
void printplayer();
void eraseplayer();
void moveplayerup();
void moveplayerdown();
void moveplayerleft();
void moveplayerright();

//Firing mechanism of player
void movefire();
void producefire();
void cursor_hide();

//Firing mechanism of enemies
void moveenemyfire();
void produceenemyfire();

//Prints rules of the game
void printrules();

//All the global variables
int count=0;
int px = 1, py = 6;
int ex1 = 91, ey1 = 3, ex2 = 91, ey2 = 5, ex3 = 67, ey3 = 24, score = 0;
int bonusY ,bonusX;
float EH=60,E1h=20,E2h=20,E3h=20;
int count1=0,count2=0,count3=0;
int PHealth=200;
main()
{
    system("cls");
    title();
    printrules();
    system("cls");
    printmaze();
    printenemy1(91, 3);
    printenemy2(91, 5);
    printenemy3(67, 24);
    string direction1 = "left";
    string direction2 = "down";
    string direction3 = "diagonalleft";
    printplayer();
    placeBonusPill(); 
   
    string result;
    cursor_hide();
    //cursor_show();
    while (true)
    {

        if (GetAsyncKeyState(VK_LEFT))
        {
            moveplayerleft();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            if(px+11<47)
            {moveplayerright();}
        }
        if (GetAsyncKeyState(VK_UP))
        {
            moveplayerup();
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            moveplayerdown();
        }
        if (GetAsyncKeyState(VK_SPACE))
        {
            producefire();
        }
        
        direction1 = changedirection1(direction1);
        direction2 = changedirection2(direction2);
        direction3 = changedirection3(direction3);
        moveenemy1(direction1);
        moveenemy2(direction2);
        moveenemy3(direction3);

        moveenemyfire();
       produceenemyfire();
        movefire(); 
        gotoxy(108,4);
        cout<<"Player's Coordinate's";
        gotoxy(109,5);
        cout<<"X-coordinate: ";
        gotoxy(123,5);
        cout<<px;
        gotoxy(109,6);
        cout<<"Y-coordinate: ";
        gotoxy(123,6);
        cout<<py;
        gotoxy(108,8);
        cout<<"Score: ";
        gotoxy(117,8);
        cout<<score;
        gotoxy(108,9);
        cout<<"Player's Health: ";
        gotoxy(125,9);
        cout<<"   ";
        gotoxy(125,9);
        cout<<PHealth;
        gotoxy(108,10);
        cout<<"Enemy's Health: ";
        gotoxy(124,10);
        cout<<EH;
        if(EH<=0){
            system("cls");
            gamewon();
            string ans;
            setcolor(6);
           // cout<<"1.Play again!"<<endl;
            cout<<"1.Exit"<<endl;
            getline(cin>>ws,ans);
            getch();
            system("cls");
            break;
            
            

        }
        else if(PHealth<=0){
            system("cls");
            gameover();
                string ans;
                setcolor(6);
            //cout<<"1.Play again!"<<endl;
            cout<<"1.Exit"<<endl;
            getline(cin>>ws,ans);
            getch();
            system("cls");
            break;
           
            
        }
        Sleep(100);
    }
    gotoxy(2,2);
    getch();
}

void printmaze()  
{   setcolor(1);
    cout<<"                                                                   Tank                                                            "<<endl;
    cout<<"                                                                 WarLords                                                          "<<endl;
    setcolor(6);
    cout <<"##################################################################################################################################" << endl;
    cout <<"#                                                                                                         #                      #" << endl;
   cout << "#                                                                                                         #                      #" << endl;
   cout << "#                                                                                                         #                      #" << endl;
   cout << "#                                                                                                         #                      #" << endl;
   cout << "#                                                                                                         #                      #" << endl;
   cout << "#                                                                                                         #                      #" << endl;
   cout << "#                                                                                                         #                      #" << endl;
   cout << "#                                                                                                         #                      #" << endl;
   cout << "#                                                                                                         #                      #" << endl;
   cout << "#                                                                                                         #                      #" << endl;
   cout << "#                                                                                                         #                      #" << endl;
   cout << "#                                                                                                         ########################" << endl;
   cout << "#                                                                                                         #                      #" << endl;
   cout << "#                                                                                                         #                      #" << endl;
   cout << "#                                                                                                         #                      #" << endl;
   cout << "#                                                                                                         #    Destroy all the   #" << endl;
   cout << "#                                                                                                         #     enemies to win   #" << endl;
   cout << "#                                                                                                         #        the game      #" << endl;
   cout << "#                                                                                                         #                      #" << endl;
   cout << "#                                                                                                         #                      #" << endl;
   cout << "#                                                                                                         #                      #" << endl;
   cout << "#                                                                                                         #                      #" << endl;
   cout << "#                                                                                                         #                      #" << endl;
    cout <<"##################################################################################################################################" << endl;
    
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printenemy1(int ex1, int ey1)
{
    setcolor(4);
    gotoxy(ex1, ey1);
    cout << "    /1^^|    " << endl;
    gotoxy(ex1, ey1 + 1);
    cout << "<<111111/|==" << endl;
}
void eraseenemy1()
{
    gotoxy(ex1, ey1);
    cout << "             " << endl;
    gotoxy(ex1, ey1 + 1);
    cout << "             " << endl;

}
void moveenemy1(string direction1)
{   
    if(count1<5){
    if(getCharAtxy(ex1-1,ey1)=='o' || getCharAtxy(ex1-2,ey1)=='o' || getCharAtxy(ex1-1,ey1+1)=='o' || getCharAtxy(ex1-2,ey1+1)=='o'){
        count1++;
    }}
    eraseenemy1();
    if(count1<5){
    
    if (direction1 == "left")
    {
        ex1 = ex1 - 2;
    }
    if (direction1 == "right")
    {
        ex1 = ex1 + 2;
    }
    printenemy1(ex1, ey1);}
    
}

string changedirection1(string direction1)
{
    if (direction1 == "left" && ex1 <= 50)
    {
        direction1 = "right";
    }
    if (direction1 == "right" && ex1 >= 91)
    {
        direction1 = "left";
    }
    return direction1;
}
string changedirection2(string direction2)
{
    

    if (direction2 == "up" && ey2 == 5)
    {
        direction2 = "down";
    }
    if (direction2 == "down" && ey2 == 24)
    {
        direction2 = "up";
    }
    return direction2;
}
void printenemy2(int ex2, int ey2)
{
    setcolor(4);
   gotoxy(ex2, ey2);
    cout << "    /2^^|    " << endl;
    gotoxy(ex2, ey2 + 1);
    cout << "<<222222/|==" << endl;
}
void eraseenemy2()
{
    gotoxy(ex2, ey2);
    cout << "             " << endl;
    gotoxy(ex2, ey2 + 1);
    cout << "             " << endl;
}
void moveenemy2(string direction2)
{
    if(count2<5){
    if(getCharAtxy(ex1-1,ey1)=='o' || getCharAtxy(ex1-2,ey1)=='o' || getCharAtxy(ex1-1,ey1+1)=='o' || getCharAtxy(ex1-2,ey1+1)=='o'){
        count2++;
    }}

    eraseenemy2();
    if(count2<5){
    if (direction2 == "up")
    {
        ey2 = ey2 - 1;
    }
    if (direction2 == "down")
    {
        ey2 = ey2 + 1;
    }

    printenemy2(ex2, ey2);}
}

void printenemy3(int ex3, int ey3)
{
    setcolor(4);
    gotoxy(ex3, ey3);
    cout << "    /3^^|    " << endl;
    gotoxy(ex3, ey3 + 1);
    cout << "<<333333/|==" << endl;
}
void eraseenemy3()
{
    gotoxy(ex3, ey3);
    cout << "             " << endl;
    gotoxy(ex3, ey3 + 1);
    cout << "             " << endl;
}
void moveenemy3(string direction3)
{
    if(count3<5){
    if(getCharAtxy(ex1-1,ey1)=='o' || getCharAtxy(ex1-2,ey1)=='o' || getCharAtxy(ex1-1,ey1+1)=='o' || getCharAtxy(ex1-2,ey1+1)=='o'){
        count3++;
    }}
    eraseenemy3();
    if(count3<5){
    if (direction3 == "diagonalleft")
    {
        ex3 = ex3 - 2;
        ey3 = ey3 - 1;
    }
    if (direction3 == "diagonalright")
    {
        ex3 = ex3 + 2;
        ey3 = ey3 + 1;
    }

    printenemy3(ex3, ey3);}
}

string changedirection3(string direction3)
{

    if (direction3 == "diagonalright" && ex3 == 67 && ey3 == 24)
    {
        direction3 = "diagonalleft";
    }
    if (direction3 == "diagonalleft" && ex3 == 47 && ey3 == 14)
    {
        direction3 = "diagonalright";
    }
    return direction3;
}

void printplayer()
{
    setcolor(2);
    gotoxy(px, py);
    cout << "   8888--->" << endl;
    gotoxy(px, py + 1);
    cout << "8888888888" << endl;
    gotoxy(px, py + 2);
    cout << "8________8" << endl;
    gotoxy(px, py + 3);
    cout << "  @    @  " << endl;

}
void eraseplayer()
{
    gotoxy(px, py);
    cout << "           " << endl;
    gotoxy(px, py + 1);
    cout << "           " << endl;
    gotoxy(px, py + 2);
    cout << "           " << endl;
    gotoxy(px, py + 3);
    cout << "           " << endl;
}
void moveplayerleft()
{   char left1=getCharAtxy(px - 1, py) ;
    char left2=getCharAtxy(px - 1, py+1) ;
    char left3=getCharAtxy(px - 1, py+2) ;
    char left4=getCharAtxy(px - 1, py+3) ;
  
  if (left1 == ' ' && left2 == ' ' && left3 == ' ' && left4 == ' ' )
                        {

                            eraseplayer();
                            px = px - 1;
                            printplayer();
                        }
    if (left1 == '*' || left2 == '*' || left3 == '*' || left4 == '*' ){
         eraseplayer();
        px = px - 1;
        printplayer();
        PHealth +=5;
        placeBonusPill();
    }
                    }
void moveplayerright()
{
    char next1 = getCharAtxy(px + 11, py);
    char next2 = getCharAtxy(px + 11, py + 1);
    char next3 = getCharAtxy(px + 11, py + 2);
    char next4 = getCharAtxy(px + 11, py + 3);

    if (next1 == ' ' && next2 == ' ' && next3 == ' ' && next4 == ' ' )
    {
        eraseplayer();
        px = px + 1; 
        printplayer();
          }
    if (next1 == '*' || next2 == '*' || next3 == '*' || next4 == '*')
    {
        eraseplayer();
        px = px + 1;
        printplayer();
       PHealth += 5;
        placeBonusPill();
    }
}

void moveplayerup()
{   char up1=getCharAtxy(px, py - 1);
char up2=getCharAtxy(px+1, py - 1);
char up3=getCharAtxy(px+2, py - 1);
char up4=getCharAtxy(px+3, py - 1);
char up5=getCharAtxy(px+4, py - 1);
char up6=getCharAtxy(px+5, py - 1);
char up7=getCharAtxy(px+6, py - 1);
char up8=getCharAtxy(px+7, py - 1);
char up9=getCharAtxy(px+8, py - 1);
char up10=getCharAtxy(px+9, py - 1);
char up11=getCharAtxy(px+10, py - 1);
char up12=getCharAtxy(px+11, py - 1);
  if(up1==' ' && up2==' '&& up3==' ' && up4==' ' && up5==' ' && up5==' ' && up6==' ' && up7==' ' && up8==' ' && up9==' '  ){
    eraseplayer();
    py = py - 1;
    printplayer();
 }
if(up1=='*'|| up2=='*'|| up3=='*'|| up4=='*'|| up5=='*'|| up5=='*'|| up6=='*'|| up7=='*'|| up8=='*'|| up9=='*'){
    eraseplayer();
    py = py - 1;
    printplayer();
    PHealth +=5;
    placeBonusPill();
}
                                                                
}                                      
void moveplayerdown()
{
char up1=getCharAtxy(px, py + 4);
char up2=getCharAtxy(px+1, py + 4);
char up3=getCharAtxy(px+2, py + 4);
char up4=getCharAtxy(px+3, py + 4);
char up5=getCharAtxy(px+4, py + 4);
char up6=getCharAtxy(px+5, py + 4);
char up7=getCharAtxy(px+6, py + 4);
char up8=getCharAtxy(px+7, py + 4);
char up9=getCharAtxy(px+8, py + 4);
char up10=getCharAtxy(px+9, py + 4);
char up11=getCharAtxy(px+10, py + 6);
char up12=getCharAtxy(px+11, py + 6);

  if(up1==' ' && up2==' '&& up3==' ' && up4==' ' && up5==' ' && up5==' '  && up6==' ' && up7==' ' && up8==' ' && up9==' '){
    eraseplayer();
    py = py +1;
    printplayer();
 }
if(up1=='*'|| up2=='*'|| up3=='*'|| up4=='*'|| up5=='*'|| up5=='*'|| up6=='*'|| up7=='*'|| up8=='*'|| up9=='*'){
    eraseplayer();
    py = py + 1;
    printplayer();
    PHealth +=5;
    placeBonusPill();
}

}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
                                                                                            : ' ';
}
void bonus()
{
    gotoxy(30, 6);
    cout << "*";
}
void placeBonusPill() 
{
    srand(time(0));
    bonusX = rand() % 43; // Adjust based on the width of your console window
    srand(time(0));
    bonusY = rand() % 24; // Adjust based on the height of your console window
    while(!(getCharAtxy(bonusX, bonusY) ==' ' && bonusX>1 && bonusY>3))
{    
    // Generate random position for the bonus pill 
    srand(time(0));
    bonusX = rand() % 43; // Adjust based on the width of your console window
    srand(time(0));
    bonusY = rand() % 24; // Adjust based on the height of your console window
}
    // Set the cursor position to represent the bonus pill
    gotoxy(bonusX,bonusY);
    cout << '*';
    
}

void producefire(){
    gotoxy(px+11,py); 
    cout<<"o";
}
void movefire(){
    int k=0;
    for (int i = 1; i < 110; i++)
    {
        for (int j = 0; j < 24; j++)
        {
            if(k>0){
                k=0;
                continue;
            }
          
         if (getCharAtxy(i,j)=='o')
         
         {  
            if (getCharAtxy(i+1,j)==' ')
            {
            gotoxy(i,j);
            cout<<" ";
            gotoxy(i+1,j);
            cout<<"o";
            k=i+1;
            }
            else if(getCharAtxy(i+1,j)=='/' || getCharAtxy(i+1,j)=='<' || getCharAtxy(i+1,j)=='#' || getCharAtxy(i+1,j)=='*' || getCharAtxy(i+1,j)=='+'){
                if(getCharAtxy(i+1,j)=='/' || getCharAtxy(i+1,j)=='<'){
                  if(getCharAtxy(i+3,j)=='1' || getCharAtxy(i+2,j)=='1'){

                    count1++;
                    score+=5;
                    EH-=4;
                    gotoxy(i,j);
                  }
                  else if(getCharAtxy(i+3,j)=='2' || getCharAtxy(i+2,j)=='2'){
                    count2++;
                    score+=5;
                    EH-=4;
                    gotoxy(i,j);
                  }
                  else if(getCharAtxy(i+3,j)=='3' || getCharAtxy(i+2,j)=='3'){
                    count3++;
                    score+=5;
                    EH-=4;
                    gotoxy(i,j);}
                    cout<<" "; 
                }
                else if(getCharAtxy(i+1,j)=='#'|| getCharAtxy(i+1,j)=='*' || getCharAtxy(i+1,j)=='+'){
                gotoxy(i,j);
                cout<<" "; 
                }
            }
        
    }
    
}  }}
void enemyfire(){

}                                     
void printrules(){
    string select;
    setcolor(4);
    cout<<"Rules: "<<endl;
    cout<<"Press upper key to move player up"<<endl;
    cout<<"Press down key to move player down"<<endl;
    cout<<"Press left key to move player left"<<endl;
    cout<<"Press right key to move player right"<<endl;
    cout<<"Press space bar to fire"<<endl;
    cout<<"If enemy's fire touches you , your health will decrease."<<endl;
    cout<<"If health becomes zero, game will be over."<<endl;
    cout<<"There are two levels in the game."<<endl;
    cout<<endl;
    cout<<"Press any key to continue...";
    getch();
  
}
void produceenemyfire(){

    setcolor(8);    
    if((py==ey1 || py+1==ey1 || py==ey1+1 || py+1==ey1+1) && count1<5){
        gotoxy(ex1-3,ey1+1);
        cout<<"+";
    }
      if((py+1==ey2 || py+2==ey2 || py+1==ey2+1 || py+2==ey2+1) && count2<5){
        gotoxy(ex2-3,ey2+1);
        cout<<"+";
       // getch();
    }
    if((py+1==ey3 || py+2==ey3 || py+1==ey3+1 || py+2==ey3+1 ) && count3<5){
        gotoxy(ex3-3,ey3+1);
        cout<<"+";
       // getch();
    }
}
void moveenemyfire(){
    for (int i = 110; i >= 0; i--)
    {
        for (int j = 0; j <26; j++)
        {
      
          
         if (getCharAtxy(i,j)=='+')
         
         {  
            if (getCharAtxy(i-1,j)==' ')
            {
            gotoxy(i,j);
            cout<<" ";
            gotoxy(i-1,j);
            cout<<"+";
            }
            else if(getCharAtxy(i-1,j)=='8' || getCharAtxy(i-1,j)=='>' || getCharAtxy(i-1,j)=='@' || getCharAtxy(i-1,j)=='#' || getCharAtxy(i-1,j)=='|' || getCharAtxy(i-1,j)=='=' || getCharAtxy(i-1,j)=='*' || getCharAtxy(i-1,j)=='o'){
                if(getCharAtxy(i-1,j)=='8' || getCharAtxy(i-1,j)=='>' || getCharAtxy(i-1,j)=='@'){
                
                    PHealth -= 5;
                    gotoxy(i,j);
                    cout<<" ";
                    }
       
                else if(getCharAtxy(i-1,j)=='#' || getCharAtxy(i-1,j)=='|' || getCharAtxy(i-1,j)=='=' || getCharAtxy(i-1,j)=='*'  || getCharAtxy(i-1,j)=='o'){
                gotoxy(i,j);
                cout<<" "; 
                }}
            
        
    }
        }
        }} 
void title()
{
    gotoxy(14, 1);
    setcolor(3);
    cout << R"(
       
  _______          _     __          __        _                   _     
 |__   __|        | |    \ \        / /       | |                 | |    
    | | __ _ _ __ | | __  \ \  /\  / /_ _ _ __| |     ___  _ __ __| |___ 
    | |/ _` | '_ \| |/ /   \ \/  \/ / _` | '__| |    / _ \| '__/ _` / __|
    | | (_| | | | |   <     \  /\  / (_| | |  | |___| (_) | | | (_| \__ \
    |_|\__,_|_| |_|_|\_\     \/  \/ \__,_|_|  |______\___/|_|  \__,_|___/
                                                                         
                                                                         
    )"
         << endl;
}
void cursor_hide()
{
    /*
        For Removing Blinking Cursor on Screen
    */
    HANDLE hStdOut = NULL;
    CONSOLE_CURSOR_INFO curInfo;

    hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleCursorInfo(hStdOut, &curInfo);
    curInfo.bVisible = FALSE;
    SetConsoleCursorInfo(hStdOut, &curInfo);
}


void gameover()
{
    setcolor(4);
    gotoxy(14, 1);
    cout << R"(
       
   _____                                            
  / ____|                                           
 | |  __  __ _ _ __ ___   ___    _____   _____ _ __ 
 | | |_ |/ _` | '_ ` _ \ / _ \  / _ \ \ / / _ \ '__|
 | |__| | (_| | | | | | |  __/ | (_) \ V /  __/ |   
  \_____|\__,_|_| |_| |_|\___|  \___/ \_/ \___|_| 
                                                                         
                                                                         
    )"
         << endl;
}
void gamewon()
{
    setcolor(2);
    gotoxy(14, 1);
    cout << R"(
       

 __     __                                 _   _                                         _ 
 \ \   / /                                | | | |                                       | |
  \ \_/ /__  _   _  __      _____  _ __   | |_| |__   ___    __ _  __ _ _ __ ___   ___  | |
   \   / _ \| | | | \ \ /\ / / _ \| '_ \  | __| '_ \ / _ \  / _` |/ _` | '_ ` _ \ / _ \ | |
    | | (_) | |_| |  \ V  V / (_) | | | | | |_| | | |  __/ | (_| | (_| | | | | | |  __/ |_|
    |_|\___/ \__,_|   \_/\_/ \___/|_| |_|  \__|_| |_|\___|  \__, |\__,_|_| |_| |_|\___| (_)
                                                             __/ |                         
                                                            |___/                          

                                                                         
                                                                         
    )"
         << endl;
}
string setcolor(unsigned short color){
    HANDLE hcon=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon,color);
    return "";
}
