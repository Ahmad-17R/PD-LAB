#include<iostream>
using namespace std;
bool prime(int);
main(){
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    cout<<prime(num);
    
    
    }
bool prime(int num){
    if(num==2 || num==3){
        return true;
    }
   else if(num!=2 && num!=3 ){
        if(num%2==0 || num%3==0){
            return false;
        }
        else{
            return true;
        }
    }}
