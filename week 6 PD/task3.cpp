#include<iostream>
using namespace std;
string sign(int,string);
main(){
    int day;
    string month;
    cout<<"Enter the day of birth: ";
    cin>>day;
    cout<<"Enter the month of birth (e.g., January, February): ";
    cin>>month;
    cout<<"Zodiac Sign: "<<sign(day,month);

}
string sign(int day,string month){
    string sign;
    if((month=="March" && day>=21 && day<=31)||(month=="April" && day<=19 && day>=1) ){
        sign="Aries";
    }
    else  if((month=="April" && day>=20 && day<=30)||(month=="May" && day<=20 && day>=1) ){
        sign="Taurus";
    }
    else    if((month=="May" && day>=21 && day<=31)||(month=="June" && day<=20 && day>=1) ){
        sign="Gemini";
    }
       else if((month=="June" && day>=21 && day<=30)||(month=="July" && day<=22 && day>=1) ){
        sign="Cancer";
    }
      else  if((month=="July" && day>=23 && day<=31)||(month=="August" && day<=22 && day>=1) ){
        sign="Leo";
    }
    else if((month=="August" && day>=23 && day<=31)||(month=="September" && day<=22 && day>=1) ){
        sign="Virgo";
    }
       else if((month=="September" && day>=23 && day<=30)||(month=="October" && day<=22 && day>=1) ){
        sign="Libra";
    }
      else if((month=="October" && day>=23 && day<=31)||(month=="November" && day<=21 && day>=1) ){
        sign="Scorpio";
    }
       else if((month=="November" && day>=22 && day<=30)||(month=="December" && day<=21 && day>=1) ){
        sign="Sagittarius";
    }
       else if((month=="December" && day>=22 && day<=31)||(month=="January" && day<=19 && day>=1) ){
        sign="Capricon";
    }
       else if((month=="January" && day>=20 && day<=31)||(month=="February" && day<=18 && day>=1) ){
        sign="Aquarius";
    }
       else if((month=="February" && day>=19 && day<=29)||(month=="March" && day<=20 && day>=1) ){
        sign="Pisces";
    }
    return sign;}