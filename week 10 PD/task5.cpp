#include<iostream>
using namespace std;
void array(int elements[],int num);


main(){
    int num=10;
    int package[10];
    cout<<"Enter the weights of the 10 packages:"<<endl;
    for (int i = 0; i < num; i++)
    {
        cin>>package[i];
    }
    array(package,num);
    
}
void array(int elements[],int num){
    
    int temp=0;
    
    for (int  j = 0; j < num ; j++)
    {
      for (int i = 0; i < 9; i++)
      {
        if (elements[i+1]<elements[i])
        {
            temp=elements[i];
            elements[i]=elements[i+1];
            elements[i+1]=temp;
        }
        
        
        
        
      }
          
    }

cout<<"Sorted array in ascending order: [";
for ( int i = 0; i < 10; i++)
{
    cout<<elements[i];
    if (i<9)
    {
        cout<<", ";
    }
    
}
cout<<"]";}
    
