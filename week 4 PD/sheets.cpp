#include<iostream>
using namespace std;
void tpcheck(int,int);
main(){
	int people,roll;
	cout<<"Number of people in the household: ";
	cin>>people;
	cout<<"Number of rolls of TP: ";
	cin>>roll;
	tpcheck(people,roll);
}
void tpcheck(int people,int roll){

	
	int totalsheets=roll*500;
	int daysheets=people*57;
	int days=totalsheets/daysheets;
	if(days>=14){
	cout<<"Your TP will last "<<days<<" days, no need to panic!";
	
	}
	if(days<14){
	cout<<"Your TP will only last "<<days<<" days, buy more!";}


}