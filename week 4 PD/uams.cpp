#include <iostream>
using namespace std;

void calculateAggregate(string, int, int , int);
void printMenu();
void compareMarks(string, int, string, int);

int main() {
	
        printMenu();
	string name;
	float matric,inter,ecat;
	cout<<"Name: ";
	cin>> name;
	cout<<"Matric marks: ";
	cin>> matric;
	cout<<"Inter marks: ";
	cin>> inter;
	cout<<"Ecat marks: ";
	cin>> ecat;
       	calculateAggregate(name,matric,inter,ecat);

	cout<<endl;
	string nam1,nam2;
	float marks1,marks2;
        cout<<"Name of student1: ";
	cin>> nam1;
	cout<<"Marks of student1: ";
	cin>> marks1;
	cout<<"Name of student2: ";
	cin>> nam2;
	cout<<"Marks of student2: ";
	cin>> marks2;
        compareMarks(nam1,marks1,nam2,marks2);
    
}
void printMenu() {
cout<<"---------------------------<<<<<<<<<<<<<University of Engineering and technology>>>>>>>>>>>>>----------------------"<<endl;
}

void calculateAggregate(string name, int matricMarks, int interMarks, int ecatMarks)
{
	float aggregate = ((matricMarks / 1100.0) * 0.3 + (interMarks / 550.0) * 0.3 + (ecatMarks / 400.0) * 0.4)*100;
	cout << "Aggregate for " << name << " is: " << aggregate<<"%" <<endl;
}

void compareMarks(string nameStudent1, int ecatMarksStudent1, string nameStudent2, int ecatMarksStudent2) 
{
        if (ecatMarksStudent1 > ecatMarksStudent2) {
        cout << nameStudent1 << "is alotted first roll no. "<<endl;
        }  
        if (ecatMarksStudent2 > ecatMarksStudent1) {
        cout << nameStudent2 << " is alotted first roll no. "<<endl;
   	}  
	
}
