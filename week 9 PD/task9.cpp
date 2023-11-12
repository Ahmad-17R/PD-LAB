#include<iostream>
using namespace std;
 string checklength(string valid[],int size);
 string longest(string elements[],int size);
 bool checkword(string str);

main(){
    int num;
    cout<<"Enter the number of words: ";
    cin>>num;
    cout<<"Enter the words, one by one: "<<endl;
    string elements[num];
    for (int i = 0; i < num; i++)
    {
        cin>>elements[i];
    }
    int size=sizeof(elements)/sizeof(elements[0]);
    string longestword=longest(elements,size);
    
    cout<<"Longest 7-segment word: "<<longestword;

    
}
string longest(string elements[],int size){
    string valid[size];
    int k=0;
    for (int i = 0; i < size; i++)
    {
        bool result=checkword(elements[i]);
        
        if (result==false)
        {
            continue;
        }
        else if(result==true){
            valid[k]=elements[i];
            k++;
            
        }
        
    }
    string str3="";
   if (valid[0]=="")
   {
    return str3;
   }
   
    else {
    int size2=sizeof(valid)/sizeof(valid[0]);
   string finalresult=checklength(valid,size2);
   return finalresult;}

    
}
 bool checkword(string str){
    int len=str.length();
    bool result=false;
    for (int i = 0; i < len; i++)
    {
        if (str[i]=='k' || str[i]=='m'|| str[i]=='v' || str[i]=='w' || str[i]=='x')
        {
            result=false;
            break;
        }
        else{
            result=true;
        }
        
    }
    return result;
    
 }
 string checklength(string valid[],int size){
    string bigger=valid[0];
    for (int i = 1; i<size; i++)
    {
        if (valid[i].length()==bigger.length())
        {
            continue;
        }
        
        if (valid[i].length()>bigger.length())
        {
            bigger=valid[i];
        }
        
        
    }
    return bigger;
    

 }