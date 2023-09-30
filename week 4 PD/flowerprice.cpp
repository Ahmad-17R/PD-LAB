#include<iostream>
using namespace std;
void flowerprice(int,int,int);
main(){
	int rednum,whitenum,tulipnum;
	cout<<"Red Rose: ";
	cin>>rednum;
	cout<<"White Rose: ";
	cin>>whitenum;
	cout<<"Tulips: ";
	cin>>tulipnum;
	

	flowerprice(rednum,whitenum,tulipnum);
}
void flowerprice(int rednum,int whitenum,int tulipnum){
	float redpr,whitepr,tulip;
	redpr=2;
	whitepr=4.10;
	tulip=2.50;
	float redamount,whiteamount,tulipamount;
	redamount=rednum*redpr;
	whiteamount=whitenum*whitepr;
	tulipamount=tulipnum*tulip;
	float price=redamount+whiteamount+tulipamount;
	if(price>200){cout<<"Original Price: $"<<price<<endl;
	cout<<"Price after Discount: $"<<price*0.8;}
	if(price<200){cout<<"Original Price: $"<<price<<endl;
	cout<<"No discount applied.";}
	



}