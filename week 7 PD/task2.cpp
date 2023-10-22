#include<iostream>
using namespace std;
void diamond(int rows);
void diamond2(int rows);
main(){
    int rows;
    cout<<"Enter the number of desired rows: ";
    cin>>rows;
      diamond(rows/2);
    diamond2(rows/2);
}
void diamond(int rows){

    for (int i = 1; i <=rows; i++)
    {        
            for (int count = 1; count<=(rows-i) ; count++){
                cout<<" ";
            }
        for (int j = 1; j<=i; j++){
            cout<<"*";
        }
    cout<<endl;
    }
}
void diamond2(int rows){
    for (int i = rows; i >0; i--)
    {    for (int count = i; count<rows ; count++){
                cout<<" ";
            }
        for (int j = 1; j<=i; j++)
        {

            cout<<"*";
        }
    cout<<endl;
    }
    

}