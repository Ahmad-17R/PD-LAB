#include <iostream>
#include <conio.h>
#include <winbase.h>
#include <wincon.h>
#include <fstream>
#include <string>
using namespace std;
string getField(string record, int field);//for seeking data from file
string setcolor(unsigned short color);//sets the colour

bool checknumber(string str);//checks that if
void writefile(string filename, string username[], string password[], string role[]);
void readfilesignin(string filename, string username[], string password[], string role[], int &i);
bool aplha(string user_name, string pass_word, string r_ole, string username[], string password[], string role[]);
void printhead1();
void erase3area();
void writestufile(string filename, string name[], string fathername[], string phone[], string CNIC[], int roomrent[], int messfee[], int premium[], string feedbk[], string complaint[], int total[], string paymentstatus[], string username[], string role[], string category[]);
void erasefirstbox();
void readstufile(string filename, string name[], string fathername[], string phone[], string CNIC[], int roomrent[], int messfee[], int premium[], string feedbk[], string complaint[], int total[], string paymentstatus[], string username[], string role[], string category[]);
void eraseinside2();
void erasebox2();
string complaints(string complaint[]);
bool checkcredentials(string username, string password);
string feeds(string feedbk[]);
string changepass(string username[], string password[], int j, string checkuser);
string useraccounts(string username[], string password[], string role[], string filename);
string Complainbox();
string Feedback();
void title();
void printhead2();
string premium1(int premium[], int i, int ACprice, int Bedprice, int Dcprice, int Winterprice);
int Menu();
void signup(string username[], string password[], string role[], int &i, string filename);
void printhead();
void menuhostelite(string name[], string fathername[], string category[], string phone[], string CNIC[], int roomrent[], int messfee[], int preminum[], string feedbk[], string complaint[], string username[], string password[], int i, string checkuser, string mess[], int Aprice, int Bprice, int Cprice, int Dprice, int Messfee, int Messservice, int ACprice, int Bedprice, int Dcprice, int Winterprice, int total[], int &j, string paymentstatus[], string role[], string studentdata, string filename);
int signin(string username[], string password[], int &i, int &role_index, string &checkuser, string filename, string role[]);
void Adminmenu(string name[], string fathername[], string category[], string phone[], string CNIC[], int roomrent[], int messfee[], int premium[], string feedbk[], string complaint[], string username[], string password[], int i, string role[], string mess[], int &Aprice, int &Bprice, int &Cprice, int &Dprice, int &Messfee, int &Messservice, int &ACprice, int &Bedprice, int &Dcprice, int &Winterprice, int total[], string paymentstatus[], string checkuser, string filename, string studentfile);
string StudentDetails(string name[], string fathername[], string category[], string CNIC[], string phone[], int &k, string checkuser, string username[], int &j, string role[], string studentfile, int roomrent[], int messfee[], int premium[], string feedbk[], string complaint[], int total[], string paymentsstatus[]);
string firstmenu();
void gotoxy(int x, int y);
string viewstudents(string name[], string fathername[], string role[], int i);
string messupdate(string mess[]);
void messsetting(string mess[]);
string updateprice(int &Aprice, int &Bprice, int &Cprice, int &Dprice, int &Messfee, int &Messservice, int &ACprice, int &Bedprice, int &Dcprice, int &Winterprice);
string duesadmin(int total[], string name[], string paymentstatus[]);
// void allotmentreceipt(string string,char,int,int,int);
string messinfo(int messfee[], int i, string mess[], int Messfee, int Messservice);
string roomcategories(string category[], int i, int roomrent[], int Aprice, int Bprice, int Cprice, int Dprice);
string allotmentreceipt(string name[], string category[], int roomrent[], int messfee[], int premium[], int i, int total[], string paymentstatus[]);
void duesstatus(string paymentstatus[]);
string changeadminpass(string username[], string password[], string checkuser);
void eraseoutside();

main()

{
    int i = 0;
    int k = 0;
    int role_index = 0;
    int Aprice = 10000, Bprice = 7500, Cprice = 6000, Dprice = 4000, Messfee = 7000, Messservice = 1000, ACprice = 2000, Bedprice = 1000, Dcprice = 2500, Winterprice = 2000;
    string username[100];
    string password[100];
    string role[100];
    string name[100];
    string fathername[100];
    string category[100];
    string phone[100];
    string CNIC[100];
    int roomrent[100];
    int messfee[100];
    int premium[100];
    string feedbk[100];
    string complaint[100];
    string mess[100];
    int total[100];
    string paymentstatus[100];
    duesstatus(paymentstatus);
    string filename = "checkpass.txt";
   std::ifstream fileStream(filename);
    if(fileStream.is_open()){
    readfilesignin(filename, username, password, role, i);
    }
    else{
        writefile(filename, username, password, role);
    }
    
    int j;
    system("cls");
    string studentfile = "studata.txt";
    system("color 02");
    std::ifstream filStream(studentfile);
    if(filStream.is_open()){
        readstufile(studentfile, name, fathername, phone, CNIC, roomrent, messfee, premium, feedbk, complaint, total, paymentstatus, username, role, category);
    }
    else{
        writestufile(studentfile, name, fathername, phone, CNIC, roomrent, messfee, premium, feedbk, complaint, total, paymentstatus, username, role, category);
    }
    
    
    printhead1();
    title();
    messsetting(mess);
    string checkuser;
    while (true)
    {

        string option1 = firstmenu();
        if (option1 == "1")
        {

            int result = signin(username, password, i, role_index, checkuser, filename, role);
            if (result != 0)
            {
                if (role[role_index] == "student" || role[role_index] == "Student")
                {

                    menuhostelite(name, fathername, category, phone, CNIC, roomrent, messfee, premium, feedbk, complaint, username, password, i, checkuser, mess, Aprice, Bprice, Cprice, Dprice, Messfee, Messservice, ACprice, Bedprice, Dcprice, Winterprice, total, j, paymentstatus, role, studentfile, filename);
                }
                else if (role[role_index] == "admin" || role[role_index] == "Admin")
                {

                    Adminmenu(name, fathername, category, phone, CNIC, roomrent, messfee, premium, feedbk, complaint, username, password, i, role, mess, Aprice, Bprice, Cprice, Dprice, Messfee, Messservice, ACprice, Bedprice, Dcprice, Winterprice, total, paymentstatus, checkuser, filename, studentfile);
                }
            }
        }
        else if (option1 == "2")
        {
            signup(username, password, role, i, filename);
           
        }
        else if (option1 == "3")
        {
            system("cls");
            return 0;
        }

        else
        {

            erasefirstbox();
        }
    }
}

void printhead()
{
    cout << "--------------------<<<<<<<<<<<<<<< PARADISE HOSTELS>>>>>>>>>>>>>>--------------------" << endl;
}
int Menu()
{
    int opt;
    cout << "Login as" << endl;
    cout << "1.Admin" << endl;
    cout << "2.Hostelite" << endl;
    cout << "3.Exit" << endl;
    cout << "Enter your option..";
    cin >> opt;
    return opt;
}

/*void menunext(int opt)
    {

    if (opt == 1)
    {
        menuadmin();
    }
    if (opt == 2)
    {
        menuhostelite();
    }
    if (opt == 3)
    {
        exit(0);
    }
    else
    {
        cout << "Invalid option";
    }*/

void menuhostelite(string name[], string fathername[], string category[], string phone[], string CNIC[], int roomrent[], int messfee[], int premium[], string feedbk[], string complaint[], string username[], string password[], int i, string checkuser, string mess[], int Aprice, int Bprice, int Cprice, int Dprice, int Messfee, int Messservice, int ACprice, int Bedprice, int Dcprice, int Winterprice, int total[], int &j, string paymentstatus[], string role[], string studentfile, string filename)
{
    while (true)
    {
        erasefirstbox();
        setcolor(4);
       string nextoption;
        gotoxy(7, 14);
        cout << "Complete the following steps...." << endl;
        gotoxy(7, 15);
        cout << "1.Student Details/Bio Data:" << endl;
        gotoxy(7, 16);
        cout << "2.Room categories/Selecting Room" << endl;
        gotoxy(7, 17);
        cout << "3.Mess Info/Avail Mess Facility" << endl;
        gotoxy(7, 18);
        cout << "4.Avail premium facilities" << endl;
        gotoxy(7, 19);
        cout << "5.Dues section/Dues to Pay" << endl;
        gotoxy(7, 20);
        cout << "6.Send Feedback" << endl;
        gotoxy(7, 21);
        cout << "7.Make a complaint" << endl;
        gotoxy(7, 22);
        cout << "8.Change username/password" << endl;
        gotoxy(7, 23);
        cout << "9.Logout";
        gotoxy(7, 24);
        cout << "Enter your option . .";
       getline(cin>>ws,nextoption);

        if (nextoption == "1")
        {
            printhead2();

            string result = StudentDetails(name, fathername, category, CNIC, phone, i, checkuser, username, j, role, studentfile, roomrent, messfee, premium, feedbk, complaint, total, paymentstatus);
            gotoxy(64, 20);
            cout << result;
            writestufile(studentfile, name, fathername, phone, CNIC, roomrent, messfee, premium, feedbk, complaint, total, paymentstatus, username, role, category);
            getch();
            erasebox2();
             eraseoutside();
             erase3area();
        }
        else if (nextoption == "2")
        {

            printhead2();
            // readstufile(studentfile,name, fathername, phone,CNIC, roomrent, messfee, premium,feedbk,complaint, total,paymentstatus,username,role,category);
            string result = roomcategories(category, j, roomrent, Aprice, Bprice, Cprice, Dprice);
            gotoxy(64, 22);
            cout << result;
            writestufile(studentfile, name, fathername, phone, CNIC, roomrent, messfee, premium, feedbk, complaint, total, paymentstatus, username, role, category);
            gotoxy(64, 23);
            cout << "Press any key to continue...";
            getch();
            erasebox2();
               eraseoutside();
             erase3area();
        }
        else if (nextoption == "3")
        {
            printhead2();
            // readstufile(studentfile,name, fathername, phone,CNIC, roomrent, messfee, premium,feedbk,complaint, total,paymentstatus,username,role,category);
            string result = messinfo(messfee, j, mess, Messfee, Messservice);
            gotoxy(64, 22);
            cout << result;
            writestufile(studentfile, name, fathername, phone, CNIC, roomrent, messfee, premium, feedbk, complaint, total, paymentstatus, username, role, category);
            gotoxy(64, 23);
            cout << "Press any key to continue...";
            getch();
            erasebox2();
               eraseoutside();
             erase3area();
        }
        else if (nextoption == "4")
        {
            printhead2();
            string result = premium1(premium, j, ACprice, Bedprice, Dcprice, Winterprice);
            gotoxy(64, 22);
            cout << result;
            writestufile(studentfile, name, fathername, phone, CNIC, roomrent, messfee, premium, feedbk, complaint, total, paymentstatus, username, role, category);
            gotoxy(64, 23);
            cout << "Press any key to continue...";
            getch();
            erasebox2();
               eraseoutside();
             erase3area();
        }
        else if (nextoption == "5")
        {
            printhead2();
            string result = allotmentreceipt(name, category, roomrent, messfee, premium, j, total, paymentstatus);
            gotoxy(64, 22);
            cout << result;
            writestufile(studentfile, name, fathername, phone, CNIC, roomrent, messfee, premium, feedbk, complaint, total, paymentstatus, username, role, category);
            gotoxy(64, 23);
            cout << "Press any key to continue...";
            getch();
            erasebox2();
               eraseoutside();
             erase3area();
        }
        else if (nextoption == "6")
        {

            printhead2();
            string result = Feedback();
            feedbk[i] = result;
            writestufile(studentfile, name, fathername, phone, CNIC, roomrent, messfee, premium, feedbk, complaint, total, paymentstatus, username, role, category);
            gotoxy(64, 22);
            cout << "Feedback has been recorded!";
            gotoxy(64, 23);
            cout << "Press any key to continue...";
            getch();
            erasebox2();
               eraseoutside();
             erase3area();
        }
        else if (nextoption == "7")
        {
            printhead2();
            string result = Complainbox();
            complaint[i] = result;
            writestufile(studentfile, name, fathername, phone, CNIC, roomrent, messfee, premium, feedbk, complaint, total, paymentstatus, username, role, category);
            gotoxy(64, 22);
            cout << "Complaint has been recorded!";
            gotoxy(64, 23);
            cout << "Press any key to continue...";
            getch();
            erasebox2();
               eraseoutside();
             erase3area();
        }
        else if (nextoption == "8")
        {
            printhead2();
            string result = changepass(username, password, j, checkuser);
            gotoxy(64, 20);
            cout << result;
            writefile(filename, username, password, role);
            gotoxy(64, 21);
            cout << "Press any key to continue...";
            getch();
            erasebox2();
               eraseoutside();
             erase3area();
        }
        else
        {
            writestufile(studentfile, name, fathername, phone, CNIC, roomrent, messfee, premium, feedbk, complaint, total, paymentstatus, username, role, category);
            gotoxy(7, 25);
            cout << "Loged out";
            gotoxy(7, 26);
            cout << "Press any key to continue...";
            getch();
               eraseoutside();
             erase3area();
            break;
        }
    }
}
void Adminmenu(string name[], string fathername[], string category[], string phone[], string CNIC[], int roomrent[], int messfee[], int premium[], string feedbk[], string complaint[], string username[], string password[], int i, string role[], string mess[], int &Aprice, int &Bprice, int &Cprice, int &Dprice, int &Messfee, int &Messservice, int &ACprice, int &Bedprice, int &Dcprice, int &Winterprice, int total[], string paymentstatus[], string checkuser, string filename, string studentfile)
{
    while (true)
    {
        erasefirstbox();
        setcolor(4);
        string nextoption;
        gotoxy(7, 14);
        cout << "1.View Registered Students" << endl;
        gotoxy(7, 15);
        cout << "2.Update Mess" << endl;
        gotoxy(7, 16);
        cout << "3.Update the prices/charges" << endl;
        gotoxy(7, 17);
        cout << "4.Dues Management" << endl;
        gotoxy(7, 18);
        cout << "5.Check/Delete users accounts" << endl;
        gotoxy(7, 19);
        cout << "6.Change Username/Password" << endl;
        gotoxy(7, 20);
        cout << "7.Check complainbox" << endl;
        gotoxy(7, 21);
        cout << "8.Check feedback" << endl;
        gotoxy(7, 22);
        cout << "9.Logout" << endl;
        gotoxy(7, 23);
        cout << "Enter your option . .";
        getline(cin>>ws,nextoption);
        if (nextoption == "1")
        {
            printhead2();

            string result = viewstudents(name, fathername, role, i);
            gotoxy(64, 21);
            cout << result;
            gotoxy(64, 22);
            cout << "Press any key to continue...";
            getch();
            erasebox2();
               eraseoutside();
             erase3area();
        
        }
        else if (nextoption == "2")
        {
            printhead2();

            string result = messupdate(mess);
            gotoxy(64, 19);
            cout << result;
            gotoxy(64, 20);
            cout << "Press any key to continue...";
            getch();
            erasebox2();
               eraseoutside();
             erase3area();
        }
        else if (nextoption == "3")
        {
            printhead2();

            string result = updateprice(Aprice, Bprice, Cprice, Dprice, Messfee, Messservice, ACprice, Bedprice, Dcprice, Winterprice);
            gotoxy(91, 19);
            cout << result;
            gotoxy(91, 21);
            cout << "Press any key to continue...";
            getch();
            erasebox2();
               eraseoutside();
             erase3area();
        }
        else if (nextoption == "4")
        {
            printhead2();
            string result = duesadmin(total, name, paymentstatus);
            writestufile(studentfile, name, fathername, phone, CNIC, roomrent, messfee, premium, feedbk, complaint, total, paymentstatus, username, role, category);
            gotoxy(64, 20);
            cout << result;
            gotoxy(64, 21);
            cout << "Press any key to continue...";
            getch();
            erasebox2();
               eraseoutside();
             erase3area();
        }
        else if (nextoption == "5")
        {
            printhead2();
            string result = useraccounts(username, password, role, filename);
            writefile(filename, username, password, role);
            gotoxy(64, 22);
            cout << result;
            gotoxy(64, 23);
            cout << "Press any key to continue...";
            getch();
            erasebox2();
               eraseoutside();
             erase3area();
            continue;
        }
        else if (nextoption == "6")
        {
            printhead2();
            string result = changeadminpass(username, password, checkuser);
            writefile(filename, username, password, role);
            gotoxy(64, 20);
            cout << result;
            gotoxy(64, 21);
            cout << "Press any key to continue...";
            getch();
            erasebox2();
               eraseoutside();
             erase3area();
        }
        else if (nextoption == "7")
        {
            printhead2();
            string result = complaints(complaint);
            gotoxy(64, 21);
            cout << result;
            gotoxy(64, 22);
            cout << "Press any key to continue...";
            getch();
            erasebox2();
               eraseoutside();
             erase3area();
        }
        else if (nextoption == "8")
        {
            printhead2();
            string result = feeds(feedbk);
            gotoxy(64, 20);
            cout << result;
            gotoxy(64, 21);
            cout << "Press any key to continue...";
            getch();
            erasebox2();
               eraseoutside();
             erase3area();
        }
        else
        {

            gotoxy(7, 26);
            cout << "Press any key to continue...";
             
            getch();
              eraseoutside();
             erase3area();
            break;
        }
    }
}

string StudentDetails(string name[], string fathername[], string category[], string CNIC[], string phone[], int &k, string checkuser, string username[], int &j, string role[], string studentfile, int roomrent[], int messfee[], int premium[], string feedbk[], string complaint[], int total[], string paymentstatus[])
{
    int stuindex = 0;
    // 1writestufile(studentfile,name,fathername,phone,CNIC,roomrent,messfee,premium,feedbk,complaint,total,paymentstatus,username,role);
    //  readstufile(studentfile,name, fathername, phone,CNIC, roomrent, messfee, premium,feedbk,complaint, total,paymentstatus,username,role);
    // writestufile(studentfile,name,fathername,phone,CNIC,roomrent,messfee,premium,feedbk,complaint,total,paymentstatus,username,role);
    // readstufile(studentfile,name, fathername, phone,CNIC, roomrent, messfee, premium,feedbk,complaint, total,paymentstatus,username,role);
    for (int i = 0; i < 100; i++)
    {
        if (checkuser == username[i])
        {
            stuindex = i;
            break;
        }
    }
    int count = 0;
    while (count != 4)
    {
        printhead2();
        if (name[stuindex].length() == 0)
        {
            gotoxy(64, 16);
            cout << "Enter your name: ";
            getline(cin >> ws, name[stuindex]);
            count++;
        }
        else
        {

            gotoxy(64, 16);
            cout << "Name\t\t\t" << name[stuindex];
            count++;
        }
        if (fathername[stuindex].length() == 0)
        {
            gotoxy(64, 17);
            cout << "Enter your father's name: ";
            getline(cin >> ws, fathername[stuindex]);
            count++;
        }
        else
        {
            gotoxy(64, 17);
            cout << "Fatherame\t\t\t" << fathername[stuindex];
            count++;
        }
    }
    while (true)
    {
        if (phone[stuindex].length() == 0)
        {
            gotoxy(64, 18);
            string str;
            cout << "Enter your phone number: ";
            getline(cin >> ws, str);
            if (checknumber(str) == true && str.length() == 11)
            {
                phone[stuindex] = str;
                count++;
            }
            else
            {
                gotoxy(118, 18);
                cout << "Wrong input!";
                getch();
                gotoxy(60, 18);
                cout << "#                                                                           # " << endl;
                continue;
            }
        }
        else
        {
            gotoxy(60, 18);
            cout << "#                                                                           # " << endl;
            gotoxy(64, 18);
            cout << "Phone number\t\t\t" << phone[stuindex];
            count++;
            break;
        }
    }
    while (true)
    {

        if (CNIC[stuindex].length() == 0)
        {
            gotoxy(64, 19);
            string str;
            cout << "Enter your CNIC: ";
            getline(cin >> ws, str);
            if (checknumber(str) == true && str.length() == 13)
            {
                CNIC[stuindex] = str;
                break;
            }
            else
            {
                gotoxy(118, 19);
                cout << "Wrong input!";
                getch();
                gotoxy(60, 19);
                cout << "#                                                                           # " << endl;
                continue;
            }
        }
        else
        {
            gotoxy(60, 19);
            cout << "#                                                                           # " << endl;
            gotoxy(64, 19);
            cout << "Cnic\t\t\t" << phone[stuindex];
            count++;
            break;
        }
    }

    j = stuindex;
    string ans = "";
    string ph, cn;

    string str = "Student Details Completed!";

    while (true)

    {
        gotoxy(60, 21);
        cout << "#                                                                           # " << endl;
        gotoxy(64, 21);
        cout << "Do you want to edit any detail?(name/fathername/phone/cnic/no)";
        cin >> ans;
        if (ans == "name" || ans == "Name")
        {
            gotoxy(60, 16);
            cout << "#                                                                           # " << endl;
            gotoxy(64, 16);
            cout << "Enter new name: ";
            cin >> name[stuindex];
        }
        else if (ans == "fathername" || ans == "Fathername")
        {
            gotoxy(60, 17);
            cout << "#                                                                           # " << endl;
            gotoxy(64, 17);
            cout << "Enter new Fathername: ";
            cin >> fathername[stuindex];
        }
        else if (ans == "phone" || ans == "Phone")
        {
            gotoxy(60, 18);
            cout << "#                                                                           # " << endl;
            gotoxy(64, 18);
            cout << "Enter new phone number: ";
            getline(cin >> ws, ph);
            if (checknumber(ph) == true && str.length() == 11)
            {
                phone[stuindex] = ph;
                gotoxy(118, 18);
                cout << "Phone number updated";
            }
            else
            {
                gotoxy(118, 18);
                cout << "Wrong input!";
                getch();
            }
        }
        else if (ans == "cnic" || ans == "CNIC" || ans == "Cnic")
        {
            gotoxy(60, 19);
            cout << "#                                                                           # " << endl;
            gotoxy(64, 19);
            cout << "Enter your CNIC:";
            getline(cin >> ws, cn);
            if (checknumber(str) == true && str.length() == 12)
            {
                CNIC[stuindex] = cn;
            }
            else
            {
                gotoxy(118, 19);
                cout << "Wrong input!";
                getch();
            }
        }
        else if (ans == "no" || ans == "No" || ans == "NO")
        {
            break;
        }

        else
        {

            gotoxy(60, 21);
            cout << "#                                                                           # " << endl;
            gotoxy(64, 21);
            cout << "Press any key to continue!";
            getch();
        }
    }
    // writestufile(studentfile,name,fathername,phone,CNIC,roomrent,messfee,premium,feedbk,complaint,total,paymentstatus,username,role,category);
    return str;
}

string allotmentreceipt(string name[], string category[], int roomrent[], int messfee[], int premium[], int j, int total[], string paymentstatus[])
{
    gotoxy(64, 14);
    cout << "<----------<<<<Paradise Hostels>>>>----------->";
    gotoxy(64, 15);
    cout << "Name\t\t\t" << name[j] << endl;
    gotoxy(64, 16);
    cout << "Category\t\t\t" << category[j] << endl;
    gotoxy(64, 17);
    cout << "Room no.\t\t\t" << j + 1 << endl;
    gotoxy(64, 18);
    cout << "Room Rent\t\t\tRs." << roomrent[j] << endl;
    gotoxy(64, 19);
    cout << "Mess Fee\t\t\tRs." << messfee[j] << endl;
    gotoxy(64, 20);
    cout << "Premium facilities\t\t\tRs." << premium[j] << endl;
    int total2 = roomrent[j] + messfee[j] + premium[j];
    total[j] = total2;
    gotoxy(64, 21);
    cout << "         Total Dues\t\t\tRs." << total2;
    string str;
    if (paymentstatus[j] == "Unpaid")
    {
        str = "Pay the dues by the 10th of this month.";
    }
    else
    {
        str = "Status: Paid!";
    }
    return str;
}
string roomcategories(string category[], int j, int roomrent[], int Aprice, int Bprice, int Cprice, int Dprice)
{

    gotoxy(64, 16);
    cout << "categories     students in room" << endl;
    gotoxy(64, 17);
    cout << "1.A            one student      Rs." << Aprice << "/-" << endl;
    gotoxy(64, 18);
    cout << "2.B            two students        Rs." << Bprice << "/-" << endl;
    gotoxy(64, 19);
    cout << "3.C            three students     Rs." << Cprice << "/-" << endl;
    gotoxy(64, 20);
    cout << "4.D            four students       Rs." << Dprice << "/-" << endl;
    gotoxy(64, 21);
    string abc = "";
    while (category[j].length() == 0)
    {
        gotoxy(60, 21);
        cout << "#                                                                           # " << endl;

        gotoxy(64, 21);
        cout << "Enter room category(A/B/C/D): ";
        getline(cin >> ws, abc);
        if (abc.length() == 1 && (abc == "A" || abc == "B" || abc == "C" || abc == "D"))
        {
            category[j] = abc;
            break;
        }
        else
        {
            gotoxy(118, 21);
            cout << "Invalid category!";
            continue;
        }
    }

    if (category[j] == "A")
    {
        roomrent[j] = Aprice;
    }
    else if (category[j] == "B")
    {
        roomrent[j] = Bprice;
    }
    else if (category[j] == "C")
    {
        roomrent[j] = Cprice;
    }
    else if (category[j] == "D")
    {
        roomrent[j] = Dprice;
    }
    gotoxy(60, 21);
    cout << "#                                                                           # " << endl;
    string ans;
    gotoxy(64, 21);
    cout << "Do you want to change your category?(Yes/No)";
    cin >> ans;
    if (ans == "Yes" || ans == "yes")
    {
        while (true)
        {
            gotoxy(60, 21);
            cout << "#                                                                           # " << endl;

            gotoxy(64, 21);
            cout << "Enter room category(A/B/C/D): ";
            getline(cin >> ws, abc);
            if (abc.length() == 1 && (abc == "A" || abc == "B" || abc == "C" || abc == "D"))
            {
                category[j] = abc;
                break;
            }
            else
            {
                gotoxy(118, 21);
                cout << "Invalid category!";
                continue;
            }
        }
    }

    if (category[j] == "A")
    {
        roomrent[j] = Aprice;
    }
    else if (category[j] == "B")
    {
        roomrent[j] = Bprice;
    }
    else if (category[j] == "C")
    {
        roomrent[j] = Cprice;
    }
    else if (category[j] == "D")
    {
        roomrent[j] = Dprice;
    }
    string str = "Room category has been selected!";
    return str;
}
string messinfo(int messfee[], int j, string mess[], int Messfee, int Messservice)
{
    gotoxy(64, 14);
    for (int i = 0; i < 8; i++)
    {
        if (i != 7)
        {
            if (i == 5)
            {
                gotoxy(64, 15);
                cout << i + 1 << "." << mess[i] << ",";
            }
            else
            {
                cout << i + 1 << "." << mess[i] << ",";
            }
        }
        else
        {

            cout << i + 1 << "." << mess[i];
        }
    }
    gotoxy(64, 17);
    cout << "The managment provides the mess two times a day" << endl;
    gotoxy(64, 18);
    cout << "Mess fee per month: Rs." << Messfee << endl;
    gotoxy(64, 19);
    cout << "The mess service which is " << Messservice << " rupees in addition to the mess fee.";
    string str, abc;
    if (messfee[j] > 0)
    {

        gotoxy(60, 20);
        cout << "#                                                                           # " << endl;

        gotoxy(60, 21);
        cout << "#                                                                           # " << endl;
        gotoxy(64, 20);
        cout << "You already have this service! ";
        gotoxy(60, 21);
        cout << " Do you want to remove the service(Yes/No)?";

        getline(cin >> ws, abc);
        if (abc == "Yes" || abc == "yes")
        {
            messfee[j] = 0;
        }
        else
        {
            str = "No changes made!";
        }
    }
    else
    {
        while (true)
        {

            gotoxy(60, 20);
            cout << "#                                                                           # " << endl;

            char ans;
            gotoxy(64, 20);
            cout << "Do you want mess service (Y/N): ";
            cin >> ans;
            if (ans == 'Y' || ans == 'y')
            {
                messfee[j] = Messservice + Messfee;
                str = "Mess sevice accepted!";
                break;
            }
            else if (ans == 'N' || ans == 'n')
            {
                messfee[j] = 0;
                str = "Mess Service denied!";
                break;
            }
            else
            {
                gotoxy(118, 20);
                cout << "Invalid input!";
                continue;
            }
        }
    }
    return str;
}

string firstmenu()
{
    erasefirstbox();
    string opt;
    gotoxy(17, 15);
    cout << "Welcome to Paradise Hostels";

    gotoxy(17, 16);
    cout << "1.Sign In" << endl;
    gotoxy(17, 17);
    cout << "2.Sign Up" << endl;
    gotoxy(17, 18);
    cout << "3.Exit" << endl;
    gotoxy(17, 19);
    cout << "Enter your option: ";
    getline(cin>>ws, opt);
    return opt;
}
int signin(string username[], string password[], int &i, int &role_index, string &checkuser, string filename, string role[])
{
    string user, pass;
    erasefirstbox();
    gotoxy(7, 15);
    cout << "<-------<<<Sign In Menu>>>------->" << endl;
    int option = 0;
    gotoxy(7, 17);
    cout << "Enter username: ";
    cin >> user;
    gotoxy(7, 18);
    cout << "Enter password: ";
    cin >> pass;
    int signcount = 0;
    readfilesignin(filename, username, password, role, i);
    /* cout<<username[0];
     cout<<password[0];
     getch();*/
    for (int j = 0; j < 100; j++)
    {
        if (user == username[j])
        {
            if (pass == password[j])
            {
                checkuser = username[j];
                gotoxy(7, 20);
                cout << "You have successfully signed in..." << endl;
                signcount++;
                gotoxy(7, 21);
                cout << "Press any Key to continue.";
                // getch();
                role_index = j;
            }
        }
    }
    if (signcount == 0)
    {
        gotoxy(7, 20);
        cout << "Entered Credentials are wrong.";
        gotoxy(7, 21);
        cout << "Press any Key to continue.";
        getch();
    }
    return signcount;
}
void signup(string username[], string password[], string role[], int &i, string filename)
{

    erasefirstbox();
    gotoxy(7, 15);
    cout << "<-------<<<Sign Up Menu>>>------->" << endl;

    if (i == 0)
    {

        gotoxy(7, 17);
        cout << "Enter Username(without spaces): ";
        getline(cin >>ws, username[i]);
        gotoxy(7, 18);
        cout << "Enter Password(4 digit pin code): ";

        getline(cin >>ws, password[i]);
        gotoxy(7, 19);
        cout << "Enter role(student/admin): ";
        cin >> role[i];
        bool roles = false;
        if (role[i] == "Student" || role[i] == "student" || role[i] == "admin" || role[i] == "Admin")
        {
            roles = true;
        }

        if (checkcredentials(username[i], password[i]) == true && roles == true)
        {
            writefile(filename, username, password, role);
            i++;
            gotoxy(7, 21);
            cout << "You have successfully signed up." << endl;
            gotoxy(7, 22);
            cout << "Pres any key to continue...";
            getch();
        }
        else
        {
            username[i] = "";
            password[i] = "";
            role[i] = "";
            gotoxy(7, 21);
            cout << "Entered credentials are wrong.";
            gotoxy(7, 22);
            cout << "Pres any key to continue...";
            getch();
        }
    }
    else if (i > 0)
    {
        string user_name, pass_word, r_ole;
        //cin.ignore();
        gotoxy(7, 17);
        cout << "Enter Username(without spaces): ";
        getline(cin, user_name);
        gotoxy(7, 18);
        cout << "Enter Password(4 digit pin code): ";
        getline(cin, pass_word);

        gotoxy(7, 19);
        cout << "Enter role(student/admin): ";
        cin >> r_ole;
        bool roles = false;
        if (r_ole == "Student" || r_ole == "student" || r_ole == "admin" || r_ole == "Admin")
        {
            roles = true;
        }
        bool result55 = checkcredentials(user_name, pass_word);
        if (result55 == true && roles == true)
        {
            bool alpha = aplha(user_name, pass_word, r_ole, username, password, role);

            if (alpha == false)
            {
                gotoxy(7, 21);
                cout << "This signin info is already taken." << endl;
                gotoxy(7, 22);
                cout << "Pres any key to continue...";
                getch();
            }
            else
            {

                username[i] = user_name;
                password[i] = pass_word;
                role[i] = r_ole;
                writefile(filename, username, password, role);
                gotoxy(7, 21);
                cout << "You have successfully signed up.";
                i++;
                gotoxy(7, 22);
                cout << "Pres any key to continue...";
                getch();
            }
        }
        else
        {

            gotoxy(7, 21);
            cout << "Entered credentials are wrong." << endl;
            gotoxy(7, 22);
            cout << "Pres any key to continue...";
            getch();
        }
    }
}
void printhead1()
{
    gotoxy(5, 13);
    cout << "=============================================== " << endl;
    gotoxy(5, 14);
    cout << "#                                             # " << endl;
    gotoxy(5, 15);
    cout << "#                                             # " << endl;
    gotoxy(5, 16);
    cout << "#                                             # " << endl;
    gotoxy(5, 17);
    cout << "#                                             # " << endl;
    gotoxy(5, 18);
    cout << "#                                             # " << endl;
    gotoxy(5, 19);
    cout << "#                                             # " << endl;
    gotoxy(5, 20);
    cout << "#                                             # " << endl;
    gotoxy(5, 21);
    cout << "#                                             # " << endl;
    gotoxy(5, 22);
    cout << "#                                             # " << endl;
    gotoxy(5, 23);
    cout << "#                                             # " << endl;
    gotoxy(5, 24);
    cout << "#                                             # " << endl;
    gotoxy(5, 25);
    cout << "#                                             # " << endl;
    gotoxy(5, 26);
    cout << "#                                             # " << endl;
    gotoxy(5, 27);
    cout << "=============================================== " << endl;
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
bool aplha(string user_name, string pass_word, string r_ole, string username[], string password[], string role[])
{
    bool result = true;

    for (int i = 0; i < 10; i++)
    {
        if (user_name == username[i] && pass_word == password[i])
        {
            result = false;
            break;
        }
    }
    return result;
}
string premium1(int premium[], int j, int ACprice, int Bedprice, int Dcprice, int Winterprice)
{
    gotoxy(64, 14);
    cout << "1.Air Conditioner                       Rs." << ACprice << "/- per month " << endl;
    gotoxy(64, 15);
    cout << "2.Double Bed.                           Rs." << Bedprice << "/- per month " << endl;
    gotoxy(64, 16);
    cout << "3.Get your clothes dry cleaned.         Rs." << Dcprice << "/- per month " << endl;
    gotoxy(64, 17);
    cout << "4.Room Heater and warm water in winter. Rs." << Winterprice << "/- per month " << endl;
    int count3 = 0;
    char AC;
    gotoxy(64, 18);
    cout << "Do you want AC? (Y/N): ";
    cin >> AC;
    if (AC == 'Y' || AC == 'y')
    {
        count3 = count3 + ACprice;
    }
    char Bed;
    gotoxy(64, 19);
    cout << "Do you want Double Bed? (Y/N): ";
    cin >> Bed;
    if (Bed == 'Y' || Bed == 'y')
    {
        count3 = count3 + Bedprice;
    }
    char Heater;
    gotoxy(64, 20);
    cout << "Do you want your clothes dry cleaned? (Y/N): ";
    cin >> Heater;
    if (Heater == 'Y' || Heater == 'y')
    {
        count3 = count3 + Winterprice;
    }
    char dryclean;
    gotoxy(64, 21);
    cout << "Do you want your Winter services? (Y/N): ";
    cin >> dryclean;
    if (dryclean == 'Y' || dryclean == 'y')
    {
        count3 = count3 + Dcprice;
    }
    premium[j] = count3;
    string str = "Seen all the facilities!";
    return str;
}
string Feedback()
{
    cin.ignore();
    string feed;
    gotoxy(64, 16);
    cout << "Write the feedback: ";
    getline(cin, feed);
    return feed;
}
string Complainbox()
{
    cin.ignore();
    string comp;
    gotoxy(64, 16);
    cout << "Submit your Complaint: ";
    getline(cin, comp);
    return comp;
}
string changepass(string username[], string password[], int j, string checkuser)
{

    string change;
    gotoxy(64, 16);
    cout << "What do you want to change?username or password type:(User/Pass): ";
    cin >> change;
    if (change == "User" || change == "Pass")
    {
        if (change == "User")
        {
            string passcode;
            string result;
            gotoxy(64, 17);
            cout << "Enter password to make change in username.";
            cin >> passcode;
            if (passcode == password[j])
            {
                gotoxy(64, 18);
                cout << "Enter the new username: ";
                cin >> result;
                for (int i = 0; i < 100; i++)
                {
                    if (checkuser == result)
                    {
                        username[j] = result;
                    }
                }
            }
            else
            {
                gotoxy(64, 18);
                cout << "Wrong password.";
            }
        }
        else if (change == "Pass")
        {
            string passcode, pass;
            gotoxy(64, 17);
            cout << "Enter the old password: ";
            cin >> passcode;
            if (passcode == password[j])
            {
                while (true)
                {
                    gotoxy(60, 18);
                    cout << "#                                                                           # " << endl;
                    gotoxy(64, 18);
                    cout << "Enter the new Password: ";
                    getline(cin >> ws, pass);
                    if (checkcredentials(username[j], pass) == true)
                    {
                        password[j] = pass;
                        break;
                    }
                    else
                    {
                        gotoxy(60, 18);
                        cout << "#                                                                           # " << endl;
                        gotoxy(64, 18);
                        cout << "It should be a 4 digit pin code!";
                        continue;
                    }
                }}
                else
                {
                    gotoxy(64, 18);
                    cout << "Wrong password.";
                }
            }
        }
        else
        {
            gotoxy(64, 17);
            cout << "Entered input is incorrect.";
        }

        string account = "Changes have been made in the account";

        return account;
    }

string viewstudents(string name[], string fathername[], string role[], int k)
{
    gotoxy(64, 16);
    cout << "The list of Registered students is:" << endl;
    gotoxy(64, 17);
    cout << "Name\t\t\tFather name" << endl;
    int count = 1;
    int num = 0;

    int x = 18;
    for (int j = 0; j < k; j++)
    {
        if (name[j] == "" && fathername[j] == "")
        {
            num++;
        }
        else
        {
            gotoxy(64, x);
            cout << count << "." << name[j] << "\t\t\t" << fathername[j];
            count++;
            x++;
        }
    }
    string result;

    if (num > 0)
    {
        result = "No registered students!";
    }
    else
    {
        result = "These are the registered Students.";
    }
    return result;
}
string messupdate(string mess[])
{
    gotoxy(64, 14);
    for (int i = 0; i < 8; i++)
    {
        if (i != 7)
        {
            if (i == 5)
            {
                gotoxy(64, 15);
                cout << i + 1 << "." << mess[i] << ",";
            }
            else
            {
                cout << i + 1 << "." << mess[i] << ",";
            }
        }
        else
        {

            cout << i + 1 << "." << mess[i];
        }
    }

    string ans;
    string str;
    gotoxy(64, 16);
    cout << "Do you want to make change in the menu(Y/N)? ";
    cin >> ans;
    if (ans == "Y" || ans == "y")
    {
        int opt;
        string nextoption;
        gotoxy(64, 17);
        cout << "Which Dish do you want to change(dish number)?";
        getline(cin >> ws, nextoption);
        if ( nextoption == "1" || nextoption == "2" || nextoption == "3" || nextoption == "4" || nextoption == "5" || nextoption == "6" || nextoption == "7" || nextoption == "8")
        {
            opt = stoi(nextoption);
            opt--;
            
            gotoxy(64, 18);
            cout << "Enter the new dish...";
            cin >> mess[opt];

            str = "Your menu has been updated";
        }
        else
        {
            gotoxy(64, 18);
            cout << "Invalid input!";
        }
    }
    else
    {
        str = "no changes made!";
    }

    return str;
}
void messsetting(string mess[])
{
    mess[0] = "Chicken Karahi";
    mess[1] = "Biryani";
    mess[2] = "Roast";
    mess[3] = "Palao Rice";
    mess[4] = "Minced Meat";
    mess[5] = "Chinese Rice";
    mess[6] = "Special Dish";
    mess[7] = "Kari Pakora";
}
string updateprice(int &Aprice, int &Bprice, int &Cprice, int &Dprice, int &Messfee, int &Messservice, int &ACprice, int &Bedprice, int &Dcprice, int &Winterprice)
{
    gotoxy(64, 14);
    cout << "1.Category A :Rs" << Aprice;
    gotoxy(64, 15);
    cout << "2.Category B :Rs" << Bprice;
    gotoxy(64, 16);
    cout << "3.Category C :Rs" << Cprice;
    gotoxy(64, 17);
    cout << "4.Category D :Rs" << Dprice;
    gotoxy(64, 18);
    cout << "5.Mess fee :Rs" << Messfee;
    gotoxy(64, 19);
    cout << "6.Mess Service :Rs" << Messservice;
    gotoxy(64, 20);
    cout << "7.Air Conditioner :Rs" << ACprice;
    gotoxy(64, 21);
    cout << "8.Bed :Rs" << Bedprice;
    gotoxy(64, 22);
    cout << "9.Dry Cleaning: Rs" << Dcprice;
    gotoxy(64, 23);
    cout << "10.Winter facilities :Rs" << Winterprice;
    int elements[10] = {Aprice, Bprice, Cprice, Dprice, Messfee, Messservice, ACprice, Bedprice, Dcprice, Winterprice};
    char ans;
    gotoxy(91, 14);
    cout << "Do you want to update the price?(Y/N): ";
    cin >> ans;

    string str;
    if (ans == 'Y' || ans == 'y')
    {

        int opt, newprice;
        string option;
        gotoxy(91, 15);
        cout << "Enter the option number to update: ";
        getline(cin >> ws, option);
        if (option == "0" || option == "1" || option == "2" || option == "3" || option == "4" || option == "5" || option == "6" || option == "7" || option == "8")
        {
            opt = stoi(option);

            gotoxy(91, 16);
            string newprice;
            cout << "Enter the new price: ";
            getline(cin >> ws, newprice);
            bool real = true;
            for (int i = 0; newprice[i] != '\0'; i++)
            {
                if (newprice[i] != '0' && newprice[i] != '1' && newprice[i] != '2' && newprice[i] != '3' && newprice[i] != '4' && newprice[i] != '5' && newprice[i] != '6' && newprice[i] != '7' && newprice[i] != '8')
                {
                    real = false;
                    break;
                }
            }
            if (real == true)
            {

                int newp = stoi(newprice);

                if (opt == 1)
                {
                    newp = Aprice;
                    str = "Prices are Updated";
                }
                else if (opt == 2)
                {
                    newp = Bprice;
                    str = "Prices are Updated";
                }
                else if (opt == 3)
                {
                    newp = Cprice;
                    str = "Prices are Updated";
                }
                else if (opt == 4)
                {
                    newp = Dprice;
                    str = "Prices are Updated";
                }
                else if (opt == 5)
                {
                    newp = Messfee;
                    str = "Prices are Updated";
                }
                else if (opt == 6)
                {
                    newp = Messservice;
                    str = "Prices are Updated";
                }
                else if (opt == 7)
                {
                    newp = ACprice;
                    str = "Prices are Updated";
                }
                else if (opt == 8)
                {
                    newp = Bedprice;
                    str = "Prices are Updated";
                }
                else if (opt == 9)
                {
                    newp = Dcprice;
                    str = "Prices are Updated";
                }
                else if (opt == 10)
                {
                    newp = Winterprice;
                    str = "Prices are Updated";
                }
                else
                {
                    str = "No changes made!";
                }
            }
            else
            {
                gotoxy(91, 16);
                cout << "#                                            " << endl;
                gotoxy(91, 16);
                cout << "Invalid input!";
            }
        }
        else
        {
            gotoxy(91, 15);
            cout << "#                                            " << endl;
            gotoxy(91, 15);
            cout << "Invalid input!";
        }
    }

    else
    {
        str = "No changes made!";
    }
    // Bprice=8000;
    return str;
}
string duesadmin(int total[], string name[], string paymentstatus[])
{
    int j = 0;
    gotoxy(64, 14);
    cout << "Name\t\t\t          Dues";
    int x = 15;
    for (int i = 0; i < 100; i++)
    {
        if (total[i] != 0)
        {
            gotoxy(64, x);
            cout << i + 1 << ". " << name[i] << " " << total[i] << paymentstatus[i];
            x++;
        }
    }
    char ans;
    string str;
    gotoxy(64, 19);
    cout << "Do you want to Pay the charges(Y/N)?";
    cin >> ans;
    if (ans == 'Y' || ans == 'y')
    {
        bool rule = false;
        string answer;
        gotoxy(64, 20);
        cout << "Which user?(enter the name)?";
        getline(cin >> ws, answer);
        for (int k = 0; k < 100; k++)
        {
            if (answer == name[k])
            {
                paymentstatus[k] = "paid";
                rule = true;
            }
        }
        if (rule == false)
        {
            str = "User did not matched";
        }
        else
        {
            str = "changes made!";
        }
    }
    else
    {
        str = "No Changes Made!";
    }

    return str;
}
void duesstatus(string paymentstatus[])
{
    for (int i = 0; i < 100; i++)
    {
        paymentstatus[i] = "Unpaid";
    }
    cout << " ";
}
string useraccounts(string username[], string password[], string role[], string filename)
{
    int i = 0;
    writefile(filename, username, password, role);
    // readfilesignin(filename, username, password, role, i);
    gotoxy(64, 15);
    cout << "Users account are the following: ";
    int count = 1;
    int x = 16;
    for (int i = 0; i < 100; i++)
    {
        if (role[i] == "student")
        {
            gotoxy(64, x);
            cout << count << ". " << username[i] << "\t\t\t" << password[i] << endl;
            count++;
            x++;
        }
    }
    char ans;
    gotoxy(64, 20);
    cout << "Do you want to delete account?(Y/N)";
    cin >> ans;
    string str;
    if (ans == 'y' || ans == 'Y')
    {
        string userdel;
        gotoxy(64, 21);
        cout << "Enter the username of the account which you want to delete";
        getline(cin >> ws, userdel);
        bool rule = false;
        for (int i = 0; i < 90; i++)
        {

            if (username[i] == userdel && (role[i] == "student" || role[i] == "Student"))
            {
                username[i] = "";
                password[i] = "";
                role[i] = "";
                rule = true;
                str = "User account deleted!";
                break;
            }
        }
        if (rule == false)
        {
            str = "Invalid input";
        }
    }
    else
    {
        gotoxy(64, 21);
        cout << "Invalid input!";
        str = "No changes made!";
    }

    return str;
}
string changeadminpass(string username[], string password[], string checkuser)
{

    int j = 0;
    for (int i = 0; i < 100; i++)
    {
        if (checkuser == username[i])
        {
            j = i;
        }
    }
    string change;
    gotoxy(64, 16);
    cout << "What do you want to change?username or password type:(User/Pass): ";
    getline(cin >> ws, change);
    if (change == "User" || change == "Pass")
    {
        if (change == "User")
        {
            string passcode;
            string result;
            gotoxy(64, 17);
            cout << "Enter password to make change in username.";
            getline(cin >> ws, passcode);
            if (passcode == password[j])
            {
                gotoxy(64, 18);
                cout << "Enter the new username: ";
                getline(cin >> ws, result);
                username[j] = result;
            }
            else
            {
                gotoxy(64, 18);
                cout << "Wrong password.";
            }
        }
        else if (change == "Pass")
        {
            string passcode, pass;
            gotoxy(64, 17);
            cout << "Enter the old password";
            getline(cin >> ws, passcode);
            if (passcode == password[j])
            {
                while (true)
                {
                    gotoxy(60, 18);
                    cout << "#                                                                           # " << endl;
                    gotoxy(64, 18);
                    cout << "Enter the new Password: ";
                    getline(cin >> ws, pass);
                    if (checkcredentials(username[j], pass) == true)
                    {
                        password[j] = pass;
                        break;
                    }
                    else
                    {
                        gotoxy(60, 18);
                        cout << "#                                                                           # " << endl;
                        gotoxy(64, 18);
                        cout << "It should be a 4 digit pin code!";
                        continue;
                    }
                }
            }
            else
            {
                gotoxy(64, 18);
                cout << "Wrong password.";
            }
        }
        else
        {
            gotoxy(64, 17);
            cout << "Invalid input!";
        }
    }
    else
    {
        gotoxy(64, 17);
        cout << "Entered input is incorrect." << endl;
    }

    string account = "Changes have been made in the account";

    return account;
}
string complaints(string complaint[])
{
    int count = 0;
    string str;
    int x = 16;
    for (int i = 0; i < 100; i++)
    {
        if (complaint[i] != "")
        {
            gotoxy(64, x);
            cout << complaint[i];
            count++;
            x++;
        }
    }
    if (count > 0)
    {
        str = "These are all the complaints.";
    }
    else
    {
        str = "No complaints yet!";
    }
    return str;
}
string feeds(string feedbk[])
{
    int count = 0;
    string str;
    int x = 16;
    for (int i = 0; i < 100; i++)
    {
        if (feedbk[i] != "")
        {
            gotoxy(64, x);
            cout << feedbk[i];
            count++;
            x++;
        }
    }
    if (count > 0)
    {
        str = "These are all the feedbacks.";
    }
    else
    {
        str = "No feedbacks yet!";
    }
    return str;
}
void title()
{
    setcolor(1);
    gotoxy(14, 1);
    cout << R"(
        _____                    _ _            _    _           _       _     
        |  __ \                  | (_)          | |  | |         | |     | |    
        | |__) |_ _ _ __ __ _  __| |_ ___  ___  | |__| | ___  ___| |_ ___| |___ 
        |  ___/ _` | '__/ _` |/ _` | / __|/ _ \ |  __  |/ _ \/ __| __/ _ \ / __|
        | |  | (_| | | | (_| | (_| | \__ \  __/ | |  | | (_) \__ \ ||  __/ \__ \
        |_|   \__,_|_|  \__,_|\__,_|_|___/\___| |_|  |_|\___/|___/\__\___|_|___/
                                                                    )"
         << endl;
}
void printhead2()
{
    setcolor(6);
    gotoxy(60, 13);
    cout << "============================================================================= " << endl;
    gotoxy(60, 14);
    cout << "#                                                                           # " << endl;
    gotoxy(60, 15);
    cout << "#                                                                           # " << endl;
    gotoxy(60, 16);
    cout << "#                                                                           # " << endl;
    gotoxy(60, 17);
    cout << "#                                                                           # " << endl;
    gotoxy(60, 18);
    cout << "#                                                                           # " << endl;
    gotoxy(60, 19);
    cout << "#                                                                           # " << endl;
    gotoxy(60, 20);
    cout << "#                                                                           # " << endl;
    gotoxy(60, 21);
    cout << "#                                                                           # " << endl;
    gotoxy(60, 22);
    cout << "#                                                                           # " << endl;
    gotoxy(60, 23);
    cout << "#                                                                           # " << endl;
    gotoxy(60, 24);
    cout << "============================================================================= " << endl;
}

void erasefirstbox()
{
    gotoxy(6, 14);
    cout << "                                             " << endl;
    gotoxy(6, 15);
    cout << "                                             " << endl;
    gotoxy(6, 16);
    cout << "                                             " << endl;
    gotoxy(6, 17);
    cout << "                                             " << endl;
    gotoxy(6, 18);
    cout << "                                             " << endl;
    gotoxy(6, 19);
    cout << "                                             " << endl;
    gotoxy(6, 20);
    cout << "                                             " << endl;
    gotoxy(6, 21);
    cout << "                                             " << endl;
    gotoxy(6, 22);
    cout << "                                             " << endl;
    gotoxy(6, 23);
    cout << "                                             " << endl;
    gotoxy(6, 24);
    cout << "                                             " << endl;
    gotoxy(6, 25);
    cout << "                                             " << endl;
    gotoxy(6, 26);
    cout << "                                             " << endl;
}

bool checkcredentials(string username, string password)
{
    int size1 = username.length();
    int size2 = password.length();
    bool result = true;
    int count = 0;
    for (int i = 0; i < size1; i++)
    {
        if (username[i] == ' ')
        {
            count++;
        }
    }

    for (int j = 0; j < size2; j++)
    {
        if (password[j] == ' ')
        {
            count++;
        }
    }

    if (password.length() != 4)
    {
        count++;
    }
    int count55 = 0;

    if (password[0] == '0' || password[0] == '1' || password[0] == '2' || password[0] == '3' || password[0] == '4' || password[0] == '5' || password[0] == '6' || password[0] == '7' || password[0] == '8' || password[0] == '9')
    {
        count55++;
    }
    if (password[1] == '0' || password[1] == '1' || password[1] == '2' || password[1] == '3' || password[1] == '4' || password[1] == '5' || password[1] == '6' || password[1] == '7' || password[1] == '8' || password[1] == '9')
    {
        count55++;
    }
    if (password[2] == '0' || password[2] == '1' || password[2] == '2' || password[2] == '3' || password[2] == '4' || password[2] == '5' || password[2] == '6' || password[2] == '7' || password[2] == '8' || password[2] == '9')
    {
        count55++;
    }
    if (password[3] == '0' || password[3] == '1' || password[3] == '2' || password[3] == '3' || password[3] == '4' || password[3] == '5' || password[3] == '6' || password[3] == '7' || password[3] == '8' || password[3] == '9')
    {
        count55++;
    }
    if (count > 0 || count55 != 4)
    {
        result = false;
    }

    return result;
}
void erasebox2()
{
    gotoxy(60, 13);
    cout << "                                                                              " << endl;
    gotoxy(60, 14);
    cout << "                                                                              " << endl;
    gotoxy(60, 15);
    cout << "                                                                              " << endl;
    gotoxy(60, 16);
    cout << "                                                                              " << endl;
    gotoxy(60, 17);
    cout << "                                                                              " << endl;
    gotoxy(60, 18);
    cout << "                                                                              " << endl;
    gotoxy(60, 19);
    cout << "                                                                              " << endl;
    gotoxy(60, 20);
    cout << "                                                                              " << endl;
    gotoxy(60, 21);
    cout << "                                                                              " << endl;
    gotoxy(60, 22);
    cout << "                                                                              " << endl;
    gotoxy(60, 23);
    cout << "                                                                              " << endl;
    gotoxy(60, 24);
    cout << "                                                                              " << endl;
}

void eraseinside2()
{

    gotoxy(61, 13);
    cout << "                                                                            " << endl;
    gotoxy(61, 14);
    cout << "                                                                            " << endl;
    gotoxy(61, 15);
    cout << "                                                                            " << endl;
    gotoxy(61, 16);
    cout << "                                                                            " << endl;
    gotoxy(61, 17);
    cout << "                                                                            " << endl;
    gotoxy(61, 18);
    cout << "                                                                            " << endl;
    gotoxy(61, 19);
    cout << "                                                                            " << endl;
    gotoxy(61, 21);
    cout << "                                                                            " << endl;
    gotoxy(61, 21);
    cout << "                                                                            " << endl;
    gotoxy(61, 22);
    cout << "                                                                            " << endl;
}
void readfilesignin(string filename, string username[], string password[], string role[], int &i)
{
    fstream file;
    file.open(filename, ios::in);
    string line = "";
    int len = line.length();
    int passstart, rolestart;

    while (!(file.eof()))
    {
        getline(file, line);
        if (line != "")
        {
            username[i] = getField(line, 1);
            password[i] = getField(line, 2);
            role[i] = getField(line, 3);
            i++;
        }
    }

    /* cout<<"a";
     cout << username[0];
     cout << password[0];
     cout << role[0];
 */
}
void writefile(string filename, string username[], string password[], string role[])
{
    fstream file;
    file.open(filename, ios::out);
    for (int i = 0; i < 90; i++)
    {
        bool real = true;
        for (int j = i - 1; j >= 0; j--)
        {

            if (username[i] == username[j] && password[i] == password[j])
            {
                real = false;
                username[i] = "";
                password[i] = "";
                role[i] = "";
            }
        }

        if (username[i] != "" && real == true)
        {

            file << username[i] << "," << password[i] << "," << role[i] << endl;
        }
    }

    file.close();
}
string getField(string record, int field)
{
    int commaCount = 1;
    string item;
    for (int x = 0; x < record.length(); x++)
    {
        if (record[x] == ',')
        {
            commaCount = commaCount + 1;
        }
        else if (commaCount == field)
        {
            item = item + record[x];
        }
    }
    return item;
}
void writestufile(string filename, string name[], string fathername[], string phone[], string CNIC[], int roomrent[], int messfee[], int premium[], string feedbk[], string complaint[], int total[], string paymentstatus[], string username[], string role[], string category[])
{
    fstream file;
    file.open(filename, ios::out);
    for (int i = 0; i < 90; i++)
    {
        if ((role[i] == "student" || role[i] == "Student") && (name[i] != "" || fathername[i] != "" || CNIC[i] != ""))
        {
            file << username[i] << "," << name[i] << "," << fathername[i] << "," << phone[i] << "," << CNIC[i] << "," << roomrent[i] << "," << messfee[i] << "," << premium[i] << "," << feedbk[i] << "," << complaint[i] << "," << total[i] << "," << paymentstatus[i] << "," << category[i] << endl;
        }
    }

    file.close();
}
void readstufile(string filename, string name[], string fathername[], string phone[], string CNIC[], int roomrent[], int messfee[], int premium[], string feedbk[], string complaint[], int total[], string paymentstatus[], string username[], string role[], string category[])
{
    fstream file;
    file.open(filename, ios::in);
    string line = "";

    int i = 0;
    while (!(file.eof()))
    {
        getline(file, line);
        if (line != "")
        {
            username[i] = getField(line, 1);
            name[i] = getField(line, 2);
            fathername[i] = getField(line, 3);
            phone[i] = getField(line, 4);
            CNIC[i] = getField(line, 5);
            roomrent[i] = stoi(getField(line, 6));
            messfee[i] = stoi(getField(line, 7));
            premium[i] = stoi(getField(line, 8));
            feedbk[i] = getField(line, 9);
            complaint[i] = getField(line, 10);
            messfee[i] = stoi(getField(line, 11));
            paymentstatus[i] = getField(line, 12);
            category[i] = getField(line, 13);
            i++;
        }
    }
}
bool checknumber(string str)
{
    int len = str.length();
    bool result = false;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9')
        {
            result = true;
        }
    }
    return result;
}
string setcolor(unsigned short color){
    HANDLE hcon=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon,color);
    return "";
}
void eraseoutside()
{
    gotoxy(0, 14);
    cout << "     " << endl;
    gotoxy(0, 15);
    cout << "     " << endl;
    gotoxy(0, 16);
    cout << "     " << endl;
    gotoxy(0, 17);
    cout << "     " << endl;
    gotoxy(0, 18);
    cout << "     " << endl;
    gotoxy(0, 19);
    cout << "     " << endl;
    gotoxy(0, 20);
    cout << "     " << endl;
    gotoxy(0, 21);
    cout << "     " << endl;
    gotoxy(0, 22);
    cout << "     " << endl;
    gotoxy(0, 23);
    cout << "     " << endl;
    gotoxy(0, 24);
    cout << "     " << endl;
    gotoxy(0, 25);
    cout << "     " << endl;
    gotoxy(0, 26);
    cout << "     " << endl;
}
void erase3area()
{
    gotoxy(92, 14);
    cout << "                                                               " << endl;
    gotoxy(92, 15);
    cout << "                                                               " << endl;
    gotoxy(92, 16);
    cout << "                                                               " << endl;
    gotoxy(92, 17);
    cout << "                                                               " << endl;
    gotoxy(92, 18);
    cout << "                                                               " << endl;
    gotoxy(92, 19);
    cout << "                                                               " << endl;
    gotoxy(92, 20);
    cout << "                                                               " << endl;
    gotoxy(92, 21);
    cout << "                                                               " << endl;
    gotoxy(92, 22);
    cout << "                                                               " << endl;
    gotoxy(92, 23);
    cout << "                                                               " << endl;
    gotoxy(92, 24);
    cout << "                                                               " << endl;
    gotoxy(92, 25);
    cout << "                                                               " << endl;
    gotoxy(92, 26);
    cout << "                                                               " << endl;
}
