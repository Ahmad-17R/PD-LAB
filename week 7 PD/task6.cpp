#include<iostream>
using namespace std;
bool prime(int );
int primorial(int);
main(){
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    cout<<primorial(num);

}
int primorial(int num){
    int product=1;
    int count=0;
    for (int i = 1;  count<=num; i++){
       int j=prime(i);
        if(j==1){
             product=product*i;
             count++;
        }
    }
    return product;

    
}
bool prime(int num){
    if(num==2 || num==3){
        return true;
    }
   else if(num!=2 && num!=3 ){
        if(num%2==0 || num%3==0){
            return false;
        }
        else{
            return true;
        }
    }}