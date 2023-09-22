#include<iostream>
using namespace std;
main(){
	string name;
	float weight;
	cout<<"Enter the Name of the Person: ";
	cin>>name;
	cout<<"Enter the target weight loss in kilograms: ";
	cin>>weight;	
	float loss;	
	loss=weight*15;
	cout<<name<<" will need "<<loss<<" days to lose "<<weight<<" kg of weight by following the doctor's suggestions";

}