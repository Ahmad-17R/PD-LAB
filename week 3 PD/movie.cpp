#include<iostream>
using namespace std;
main(){
	string name;
	float childpr;
	float adultpr;
	cout<<"Enter the movie name: ";
	cin>>name;
	cout<<"Enter the adult ticket price: $";
	cin>>adultpr;
	cout<<"Enter the child ticket price: $";
	cin>>childpr;
	float adnum;
	float chnum;
	cout<<"Enter the number of adult tickets sold: ";
	cin>>adnum;
	cout<<"Enter the number of child tickets sold: ";
	cin>>chnum;
	float charity;
	cout<<"Enter the percentage of the amount to be donated to charity: ";
	cin>>charity;
	float total_childpr;
	float total_adultpr;
	total_childpr=childpr*chnum;
	total_adultpr=adultpr*adnum;
	float totalpr;
	totalpr=total_childpr+total_adultpr;
	float donate=(charity/100)*totalpr;
	float resultpr;
	resultpr=totalpr-donate;
	cout<<endl;
	cout<<"Movie: "<<name<<endl;
	cout<<"Total amount generated from ticket sales: $"<<totalpr<<endl;
	cout<<"Donation to charity ("<<charity<<"%): $"<<donate<<endl;
	cout<<"Remaining amount after donation: $"<<resultpr;
	
	

}