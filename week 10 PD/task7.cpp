#include<iostream>
using namespace std;
bool arrange(int elements[],int size);

main(){
    int num;
    cout<<"Enter the length of the array: ";
    cin>>num;
    cout<<"Enter the elements of the array: "<<endl;
    int array[num];
    
    for (int i = 0; i < num; i++)
    {
        cin>>array[i];
    }
    int size =sizeof(array)/sizeof(array[0]);
    bool result=arrange(array,size);
    cout<<"Can be arranged: "<<result;
}
bool arrange(int elements[],int size){
    int smaller=elements[0],greater=elements[0];
    for (int i = 1; i < size; i++)
    {
        if (elements[i]<smaller)
        {
            smaller=elements[i];
        }
        if (elements[i]>greater)
        {
            greater=elements[i];
        }  
    }
    int count1=0;
    for (int i = 0; i < size; i++)
    {
        int second=elements[i];
        for (int j= 0; j < size ; j++)
        {
            if (second==elements[j])
            {
                count1++;
            }
            
        }
        
    }
    
    
    int j=greater-smaller;
    bool alpha=false;
    int num=1;
    int count=1;
    while (num!=j)
    {
        for (int i = 0; i < size; i++)
        {
            if (elements[i]==smaller+num)
            {
              count++;
              continue; 
            }
            
        }
        num++;
        
    }
  
    
    if (count==j && count1==count+1)
    {
        alpha=true;
    }
    
    return alpha;
    
    
}