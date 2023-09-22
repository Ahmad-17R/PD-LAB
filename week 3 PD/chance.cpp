#include<iostream>
using namespace std;
main(){
	float imposter;
	float player;
	cout<<"Enter Imposter Count: ";	
	cin>>imposter;
	cout<<"Enter Player Count: ";
	cin>>player;
	float chance;
	chance=100*(imposter/player);
	cout<<"Chance of being an imposter: "<<chance<<"%";


}