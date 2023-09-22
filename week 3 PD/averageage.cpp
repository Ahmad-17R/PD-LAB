#include<iostream>
using namespace std;
main(){
	int age;
	int moves;
	cout<<"Enter the person's age: ";
	cin>>age;
	cout<<"Enter the number of times they've moved: ";
	cin>>moves;
	int divisor;
	divisor=moves+1;
	int average;
	average=age/divisor;
	cout<<"Average number of years lived in the same house: "<<average;
	


}