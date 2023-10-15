#include<iostream>
using namespace std;
string activity(string,string);

main(){
    string temp,hum;
    cout<<"Enter temperature (warm or cold): ";
    cin>>temp;
    cout<<"Enter humidity (dry or humid): ";
    cin>>hum;
    string result=activity(temp,hum);
    cout<<"Recommended activity: "<< result;
}
string activity(string temp,string hum){
    string activity;
    if(temp=="warm" && hum=="dry"){
        activity="Play tennis";
    }
        else if(temp=="warm" && hum=="humid"){
        activity="Swim";
    }
        else if(temp=="cold" && hum=="dry"){
         activity="Play basketball";
    }
        else if(temp=="cold" && hum=="humid"){
         activity="Watch TV";
    }
    return activity;
}