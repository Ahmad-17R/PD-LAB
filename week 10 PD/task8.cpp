#include<iostream>
using namespace std;
int rotations(string elements[],int size);

main(){
    int num;
    cout<<"Enter the length of the array: ";
    cin>>num;
    cout<<"Enter the elements of the array (\"left\" or \"right\"):"<<endl;
    string directions[num];
    for (int i = 0; i < num; i++)
    {
      cin>>directions[i];
       

    }
    int result=rotations(directions,num);
    cout<<"Number of full rotation: "<<result;



}
int rotations(string elements[],int size){
    int sum=0;
    for (int i = 0; i < size; i++)
    {
       if (elements[i] =="right")
       {
        sum=sum+90;
       }
       else if (elements[i] =="left")
       {
        sum=sum-90;
       }
       
       
    }
     int rotate=sum/360;
      if (rotate < 0)
    {
        rotate= rotate* -1;
    }
        
    
   
    //rotate=abs(rotate);
    return rotate;
}