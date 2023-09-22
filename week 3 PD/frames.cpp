#include<iostream>
using namespace std;
main(){
	int min;
	int frame;
	cout<<"Number of Minutes: ";
	cin>>min;
	cout<<"Frames per Second: ";
	cin>>frame;
	int total;
	total=min*60*frame;
	cout<<"Total Number of Frames: "<<total;

}