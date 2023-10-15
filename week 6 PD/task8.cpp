#include<iostream>
using namespace std ;
int calculateVolleyballGames(string year, int holiday, int homeWeekends);
main(){


string year ;
int holiday ;
int homeWeekends ;
int total ;

cout<<"Enter year type: " ;
cin>> year ;


cout<<"Enter number of holidays: " ;
cin>> holiday;

cout<<"Enter number of weekends: " ;
cin>> homeWeekends ;

 total =    calculateVolleyballGames(year,holiday,homeWeekends);
 cout << total ;


}


int calculateVolleyballGames(string year, int holiday, int homeWeekends){
int oneleapy = 49 ;
int onenormaly = 49 ;
float  playWeekends ;
float playHolidays ;
float totalPlay ;
int res ;
            
        

        
        

        if(year == "leap"){

                 playWeekends =  oneleapy*(0.75) ;
                 playHolidays =  holiday*(0.66) ;
             totalPlay = playWeekends + playHolidays ;
                totalPlay = totalPlay + totalPlay*(0.15) ;
                res = totalPlay ;
                return res ;
            
        }
            else {
                playWeekends =  onenormaly*(0.75) ;
                 playHolidays =  holiday*(0.7) ;
             totalPlay = playWeekends + playHolidays ;
                res = totalPlay  ;
            return res ;

            }

                
  }  