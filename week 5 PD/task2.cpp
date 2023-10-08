#include<iostream>
using namespace std;
  string unit;
int vol();

main(){
float result=vol();
     cout<<"Enter the desired output unit (millimeters,centimeters,meters,kilometers): ";
    cin>>unit;
        if(unit=="millimeters"){
            cout<<"Volume of the pyramid is: "<<result*1000<<" cubic meters";

    }
        if(unit=="meters"){
         cout<<"Volume of the pyramid is: "<<result<<" cubic meters";

    }
    if(unit=="centimeters"){
        cout<<"Volume of the pyramid is: "<<result*100<<" cubic centimeters";

    }
        if(unit=="kilometers"){
            cout<<"Volume of the pyramid is: "<<result/1000<<" cubic kilometers";

    }
}
int vol(){
    float length,width,height;
    cout<<"Enter the length of the pyramid (in meters): ";
    cin>>length;
    cout<<"Enter the width of the pyramid (in meters): ";
    cin>>width;
    cout<<"Enter the height of the pyramid (in meters): ";
    cin>>height;

  
    float volume=(length*width*height)/3;
    return volume;}