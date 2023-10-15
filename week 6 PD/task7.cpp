#include<iostream>
using namespace std;
void time(int, int, int, int);
main(){
    int arrivalhour,arrivalmin,examhour,exammin;
    cout<<"Enter Exam Starting Time (hour): ";
    cin>>examhour;
    cout<<"Enter Exam Starting Time (minutes): ";
    cin>>exammin;
    cout<<"Enter Student hour of arrival: ";
    cin>>arrivalhour;
    cout<<"Enter Student minutes of arrival: ";
    cin>>arrivalmin;
    time(arrivalhour, arrivalmin,examhour,exammin);
    }
    void time(int arrivalhour, int arrivalmin, int examhour, int exammin){
        int reachtime=(arrivalhour*60)+arrivalmin; 
        int examtime=(examhour*60)+exammin;
        if(reachtime<examtime && examhour<24 && arrivalhour<24){
            if((examtime-reachtime)<=59 &&  (examtime-reachtime)>30){
                cout<<"Early"<<endl;
                cout<<examtime-reachtime<<" minutes before the start";
            }
            else if((examtime-reachtime)<=59 &&  (examtime-reachtime)<=30){
                cout<<"On time"<<endl;
                cout<<examtime-reachtime<<" minutes before the start";
            }
            else if((examtime-reachtime)>59){
                int time=examtime-reachtime;
            int hours=time/60;
            int min=time%60;
            cout<<"Early"<<endl;
          //  if(min==0){
            //cout<<hours<<":"<<min<<" hours berfore the start";
            //}
             if(min>=1 && min<=9){
        cout<<hours<<":0"<<min<<" hours berfore the start";
            }
           else if(min>=10 ||min==0){
            cout<<hours<<":"<<min<<" hours berfore the start";
            }
            }
            }
            
        
        else if(reachtime>examtime && examhour<24 && arrivalhour<24){
            if((reachtime-examtime)<=59){
                cout<<"Late"<<endl;
                cout<<reachtime-examtime<<" minutes after the start";
            }
            else if((reachtime-examtime)>59){
                int time=reachtime-examtime;
            int hours=time/60;
            int min=time%60;
            cout<<"Late"<<endl;
            //           if(min==0){
          //  cout<<hours<<":"<<min<<" hours berfore the start";
        //    }
             if(min>=1 && min<=9){
              cout<<hours<<":0"<<min<<" hours berfore the start";
             }
          else if(min>=10 || min==0){

           }
             cout<<hours<<":"<<min<<" hours after the start";}
        }
        else if(reachtime==examtime){
            cout<<"On time";
        }}