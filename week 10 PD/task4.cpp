#include<iostream>
using namespace std;
void volume(int elements[],int num);

main(){
    int num;
    cout<<"Enter the number of boxes: ";
    cin>>num;
    int size=num*3;
    int dimension[size];
    cout<<"Enter the dimensions of the boxes (length, width, height): "<<endl;
    for (int  i = 0; i < size; i++)
    {
        cin>>dimension[i];    
    }
    volume(dimension,num);

    
}
void volume(int elements[],int num){
    int sum=0;
    int j=0;
    for (int i = 0; j < num ; i=i+3)
    {
        int product=elements[i]*elements[i+1]*elements[i+2];
        sum=sum+product;
        j++;
        //cout<<j;

    }
    cout<<"Total volume of all boxes: "<<sum;
    
}
