#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
void printmaze();
void moveplayer(int , int );
void horp(int , int );


main(){system("cls");
	printmaze();
  	horp(13,1);
}
void horp(int x, int y){
	
	while(true){
	moveplayer(x,y);
	y=y+1;
	if(y==9){
	y=1;}}}
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






