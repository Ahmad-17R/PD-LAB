#include<iostream>
#include<string>
using namespace std;
void broken(string str1,string str2);

main(){
    string str1,str2;
    cout<<"Enter the correct phrase: ";
    getline(cin,str1);
    cout<<"Enter what you actually typed: ";
    getline(cin,str2);
    broken(str1,str2);


}
void broken(string str1,string str2){
    int i=0,j=0;
    cout<<"Broken keys: ";
    string str3;
    int k=0;
    while (i<str1.length() && j<str2.length())
    {
        
       if (str1[i]!=str2[j])
       {
        
        str3[k]=str1[i];

        if (k==0)
        {
            cout<<str3[k];
        }
        
        else if (str3[k]!= str3[k-1])
        {
            cout<<str3[k];
        }
        k++;
        
       }
        
        
       
       i++;
       j++;}
        
    }
    
