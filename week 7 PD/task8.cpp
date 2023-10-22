#include<iostream>
#include<iomanip>
using namespace std ;

main(){

float count, minibus = 0.0 ,truck = 0.0,  train = 0.0 , number  ;
cout<<"Enter the count of cargo for transportation: " ;
cin>> count ;
    float tonTrain = 0.0 ,tonbus = 0.0, tonTruck = 0.0,sum = 0.0 ;

for(float x = 1 ; x <=  count ; x = x + 1)
{
    cout<<"Enter the tonnage of cargo " << x << ": " ;
cin>> number ; 

if(number <= 3 ){ 
tonbus =tonbus + number ;

}

else if(number > 3 && number <= 11 ){
tonTruck =tonTruck + number ;
}
else if(number > 11  ){
tonTrain = tonTrain + number ;
}
}
sum = tonTrain + tonTruck + tonbus ;
float average = (tonbus * 200 + tonTruck * 175 + tonTrain * 120) / sum ;

float minibusCost = (tonbus/sum)*100 ;
float truckCost = (tonTruck/sum)*100 ;
float trainCost = (tonTrain/sum)*100 ;

cout <<fixed << setprecision(2)<< average << endl ;
cout<< fixed << setprecision(2)<< minibusCost <<"%" <<endl ;
cout<<fixed << setprecision(2) << truckCost <<"%" <<endl ;
cout<<fixed << setprecision(2) <<  trainCost <<"%" <<endl ;
}

