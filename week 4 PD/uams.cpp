#include<iostream>
using namespace std;
void menu();
void compare(float,float);
void aggregate(float,float, float,string);
void aggregate2(float,float, float,string);
void nameaggr()
main(){
	menu();
	aggregate();
	aggregate2();
	compare(aggregate,aggregate2);	


}

void menu(){
	cout<<"---------------------------<<<<<<<<<<<<<University of Engineering and technology>>>>>>>>>>>>>----------------------"<<endl;
	cout<<"main menu"<<endl;
}
void aggregate(float matric,float inter, float ecat,string name){
	
	cout<<"Enter the student's name: ";	
	cin>>name;
	cout<<"Enter matriculation marks (out of 1100): ";	
	cin>>matric;
	cout<<"Enter intermediate marks (out of 550): ";
	cin>>inter;	
	cout<<"Enter Ecat marks (out of 400): ";
	cin>>ecat;
	float aggregate;
	float Matric;
	float Inter;
	float Ecat;
	Matric=0.1*(matric/1100);
	Inter=0.4*(inter/550);
	Ecat=0.5*(ecat/400);
	aggregate=(Matric+Inter+Ecat)*100;
	cout<<"Aggregate score for "<<name<<" in UET is: "<<aggregate<<"%";}
void aggregate2(float matric,float inter, float ecat,string name2){
	
	cout<<"Enter the student's name: ";	
	cin>>name2;
	cout<<"Enter matriculation marks (out of 1100): ";	
	cin>>matric;
	cout<<"Enter intermediate marks (out of 550): ";
	cin>>inter;	
	cout<<"Enter Ecat marks (out of 400): ";
	cin>>ecat;
	float aggregate2;
	float Matric;
	float Inter;
	float Ecat;
	Matric=0.1*(matric/1100);
	Inter=0.4*(inter/550);
	Ecat=0.5*(ecat/400);
	aggregate2=(Matric+Inter+Ecat)*100;
	cout<<"Aggregate score for "<<name2<<" in UET is: "<<aggregate2<<"%";}
void compare(float aggregate,string name,float aggregate2, string name2){
	if(aggregate>aggregate2){
	cout<<"1."<<name<<"   "<<aggregate<<endl;
	cout<<"1."<<name2<<"   "<<aggregate2<<endl;
}
	if(aggregate<aggregate2){
	cout<<"1."<<name2<<"   "<<aggregate2<<endl;
	cout<<"1."<<name<<"   "<<aggregate<<endl;
}

}