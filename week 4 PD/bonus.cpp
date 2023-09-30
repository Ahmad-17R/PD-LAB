#include<iostream>
using namespace std;
void dice(int,int);
main(){
	int a,b;
	cout<<"Enter your position: ";
	cin>>a;
	cout<<"Enter your friend's position: ";
	cin>>b;
	dice(a,b);

}
void dice(int a,int b){
	if(b-a>5){cout<<"false";}
	if(b-a<=5){cout<<"true";} 
}