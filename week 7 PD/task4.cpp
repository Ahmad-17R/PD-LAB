#include<iostream>
using namespace std;
int sum(int);
main(){
int num;
cout<<"Enter number of Triangle: ";
cin>>num;
int result=sum(num);
cout<<"Dots in the Triangle: "<<result;

}
int sum(int num){
    int sum=0;
    for (int i = 1; i <= num; i++)
    {
        
        sum=sum+i;
    }
    return sum;
}