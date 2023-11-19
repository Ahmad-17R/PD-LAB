#include<iostream>
using namespace std;
void reverse(string str);

main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    reverse(str);
    
}
void reverse(string str){
int size=str.length();
cout<<"Reversed string: ";
   
for (int i = size; i>=0; i--)
{
    
    if (str[i]==' ' || i==0)

    {
        int j,k=67;
        if (i==0)
        {
            k=i;
        }
        
        if (i==0)
        {
            j=i;
        }
        else{
            j=i+1;
        }
        
       for (j ; str[j]!='\0'; j++)
       {
        if (str[j]==' ')
        {
            
          break;  
        }
        cout<<str[j];
        
       }
        if (k!=0)
        {
            cout<<" ";
        }
        
       
        
    }
    

}

    
    
}