#include<iostream>
using namespace std;
main(){
	float vegpr;
	float fruitpr;
	cout<<"Enter vegetable price per kilogram (in coins): ";
	cin>>vegpr;
	cout<<"Enter fruit price per kilogram (in coins): ";
	cin>>fruitpr;
	float fruitkg;
	float vegkg;
	cout<<"Enter total kilograms of vegetables: ";
	cin>>vegkg;
	cout<<"Enter total kilograms of fruits: ";
	cin>>fruitkg;
	float earn;
	earn=(vegpr*vegkg)+(fruitpr*fruitkg);
	float earn_rs;
	earn_rs=earn/1.94;
	cout<<"Total earnings in Rupees (Rps): "<<earn_rs;

	



}