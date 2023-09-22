#include<iostream>
using namespace std;
main(){
	int area;
	cout<<"Number of square meters you can paint: ";
	cin>>area;
	int width;
	cout<<"Width of the single wall (in meters): ";
	cin>>width;
	int height;
	cout<<"Height of the single wall (in meters): ";
	cin>>height;
	int product;
	product=width*height;
	int result;
	result=area/product;
	cout<<"Number of walls you can paint: "<<result;

}