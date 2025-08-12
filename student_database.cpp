#include<iostream>
#include<string.h>
using namespace std;



class Student
{

private:

string name;
string middle;
string last;
string branch;
int roll;
long long dob;
char div;

public:

void info(string Name,string Mname,string Lname,string Branch,int Roll,long long DOB,char C)
{

name=Name;
middle=Mname;
last=Lname;
branch=Branch;
roll=Roll;
dob=DOB;
div=C;
}



 bool stdVerify(int ID,long long PASS)
    {
       if(ID==roll && PASS==dob)
       {
           return true;
       }
       else
       {
        return false;
       }
    }
void viewDetails()
{
    cout<<"_\n";
  
        cout<<"\n";      
        cout<<"\n_-) PERSONAL DATA (-\n\n";
   
cout<<"NAME:"<<name<<" "<<middle<<" "<<last<<endl;
cout<<"BRANCH:"<<branch<<endl;
cout<<"DIVISION:"<<div<<endl;
cout<<"ROLL NO:"<<roll<<endl;
cout<<"DATE OF BIRTH:"<<dob<<endl;
}

void dataresult(){

cout<<"NAME:"<<name<<" "<<middle<<" "<<last<<"\t"<<endl;
cout<<"BRANCH:"<<branch<<endl;
cout<<"DIVISION:"<<div<<"\t";
cout<<"ROLL NO:"<<roll<<"\t";
cout<<"DATE OF BIRTH:"<<dob<<endl<<endl;



}
void persoupdate(){
    cout<<"_\n";
    cout<<"ENTER THE DATA:"<<endl;
 cout<<"NAME:";
 cin>>name;   
 cout<<"MIDDLE NAME:";
 cin>>middle;
 cout<<"SURNAME:";
 cin>>last;
 cout<<"BRANCH:";
 cin>>branch;
 cout<<"DIVISON:";
 cin>>div;
 cout<<"ROLL NO:";
 cin>>roll;
 cout<<"DATE OF BIRTH:";
 cin>>dob;
 cout<<"\n-----DATA UPDATED SUCCESSFULY-----\n";
}
};

class AttendResult:public Student{
private:
float math,phy,chem,lang,oop;
int Amath,Aphy,Achem,Alang,Aoop;
public:

void examResult(){
    cout<<"\n_-) RESULT (-\n\n";
dataresult();
cout<<"MATHS:"<<math<<endl;
cout<<"PHYSICS:"<<phy<<endl;
cout<<"CHEMISTRY:"<<chem<<endl;
cout<<"LANGUAGE:"<<lang<<endl;
cout<<"OOP:"<<oop<<endl;
cout<<"PERCENTAGE: "<<(math+phy+chem+lang+oop)/250*100<<" %"<<endl;
}

void Attendance(){
cout<<"\n_-) ATTENDANCE (-\n\n";
cout<<"MATHS:"<<Amath<<endl;
cout<<"PHYSICS:"<<Aphy<<endl;
cout<<"CHEMISTRY:"<<Achem<<endl;
cout<<"LANGUAGE:"<<Alang<<endl;
cout<<"OOP:"<<Aoop<<endl;
}

void resultupdate(){
cout<<"_\n";
cout<<"ENTER MARKS:"<<endl;
cout<<"MATHS:";
cin>>math;
cout<<"PHYSICS:";
cin>>phy;
cout<<"CHEMISTRY:";
cin>>chem;
cout<<"LANGUAGE:";
cin>>lang;
cout<<"OOP:";
cin>>oop;
 cout<<"\n-----DATA UPDATED SUCCESSFULY-----\n";
}

void attendupdate()
{
    cout<<"_\n";
cout<<"ENTER ATTENDANCE:"<<endl;
cout<<"MATHS:";
cin>>Amath;
cout<<"PHYSICS:";
cin>>Aphy;
cout<<"CHEMISTRY:";
cin>>Achem;
cout<<"LANGUAGE:";
cin>>Alang;
cout<<"OOP:";
cin>>Aoop;
 cout<<"\n-----DATA UPDATED SUCCESSFULY-----\n";
}
};

class AdminLogin:public AttendResult
{
    public:
int ch;
     bool teaVerify(int ID,int PASS)
    {
       if(ID==1000 && PASS==1920)
       {
           return true;
       }
       else
       {
        return false;
       }
    }
     void updateinfo(){
        cout<<"_\n";
       cout<<"WHAT DO YOU WANT TO UPDATE ?"<<endl;
       cout<<"1.PERSONAL INFO:\n2.RESULT\n3.ATTENDANCE\n";
       cin>>ch;
       switch (ch)
       {
       case 1:
                persoupdate();
                break;
        case 2:
                resultupdate();
                break;
        case 3:
                attendupdate();
                break;
        default:
                cout<<"ENTER VALID CHOICE..!";
                break;
       }
     }

     void displayInfo(){
        viewDetails();
        examResult();
        Attendance();
     }

     void newentry(){
        cout<<"ENTER PERSONAL DATA:\n";
persoupdate();


     }
   
};

int main()
{
    AdminLogin A[500],B;
    A[01].info("Aditi","Rajendra","Aher","BCS",01,31052004,'F');

    cout<<"\n\n__KAANMS COLLEGE SATANA_\n";
    int choice;
    start:
    cout<<"_\n\n";
    cout<<"ENTER RESPECTIVE NUMBER:\n";
    cout<<"1.STUDENT'S LOGIN \n2.ADMINS LOGIN\n3.EXIT\n:";
    cin>>choice;
    switch (choice)
    {
    case 1:

        int id;
        int pass;
        cout<<"ENTER ID:";
        cin>>id;
        cout<<"PASSWORD:";
        cin>>pass;
       if (A[id].stdVerify(id,pass))
       {
        start1:
        cout<<"_\n";
           
        cout<<"\n1.VIEW DETAILS\n2.EXAM RESULT\n3.ATTENDANCE\n4.EXIT\n:";
        cin>>choice;
        switch (choice)
        {
        case 1:
            A[id].viewDetails();
             goto start1;

            break;
        case 2:

        A[id].examResult();
goto start1;
         break;

        case 3:

        A[id].Attendance();
        goto start1;
        break;

        case 4:

        goto start;


        default:

          cout<<"ENTER VALID CHOICE..!";

        

            break;
        }
       }

       else
       {
             cout<<"\n\"NO SUCH DATA EXIT\"\n";
             goto start;
       }
       
        break;

    case 2:
    int i,p;
    start2 :
    cout<<"ENTER ID:";
    cin>>i;
    cout<<"PASSWORD:";
    cin>>p;
     if(B.teaVerify(i,p))
     {
        start3:
        cout<<"_\n\n";
  
        cout<<"1.VIEW STUDENT DETAILS\n2.UPDATE DATA\n3.NEW ENTRY\n4.EXIT\n:";
        cin>>choice;
        switch(choice)
        {
            case 1:
            int b;
            cout<<"ENTER STUDENTS ROLL NO:";
            cin>>b;
            A[b].displayInfo();
goto start3;
            break;

            case 2:
            
            cout<<"ENTER STUDENTS ROLL NO:";
            cin>>b;
            A[b].updateinfo();
goto start3;
            break;

            case 3:
            int ID;
            cout<<"_\n";
            cout<<"ENTER NEW STUDENTS DETAILS:"<<endl;
            cout<<"ENTER ROLL NO:";
            cin>>ID;

            A[ID].newentry();
            goto start3;
            break;
                 
            
            case 4:

             goto start;
             default:

             cout<<"ENTER VALID CHOICE..!";
goto start2;
             break;


        }
     }

     else
     {
        cout<<"WRONG CREDENTIALS\n";
        goto start2;
     }

    case 3:
    cout<<"\n--------THANK YOU FOR USING OUR PROGRAM-------\n";
    cout<<"\n--------PROGRAM TERMINATED SUCCESSFULLY-------\n\n";
    exit(0);
        
    default:
    cout<<"ENTER VALID CHOICE..!";
        break;
    }

    return 0;
}