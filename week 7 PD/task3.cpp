#include<iostream>
using namespace std;
void amplify(int num);
main(){
int num;
cout<<"Enter the number to Amplify: ";
cin>>num;
amplify(num);


}
void amplify(int num){

    for (int i = 1; i <=num; i++)
    {
        int j=i;
       if(j%4==0){
        j=j*10;
       }
       cout<<j;
        if(i<num){
        cout<<", ";}
    
    }
    
}
