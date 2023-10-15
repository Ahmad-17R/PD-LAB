#include<iostream>
#include<string>
using namespace std;
string hotel(string,int);
main(){
    string month;
    int stays;
    cout<<"Enter the month (May, June, July, August, September, October): ";
    cin>>month;
    cout<<"Enter the number of stays: ";
    cin>>stays;
    string ap=hotel(month,stays);
    cout<<ap<<endl;
   
}
string hotel(string month,int stays){
  int quantity=stays;
    float expensestudio,expenseapartment;
    if(month=="May" || month=="October"){
        float pricestudio=50;
        float priceapartment=65; 
        expenseapartment=priceapartment;
        expensestudio=pricestudio;
        
        if(quantity>7 && quantity<=14){
          expenseapartment=priceapartment*0.95;
          expensestudio=pricestudio*0.95;

        }
       else if(quantity>=15){
                expenseapartment=priceapartment*0.90;
          expensestudio=pricestudio*0.70;
        }
 
    }
    else if(month=="June" || month=="September"){
        float pricestudio=75.20;
        float priceapartment=68.70; 
             expenseapartment=priceapartment;
        expensestudio=pricestudio;
   
        if(stays>14){
          expenseapartment=expenseapartment*0.80;
          expensestudio=expensestudio*0.80;
        }
    }
            else if(month=="January" || month=="February" || month=="March" || month=="April" || month=="July" || month=="August" || month=="December" || month=="November" ){
        float pricestudio=76.0;
        float priceapartment=77.0; 
             expenseapartment=priceapartment;
        expensestudio=pricestudio;
  
        if(stays>14){
          expenseapartment=expenseapartment*0.90;
      
        }

    }         expenseapartment=expenseapartment*stays;
         expensestudio=expensestudio*stays;
         string ap="Apartment: "+ to_string(expenseapartment) + "$.\nStudio: "+ to_string(expensestudio) + "$.";

      
        return ap;
}