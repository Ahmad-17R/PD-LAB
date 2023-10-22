#include<iostream>
using namespace std;
int calculate(int);
int untreat=0;

main(){
    int days;
    cout<<"Enter Number of days you visited Hospital: ";
    cin>>days;
  
    cout<<"Treated patients: "<<calculate(days)<<endl;
      cout<<"UnTreated Patients: "<<untreat;
}
int calculate(int days){
    int j=0;
    int treat=0;
    int k=7;
    for (int  i = 1; i <=days; i++)
    {   
       cout<<"Number of patients who visited hospital on Day "<<i<<": ";
       cin>>j;
       if(i==3 && untreat>treat){
        k++;

       }
       if(j<=k){
        treat=treat+j;
       }
       if(j>k){
        treat=treat+k;
        untreat=untreat+(j-k);
       }
    }

    untreat;
    return treat;
}