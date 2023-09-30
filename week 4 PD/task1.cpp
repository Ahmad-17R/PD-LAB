#include<iostream>
using namespace std;
void isequal(int,int);
main(){
	int a,b;
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the second number: ";
	cin>>b;
	isequal(a,b);
	


}
void isequal(int a,int b){
	if(a==b){
	cout<<"true";}
	if(a!=b){
	cout<<"false";}




}