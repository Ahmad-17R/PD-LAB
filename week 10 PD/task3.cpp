#include<iostream>
using namespace std;
void check(int elements[],int cyclenum,int size);

main(){
    int num;
    int cyclenum;
    cout<<"Enter the length of the array: ";
    cin>>num;
    int cycle[num];
    cout<<"Enter the elements of the array: "<<endl;
    for (int i = 0; i < num; i++)
    {
       cin>>cycle[i];
    }
    cout<<"Enter the length of the cycle: ";
    cin>>cyclenum;
    int size=sizeof(cycle)/sizeof(cycle[0]);
    check(cycle,cyclenum,size);
    
}
void check(int elements[],int cyclenum,int size){
    if (cyclenum>=size)
    {
        cout<<"Output: "<<true;
    }
    else 
    {
        int small[cyclenum];
        for (int i = 0; i < cyclenum; i++)
        {
            small[i]=elements[i];
        }
        //cout<<small[0]<<endl;
        //cout<<small[1]<<endl;
        //cout<<small[2]<<endl;
        int size2=sizeof(small)/sizeof(small[0]);
        //cout<<size2;
        int j=0;
        bool alpha=true;
        for (int i = size2; i<size ; i++)
        {
            if (j>=size2)
            {
                j=0;
            }
            
           if (elements[i]==small[j])
           {
                j++;  
           }
           else 
           {
            alpha=false;
            break;
           }
           
            
        }
        cout<<"Output: "<<alpha;
        
        
    }
    
    

}
