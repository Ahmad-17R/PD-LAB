#include<iostream>
using namespace std;
int time(string elements[],int size);

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
    cout<<"Time to color: "<<time(elements,size)<<" seconds";

    
}
int time(string elements[],int size){
    int count=0;
    for (int i = 0; i < size; i++)
    {
        if (i<=size-2)
        {
            if (elements[i]!=elements[i+1])
            {
                count++;
            }
           
            
        }
        
    }
    int colortime=(size)*2;
    int switchtime=count*1;
    int totaltime=colortime+switchtime;
    return totaltime; 
    
}
