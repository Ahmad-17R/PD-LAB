#include<iostream>
using namespace std;
void trans(int elements[],int size,int transf);

main(){
    int num;
    
    
    cout<<"Enter the size of Array: ";
    cin>>num;
    int elements[num];
    for (int i = 0; i < num; i++)
    {
        cout<<"Enter Element "<<i+1<<": ";
        cin>>elements[i];
    }
    int transf;
    cout<<"Enter number of times even-odd transformation need to be done: ";
    cin>>transf;
    int size = sizeof(elements)/sizeof(elements[0]);
    trans(elements,size,transf);
    
}
void trans(int elements[],int size,int transf){
    cout<<"[";
    for (int i = 0; i < size; i++)
    {
        if (elements[i] % 2==0 || elements[i]==0)
        {   

            elements[i]=elements[i]-(2*transf);
            if (i!=(size-1))
            {
              cout<<elements[i]<<", " ; 
            }
            else{
                cout<<elements[i]<<"]";
            }
           
        }
        else{
            
            elements[i]=elements[i]+(2*transf);  
            if (i!=(size-1))
            {
             cout<<elements[i]<<", ";     
            }
            else{
                cout<<elements[i]<<"]";
            }
            
             
        }
        
    }
    
}