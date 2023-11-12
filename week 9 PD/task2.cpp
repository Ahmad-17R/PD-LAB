#include<iostream>
using namespace std;
void check(string elements[],int size);

 main(){
    int num;
    cout<<"Enter the size of Array: ";
    cin>>num;
    string elements[num];
    for (int i = 0; i < num; i++)
    {
        cout<<"Enter Element "<<i+1<<": ";
        cin>>elements[i];
    }
    int size= sizeof(elements)/sizeof(elements[0]);
    check(elements,size);
    
 }
 void check(string elements[],int size){
    int count=0;
    for ( int i = 0; i < size; i++)
    {   string str=elements[i];
           for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i]=='7')
        {
            
            count++;
        }    
    }

    }
    if (count==0)
    {
        cout<<"there is no 7 in the array";
    }
    else{
        cout<<"Boom!";
    }
    
 }

 