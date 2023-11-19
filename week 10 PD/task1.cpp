#include<iostream>
using namespace std;
int progress(int elements[],int size);

main(){
    int num;
    cout<<"Enter the number of Saturdays: ";
    cin>>num;
    int saturdays[num];
    for (int i = 0; i < num; i++)
    {
        cout<<"Enter miles run for Saturday "<<i+1<<": ";
        cin>>saturdays[i];

    }
    int size=sizeof(saturdays)/sizeof(saturdays[0]);
    int days=progress(saturdays,size);
    cout<<"Total progress days: "<<days;
    
}
int progress(int elements[],int size){
    int count=0;
    for (int i = 1; i < size; i++)
    {
        if (elements[i] > elements[i-1])
        {
            count++;
        }
        
    }
    return count;
    
}