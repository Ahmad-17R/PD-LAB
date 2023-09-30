#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
void printmaze();
void moveplayer(int , int );
void horp(int , int );


main(){system("cls");
	printmaze();
  	horp(1,4);
}
void horp(int x, int y){
	
	while(true){
	moveplayer(x,y);
	x=x+1;
	if(x==26){
	x=1;}}}
void moveplayer(int x,int y){
	gotoxy(x,y);
	cout<<"p";
	Sleep(300);
	gotoxy(x,y);
	cout<<" ";
}

void printmaze(){
cout<<"############################"<<endl;
cout<<"#		          #"<<endl;
cout<<"#                          #"<<endl;
cout<<"#                          #"<<endl;
cout<<"#                          #"<<endl;
cout<<"#                          #"<<endl;
cout<<"#                          #"<<endl;
cout<<"#                          #"<<endl;
cout<<"#                          #"<<endl;
cout<<"############################"<<endl;
}


void gotoxy(int x,int y){
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);


}






