#include<iostream>
using namespace std;
main(){
	float pound;
	float cost;
	float area;
	cout<<"Enter the size of the fertilizer bag in pounds: ";
	cin>>pound;
	cout<<"Enter the cost of the bag: $";
	cin>>cost;
	cout<<"Enter the area in square feet that can be covered by the bag: ";
	cin>>area;
	float costpound;
	float costsquare;
	costpound=cost/pound;
	costsquare=cost/area;
	cout<<"Cost of fertilizer per pound: $"<<costpound<<endl;
	cout<<"Cost of fertilizing per square foot: $"<<costsquare;




}