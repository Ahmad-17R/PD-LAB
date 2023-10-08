#include<iostream>
using namespace std;
float time(int hrs,int days,int workers){
   int  hours=days*10*workers;
    hours=hours*0.9;
    return hours;





}
main(){
    int hrs,days,workers;
    cout<<"Enter the needed hours: ";
    cin>>hrs;
    cout<<"Enter the days that the firm has: ";
    cin>>days;
    cout<<"Enter the number of all workers: ";
    cin>>workers;
    int result=time(hrs,days,workers);
       if(result<hrs){
        cout<<"Not enough time! "<<hrs-result<<" hours needed.";
        
    }
    if(result>hrs){
        cout<<"Yes!"<<result-hrs<<" hours left.";
    }


}