#include<iostream>
using namespace std;
void longesttime(int,int);
main(){
	int h,m;
	cout<<"Enter the number of hours: ";
	cin>>h;
	cout<<"Enter the number of minutes: ";
	cin>>m;
	longesttime(h,m);



}
void longesttime(int h,int m){
	int min=h*60;
	if(min>m){cout<<h;}
	if(min<m){cout<<m;}
}