#include <iostream>
using namespace std;

string chkPosition(int hcoord,int xcoord,int ycoord);

main()
{
    int hcoord,xcoord,ycoord;
    cout << "Enter height: ";
    cin >> hcoord;
    cout << "Enter x coordinate: ";
    cin >> xcoord;
    cout << "Enter y coordinate: ";
    cin >> ycoord;
    string result = chkPosition(hcoord,xcoord,ycoord);
    cout << result;
}

string chkPosition(int hcoord,int xcoord,int ycoord){
    
    string conclude;
    bool onBorder = (xcoord >= 0 && xcoord <= 3*hcoord && (ycoord == 0 || ycoord == hcoord)) || (ycoord >= 0 && ycoord <= 4*hcoord && (xcoord == 0 || xcoord == 2*hcoord)) || (xcoord == hcoord && ycoord >= hcoord && ycoord <= 3*hcoord);
    

    if (onBorder){
        conclude = "Border";
    }
    else if (xcoord > 0 && xcoord < 2*hcoord && ycoord > 0 && ycoord < 4*hcoord){
        conclude = "Inside";
    }
    else{
        conclude = "Outside";
    }
    return conclude;
}