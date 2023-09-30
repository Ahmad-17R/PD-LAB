#include<iostream>
using namespace std;
void discount(string, float);
main(){
	string con;
	float price;
	cout<<"Enter the country's name: ";	
	cin>>con;	
	cout<<"Enter the ticket price in dollars: $";
	cin>>price;
	discount(con,price);
	
	

}
void discount(string con,float price){
	if(con=="Pakistan"){
	price=price*0.95;
}
	if(con=="Ireland"){
	price=price*0.90;
}
	if(con=="India"){
	price=price*0.80;
}
	if(con=="England"){
	price=price*0.70;
}
	if(con=="Canada"){
	price=price*0.55;
}
cout<<"Final ticket price after discount: $"<<price;
}
	