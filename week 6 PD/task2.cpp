#include<iostream>
using namespace std;
float percent(float,float,float,float,float);
string grade(float);
main(){
    string name;
    float eng,math,chem,ss,bio;
    cout<<"Enter student name: ";
    cin>>name;
    cout<<"Enter marks for English: ";
    cin>>eng;
    cout<<"Enter marks for Maths: ";
    cin>>math;
    cout<<"Enter marks for Chemistry: ";
    cin>>chem;
    cout<<"Enter marks for Social Science: ";
    cin>>ss;
    cout<<"Enter marks for Biology: ";
    cin>>bio;
    cout<<"Student Name: "<<name<<endl;
    float result=percent(eng,math,chem,ss,bio);
    cout<<"Percentage: "<<result<<"%"<<endl;
    cout<<"Grade: "<<grade(result);



}
float percent(float eng,float math,float chem,float ss,float bio){
    float average=(eng+math+chem+ss+bio)/500;
    average=average*100;
    return average;
}
string grade(float average){
    string grade;
    if (average<=100 && average>=90){
        grade="A+";

    }
        if (average<=89 && average>=80){
        grade="A";

    }
        if (average<=79 && average>=70){
        grade="B+";

    }
        if (average<=69 && average>=60){
        grade="B";

    }
        if (average<=59 && average>=50){
        grade="C";

    }
        if (average<=49 && average>=40){
        grade="D";

    }
        if (average<=39){
        grade="F";

    }
    return grade;
}