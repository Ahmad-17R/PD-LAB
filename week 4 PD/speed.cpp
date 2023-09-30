#include<iostream>
using namespace std;
void speedcheck(int);
main(){
	int speed;
	cout<<"Speed: ";
	cin>>speed;
	speedcheck(speed);
}
void speedcheck(int speed){
	if(speed<=100){cout<<"Perfect! You're going good.";}
	if(speed>100){cout<<"Halt... YOU WILL BE CHALLENGED!!!";}

}