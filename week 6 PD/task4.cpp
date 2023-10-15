#include<iostream>
#include<limits>
using namespace std;
float charges(char,char,int);


main(){
    char code;
    char time;
    int mins;
    cout<<"Enter the service code (R/r for regular, P/p for premium): ";
    cin>>code;
     if(code!='P' || code!='p' || code!='R' || code!='r'){
        
     }
    if(code=='P' || code=='p' || code=='R' || code=='r'){
    if(code=='P' || code=='p'){
    cout<<"Enter time of the call (D/d for day, N/n for night): ";
    cin>>time;}
    cout<<"Enter the number of minutes used: ";
    cin>>mins;
    string status;
    if(code=='P' || code=='p'){
        status="Preminum";
                cout<<"Service Type: "<<status<<endl;
    }
    else  if(code=='R' || code=='r'){
        status="Regular";
        cout<<"Service Type: "<<status<<endl;
    }
    cout<<"Total Minutes Used: "<<mins<<" minutes"<<endl;
    cout<<"Amount Due: $"<<charges(code,time,mins);

    }}
float charges(char code,char time,int mins){
    float price;
if((code=='P' || code=='p') && (time=='d' || time=='D')){
    price=25.00;
    if(mins>75){
        
        mins=mins-75;
        float pricemins=mins*0.10;
        price=pricemins+price;
    }
}
else if((code=='P' || code=='p') && (time=='n' || time=='N')){
    price=25.00;
    if(mins>100){
        
        mins=mins-100;
        float pricemins=mins*0.05;
        price=pricemins+price;
    }
}
else if(code=='R' || code=='r'){
    price=10.00;
    if(mins>50){
        
        mins=mins-50;
        float pricemins=mins*0.2;
        price=pricemins+price;
    }
}
return price;}    
