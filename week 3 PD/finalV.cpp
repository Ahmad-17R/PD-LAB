#include<iostream>
using namespace std;
main(){
	float vi;
	float acceleration;
	float time;
	cout<<"Enter Initial Velocity (m/s): ";
	cin>>vi;
	cout<<"Enter Acceleration (m/s^2): ";
	cin>>acceleration;
	cout<<"Enter Time (s): ";
	cin>>time;
	float vf;
	vf=vi+(acceleration*time);
	cout<<"Final Velocity (m/s): "<<vf;


}