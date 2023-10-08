#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
void printmaze();
void gotoxy(int x,int y);
void printenemy1(int,int);
void eraseenemy1(int,int);
void moveenemy1(int,int);

void printenemy2(int,int);
void eraseenemy2(int,int);
void moveenemy2(int,int);
void printenemy3(int,int);
void eraseenemy3(int,int);
void moveenemy3(int,int);

char getCharAtxy(short int x, short int y);
void printplayer(int,int);
void eraseplayer(int,int);
void moveplayerup();
void moveplayerdown();
void moveplayerleft();
void moveplayerright();
int px=1,py=6;
main(){
    int ex1,ey1,ex2,ey2,ex3,ey3;
    ex1=35;
    ey1=11;
    ex2=76;
    ey2=1;
    ex3=75;
    ey3=19;
    system("cls");
    printmaze();
    printenemy1(35,11);
    printenemy2(76,1);
    printenemy3(75,19);
    printplayer(1,6);
    while(true){
    if(GetAsyncKeyState(VK_LEFT)){
        moveplayerleft();
    }
    if(GetAsyncKeyState(VK_RIGHT)){
        moveplayerright();
    }
     if(GetAsyncKeyState(VK_UP)){
        moveplayerup();
    }
    if(GetAsyncKeyState(VK_DOWN)){
        moveplayerdown();
    }
    moveenemy1(ex1,ex2);
    moveenemy2(ex2,ey2);
    moveenemy3(ex3,ey3);
    Sleep(200);}
}


void printmaze(){
cout<<"##########################################################################################"<<endl;
cout<<"#								         		                                        #"<<endl;
cout<<"#								         		                                        #"<<endl;
cout<<"#								        		                                        #"<<endl;
cout<<"#								         		                                        #"<<endl;
cout<<"#								         		                                        #"<<endl;
cout<<"#								       			                                        #"<<endl;
cout<<"#								        		                                        #"<<endl;
cout<<"#								         		                                        #"<<endl;
cout<<"#								         		                                        #"<<endl;
cout<<"#								         		                                        #"<<endl;
cout<<"#								         		                                        #"<<endl;
cout<<"#								         	                                        	#"<<endl;
cout<<"#								         		                                        #"<<endl;
cout<<"#								         		                                        #"<<endl;
cout<<"#								         		                                        #"<<endl;
cout<<"#								         		                                        #"<<endl;
cout<<"#								         		                                        #"<<endl;
cout<<"#								         		                                        #"<<endl;
cout<<"#								         		                                        #"<<endl;
cout<<"#								        		                                        #"<<endl;
cout<<"#								         	                                        	#"<<endl;
cout<<"#								         	                                        	#"<<endl;
cout<<"#								         		                                        #"<<endl;
cout<<"##########################################################################################"<<endl;
}

void gotoxy(int x,int y){
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);


}
void printenemy1(int ex1,int ey1){
   
 gotoxy(ex1,ey1);
    cout<<"      ....     "<<endl;
     gotoxy(ex1,ey1+1);
    cout<<"  ___/___|___/|"<<endl;
     gotoxy(ex1,ey1+2);
    cout<<" /____________|===  "<<endl;


}
void eraseenemy1(int ex1,int ey1){
 gotoxy(ex1,ey1);
    cout<<"               "<<endl;
     gotoxy(ex1,ey1+1);
    cout<<"               "<<endl;
     gotoxy(ex1,ey1+2);
    cout<<"                     "<<endl;


}
void moveenemy1(int ex1,int ey1){
    if(ex1==76)
    {
        ex1=35;
    eraseenemy1(ex1,ey1);
    ex1=ex1+1;
  
    
    printenemy1(ex1,ey1);}
}

void printenemy2(int ex2,int ey2){
   
 gotoxy(ex2,ey2);
    cout<<"      ....     "<<endl;
     gotoxy(ex2,ey2+1);
    cout<<"  ___/___|___/|"<<endl;
     gotoxy(ex2,ey2+2);
    cout<<" /____________|===  "<<endl;


}
void eraseenemy2(int ex2,int ey2){
 gotoxy(ex2,ey2);
    cout<<"               "<<endl;
     gotoxy(ex2,ey2+1);
    cout<<"               "<<endl;
     gotoxy(ex2,ey2+2);
    cout<<"                     "<<endl;


}
void moveenemy2(int ex2,int ey2){
    if(ey2<20){ey2=1;}
    eraseenemy2(ex2,ey2);
    ey2=ey2+1;
   
    printenemy2(ex2,ey2);
}


void printenemy3(int ex3,int ey3){
   
 gotoxy(ex3,ey3);
    cout<<"      ....     "<<endl;
     gotoxy(ex3,ey3+2);
    cout<<"  ___/___|___/|"<<endl;
     gotoxy(ex3,ey3+3);
    cout<<" /____________|===  "<<endl;


}
void eraseenemy3(int ex3,int ey3){
 gotoxy(ex3,ey3);
    cout<<"               "<<endl;
     gotoxy(ex3,ey3+2);
    cout<<"               "<<endl;
     gotoxy(ex3,ey3+2);
    cout<<"                     "<<endl;


}
void moveenemy3(int ex3,int ey3){
    if(ex3>35 && ey3>12 ){ex3=75,ey3=19;}
       eraseenemy3(ex3,ey3);
    ex3=ex3-1;
    ey3=ey3-1;
    printenemy3(ex3,ey3);}


void printplayer(int px,int py){
gotoxy(px,py);
cout<<"      ---------          ___                "<<endl;
gotoxy(px,py+1);
cout<<"     |         |========|__/          "<<endl;
gotoxy(px,py+2);
cout<<" ____|_________\\____                 "<<endl;
gotoxy(px,py+3);
cout<<"|                     \\                    "<<endl;
gotoxy(px,py+4);
cout<<"|                       )                   "<<endl;
gotoxy(px,py+5);
cout<<"|_______________________|                 "<<endl;
gotoxy(px,py+6);
cout<<"    #####        #####     "<<endl;
gotoxy(px,py+7);
cout<<"     ***          ***               "<<endl;
}
void eraseplayer(int px,int py){
gotoxy(px,py);
cout<<"                                      "<<endl;
gotoxy(px,py+1);
cout<<"     |                                 "<<endl;
gotoxy(px,py+2);
cout<<"                                        "<<endl;
gotoxy(px,py+3);
cout<<"                                      "<<endl;
gotoxy(px,py+4);
cout<<"                                    "<<endl;
gotoxy(px,py+5);
cout<<"                                     "<<endl;
gotoxy(px,py+6);
cout<<"                                   "<<endl;
gotoxy(px,py+7);
cout<<"                                   "<<endl;
}
void moveplayerleft(){
    if(getCharAtxy(px-1,py) == ' ')
    eraseplayer(px,py);
    px=px-1;
    printplayer(px,py);
    
  
}
void moveplayerright(){
      if(getCharAtxy(px+27,py) == ' ')
    eraseplayer(px,py);
    px=px+1;
    printplayer(px,py);
}
void moveplayerdown(){
      if(getCharAtxy(py-1,py) == ' ')
    eraseplayer(px,py);
    py=py+1;
    printplayer(px,py);
}
void moveplayerup(){
      if(getCharAtxy(py+8,py) == ' ')
    eraseplayer(px,py);
    py=py-1;
    printplayer(px,py);
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
