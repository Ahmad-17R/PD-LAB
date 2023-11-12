#include<iostream>
using namespace std;

main(){
    string check;
    cout<<"Enter a String: ";
    cin>>check;
    int size=check.length();
    if (size % 2==0)
    {
        cout<<true;
    }
    else{
        cout<<false;
    }
   
}


