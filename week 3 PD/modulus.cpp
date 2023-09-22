#include<iostream>
using namespace std;
main(){
	int num;	
	cout<<"Enter a 4-digit number: ";
	cin>>num;
	int lastnum;
	lastnum=num%10;
	int threenum;
	threenum=num/10;
	int thirdnum;
	thirdnum=threenum%10;
	int twonum;
	twonum=threenum/10;
	int secnum;
	secnum=twonum%10;
	int firstnum;
	firstnum=twonum/10;
	int final_num;
	final_num=lastnum+thirdnum+secnum+firstnum;
	cout<<"Sum of the individual digits: "<<final_num;





}