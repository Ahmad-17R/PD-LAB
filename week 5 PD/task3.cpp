#include<iostream>
using namespace std;


float taxcalc(char type,float price ){
 float tax;
    if(type=='M'){
         tax=0.06;
    }
   if(type=='E'){
          tax=0.08;
    }
       if(type=='S'){
          tax=0.1;
    }
       if(type=='V'){
          tax=0.12;

    }
       if(type=='v'){
          tax=0.15;
    }
    float taxprice=price*tax;
    float newprice=taxprice+price;
    return newprice;



}
main(){
    char type;
    float price;
      cout<<"Enter the vehicle type code (M, E, S, V, T): ";
    cin>>type;
    cout<<"Enter the price of the vehicle: $S";
    cin>>price;
    float result=taxcalc(type,price);
    cout<<"The final price of the vehicle of the type "<<type<<" after adding tax is $"<<result<<".";   


}

