#include<iostream>
using namespace std;
void status(int);
main(){
	int holi;
	cout<<"Holidays: ";
	cin>>holi;
	status(holi);


}
void status(int holi){
	int work=365-holi;
	work=work*63;
	holi=holi*127;
	int min=work+holi;
	if(min>30000){
	int totalmin=min-30000;
	int hours=totalmin/60;
	int finalmin;
	finalmin=totalmin%60;	
	cout<<"Tom will run away"<<endl;
	cout<<hours<<" hours and "<<finalmin<<" minutes for play";

}
	if(min<30000){
	int total2min=30000-min;
	int mhours=total2min/60;
	int final2min;
	final2min=total2min%60;	
	cout<<"Tom sleeps well"<<endl;
	cout<<mhours<<" hours and "<<final2min<<" minutes less for play";
}	

}