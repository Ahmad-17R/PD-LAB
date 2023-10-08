#include<iostream>
using namespace std;
int Menu();
void printhead();
 void table(string,string,string,string,string,string,string,string,string,char,char,char,int,int,int);
main(){
    printhead();
	
    int option=Menu();
       string name1,name2,name3,fathername1,fathername2,fathername3;
    string  phone1,phone2,phone3;
    char category1,category2,category3;
	if(option==1){
    cout<<"Enter your name: ";
    cin>>name1;
    cout<<"Enter your father's name: "<<endl;
    cin>>fathername1;
    cout<<"Enter your phone number: ";
    cin>>phone1;
    cout<<"categories     students in room"<<endl;
    cout<<"1.A            one student"<<endl; 
    cout<<"1.B            two students"<<endl;
    cout<<"1.C            three students"<<endl; 
    cout<<"1.D            four students"<<endl;
    cout<<"Enter room category"<<endl;
    cin>>category1;
       cout<<"Enter your (2ND student) name: "<<endl;
    cin>>name2;
    cout<<"Enter your phone number( 2nd student): "<<endl;
    cin>>phone2;
       cout<<"Enter your father's name: "<<endl;
    cin>>fathername2;
    cout<<"Enter room category (2nd student)"<<endl;
    cin>>category2; 
         cout<<"Enter your name (3rd student): "<<endl;
    cin>>name3;
    cout<<"Enter your phone number (3rd student): "<<endl;
    cin>>phone3;
       cout<<"Enter your father's name: "<<endl;
    cin>>fathername3;
      cout<<"Enter room category (3rd student)"<<endl;
    cin>>category3; 
    int price1,price2,price3;
    if(category1=='A'){
         price1=10000;

    }    if(category1=='B'){
        price1=7500;

    }    if(category1=='C'){
         price1=6000;

    }    if(category1=='D'){
        int price1=4000;

    }
        if(category2=='A'){
         price2=10000;

    }    if(category2=='B'){
        price2=7500;

    }    if(category2=='C'){
         price2=6000;

    }    if(category2=='D'){
        int price2=4000;

    }
        if(category3=='A'){
         price3=10000;

    }    if(category3=='B'){
        price3=7500;

    }    if(category3=='C'){
         price3=6000;

    }    if(category3=='D'){
        int price3=4000;

    }
    int messfee=7000;
    int finalprice1=messfee+price1;
    int finalprice2=messfee+price2;
    int finalprice3=messfee+price3;
	table(name1,name2,name3,fathername1,fathername2,fathername3,phone1,phone2,phone3,category1,category2,category3,finalprice1,finalprice2,finalprice3);
}}
void printhead(){
    cout<<"--------------------<<<<<<<<<<<<<<< PARADISE HOSTELS>>>>>>>>>>>>>>--------------------"<<endl;
}
int Menu(){
    int opt;
    cout<<"1.New allotment"<<endl;
    cout<<"2.Facilities"<<endl;
    cout<<"3.Help"<<endl;
    cout<<"4.Mess system"<<endl;
    cout<<"Enter your option: ";
    cin>>opt;
	return opt;}


   void table(string name1,string name2,string name3,string fathername1,string fathername2,string fathername3,string phone1,string phone2,string phone3,char category1,char category2,char category3,int finalprice1,int finalprice2,int finalprice3){
         cout<<"Name              Father's name           phone              category                    expense permonth"<<endl;
    cout<<name1<<"             "<<fathername1<<"          "<<phone1<<"                "<<category1<<"                               "<<finalprice1<<endl;
    cout<<name2<<"             "<<fathername2<<"          "<<phone2<<"                "<<category2<<"                               "<<finalprice2<<endl;
    cout<<name3<<"             "<<fathername3<<"          "<<phone3<<"                "<<category3<<"                               "<<finalprice3<<endl;

    }

