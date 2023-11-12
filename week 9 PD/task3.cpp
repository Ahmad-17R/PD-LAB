#include<iostream>
using namespace std;
bool function(string elements[],int size);

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
   int size=sizeof(elements)/sizeof(elements[0]);
   cout<<function(elements,size);
    
}
bool function(string elements[],int size){
    int count=0;
    for (int i = 1; i < size; i++)
    {
        if (elements[0]==elements[i])
        {
           continue; 
        }
        else{
            count++;
        }
        
    }
    if (count==0)
    {
        return true;
    }
    else{
        return false;
    }
    
}
 