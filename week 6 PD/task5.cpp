#include<iostream>
using namespace std;

float amount(string,string,int);

main(){
    string name,day;
    int quantity;
    cout<<"Enter the fruit name: ";
    cin>>name;
    cout<<"Enter the day of the week (e.g., Monday, Sunday): ";
    cin>>day;
    cout<<"Enter the quantity: ";
    cin>>quantity;
if(day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" || day=="Friday" || day=="Saturday" || day=="Sunday")
  {  cout<<amount(name,day,quantity);}
if(day!="Monday" && day!="Tuesday" && day!="Wednesday" && day!="Thursday" && day!="Friday" && day!="Saturday" && day!="Sunday"){
    cout<<"error";
}
}
float amount(string name,string day,int quantity){
    float total;


        if(day=="Saturday" || day=="Sunday"){
                    float banana=2.70;
        float apple=1.25;
        float orange=0.90;
        float grapefruit=1.60;
        float kiwi=3.00;
        float pineapple=5.60;
        float grapes=4.20;
            if(name=="banana"){
                total=banana*quantity;
            }
                        if(name=="apple"){
                total=apple*quantity;
            }
                      else  if(name=="orange"){
                total=orange*quantity;
            }
                      else  if(name=="grapefruit"){
                total=grapefruit*quantity;
            }
                       else             if(name=="kiwi"){
                total=kiwi*quantity;
            }
                       else             if(name=="pineapple"){
                total=pineapple*quantity;
            }
                        else            if(name=="grapes"){
                total=orange*quantity;
            }
return total;
    } 
          else  if(day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" || day=="Friday"){
                    float banana=2.50;
        float apple=1.20;
        float orange=0.85;
        float grapefruit=1.45;
        float kiwi=2.70;
        float pineapple=5.50;
        float grapes=3.85;
            if(name=="banana"){
                total=banana*quantity;
            }
                       else if(name=="apple"){
                total=apple*quantity;
            }
                      else  if(name=="orange"){
                total=orange*quantity;
            }
                      else  if(name=="grapefruit"){
                total=grapefruit*quantity;
            }
                      else              if(name=="kiwi"){
                total=kiwi*quantity;
            }
                      else              if(name=="pineapple"){
                total=pineapple*quantity;
            }
                      else              if(name=="grapes"){
                total=orange*quantity;
            }
return total;
    } 

}