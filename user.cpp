#include<iostream>
#include<fstream>
#include<string.h>
#include<cstdlib>
#include<conio.h>
#include<time.h>
#include<iomanip>
#include "user.h"
using namespace std;
user::user()
{

}
doctor::doctor()
{

};
patient::patient()
{

};
room::room()
{

};
user::~user()
{

}
doctor::~doctor()
{

};
patient::~patient()
{

};
room::~room()
{

};
int user::option()
{
    int x;
    cout<<"\n\n\n\n\n\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
    cout<<"\n\n\t\tPlease,  Choose from the following Options: \n\n";
    cout<<"\t\t ________________________________________________\n";
    cout<<"\t\t|                                           	 |\n";
    cout<<"\t\t|             1  >> Registration                 |\n";
    cout<<"\t\t|             2  >> Login                        |\n";
    cout<<"\t\t|             3  >> Exit the Program             |\n";
    cout<<"\t\t|________________________________________________|\n\n";
a:
    cout<<"\t\tEnter your choice: ";
    cin>>x;
    if(x>3||x<1)
    {
        cout<<"\n\n\t\tInvalid Choice\n";
        cout<<"\t\tTry again...........\n\n";
        goto a;
    }
    return x;
}
void user::regi()
{
    ofstream myFile;
    char id[100],pass[100];
    int cnt=0;
    cout<<"\n\n\n\n\n\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
    cout<<"\t\t\t------------------------------";
    cout<<"\n\t\t\t        REGISTRATION \n";
    cout<<"\t\t\t------------------------------\n\n";
    cout<<"\n\n\t\t        Enter your ID: ";
    cin>>id;
    cout<<"\n\n\t\t        Enter password: ";
    char ch = _getch();
    while(ch != 13)
    {
        pass[cnt]=ch;
        cout << '*';
        ch = _getch();
        cnt++;
    }
    pass[cnt]='\0';
    cout<<"\n\n\t\t            Registration Completed Successfully!\n\n";
    strcat(id,".bin");
    myFile.open (id, ios::out | ios::binary);
    myFile.write (pass,100);
    myFile.close();
}
void user::log()
{
    user ob;
    ifstream myFile;
    char id[100],pass[100],pass2[100];
a:
    cout<<"\n\n\n\n\n\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
    cout<<"\t\t\t------------------------------";
    cout<<"\n\t\t\t            LOGIN \n";
    cout<<"\t\t\t------------------------------\n\n";
    cout<<"\n\n\t\t        Enter your ID: ";
    cin>>id;
    strcat(id,".bin");
    myFile.open (id, ios::in | ios::binary);
    if(myFile.fail())
    {
        cout<<"\n\n\t\t            Invalid User\n\n";
        system("pause");
        system("cls");
        goto a;
    }
    myFile.read (pass,100);
    myFile.close();
    cout<<"\n\n\t\t        Enter password: ";
    int cnt=0;
    char ch = _getch();
    while(ch != 13)
    {
        pass2[cnt]=ch;
        cout << '*';
        ch = _getch();
        cnt++;
    }
    pass2[cnt]='\0';
    if(strcmp(pass,pass2)==0)
    {
        cout << "\n\n\t\t\t\tAccess Granted! \n";
        ob.opt();
    }
    else
    {
        cout << "\n\n\t\t\t\tInvalid Password\n\n";
        system("pause");
        system("cls");
        goto a;
    }
}
void user::opt()
{
b:
    system("cls");
    int x;
    cout<<"\n\n\n\n\n\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
    cout<<"\n\n\t\tPlease,  Choose from the following Options: \n\n";
    cout<<"\t\t ________________________________________________ \n";
    cout<<"\t\t|                                           	 |\n";
    cout<<"\t\t|             1  >> Doctor                       |\n";
    cout<<"\t\t|             2  >> Patient                      |\n";
    cout<<"\t\t|             3  >> Room                         |\n";
    cout<<"\t\t|             4  >> Exit the Program             |\n";
    cout<<"\t\t|________________________________________________|\n\n";
a:
    cout<<"\t\tEnter your choice: ";
    cin>>x;
    if(x>4||x<1)
    {
        cout<<"\n\n\t\tInvalid Choice\n";
        cout<<"\t\tTry again...........\n\n";
        goto a;
    }
    if(x==4)
    {
        return;
    }
    else if(x==3)
    {
        room ob3;
        ob3.opt();
        goto b;
    }
    else if(x==1)
    {
        doctor ob1;
        ob1.opt();
        goto b;
    }
    else if(x==2)
    {
        patient ob1;
        ob1.opt();
        goto b;

    }

}
void room::opt()
{
b:
    system("cls");
    int x;
    cout<<"\n\n\n\n\n\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
    cout<<"\t\t\t------------------------------";
    cout<<"\n\t\t\t            ROOM  \n";
    cout<<"\t\t\t------------------------------\n\n";
    cout<<"\n\n\t\tPlease,  Choose from the following Options: \n\n";
    cout<<"\t\t ________________________________________________\n";
    cout<<"\t\t|                                                |\n";
    cout<<"\t\t|             1  >> View Information             |\n";
    cout<<"\t\t|             2  >> Add Information              |\n";
    cout<<"\t\t|             3  >> Exit the Program             |\n";
    cout<<"\t\t|________________________________________________|\n\n";
a:
    cout<<"\t\tEnter your choice: ";
    cin>>x;
    if(x>3||x<1)
    {
        cout<<"\n\n\t\tInvalid Choice\n";
        cout<<"\t\tTry again...........\n\n";
        goto a;
    }
    if(x==3)
    {
        return;
    }
    if(x==2)
    {
        room ob3;
        ob3.info();
        goto b;
    }
    if(x==1)
    {
        room ob3;
        ob3.view();
        goto b;
    }
}
void room::info()
{
    system("cls");
    ofstream myFile;
    char num[100],typ[100];
    cout<<"\n\n\n\n\n\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
    cout<<"\t\t\t------------------------------";
    cout<<"\n\t\t\t       Add Information  \n";
    cout<<"\t\t\t------------------------------\n\n";
    cout<<"\n\n\t\t        Enter Room No. : ";
    cin>>num;
    strcat(num,".bin");
    myFile.open (num, ios::out | ios::binary);
    cout<<"\n*****************************************************************\n";
    cout<<"\n\n\t\t        Enter Room Type : ";
    cin>>typ;
    myFile.write (typ,strlen(typ));
    myFile.close();
    cout<<"\n*****************************************************************\n";
    cout<<"\n\n\t\t            Information Added Successfully!\n\n";
    system("pause");
}
void room::view()
{
    system("cls");
    ifstream myFile;
    char num[100],typ[100];
    a:
    cout<<"\n\n\n\n\n\t\t\t         HOSPITAL MANAGEMENT SYSTEM \n\n";
    cout<<"\t\t\t------------------------------------------------------------";
    cout<<"\n\t\t\t                     View Information  \n";
    cout<<"\t\t\t------------------------------------------------------------\n\n";
    cout<<"\n\n\t\t         Enter Room No. : ";
    cin>>num;
    strcat(num,".bin");
    myFile.open (num, ios::in | ios::binary);
    if(myFile.fail())
    {
        cout<<"\n\n\t\t           Room Doesn't Exist.Try again\n\n";
        system("pause");
        system("cls");
        goto a;
    }
    myFile.read (typ,100);
    myFile.close();
    cout<<"\n*****************************************************************\n";
    cout<<"\n\n\t\t         Type of room   : "<<typ<<"\n\n";
    cout<<"\n*****************************************************************\n";
    system("pause");
}
void doctor::info()
{
    system("cls");
    ofstream myFile;
    char name[100],id[100],gender[2],no[100],department[100],age[100];
    cout<<"\n\n\n\n\n\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
    cout<<"\t\t\t------------------------------";
    cout<<"\n\t\t\t       Add Information  \n";
    cout<<"\t\t\t------------------------------\n\n";
    cout<<"\n\n\t\t      Enter ID        : ";
    cin>>id;
    getchar();
    cout<<"\n*****************************************************************\n";
    strcat(id,".bin");
    myFile.open (id, ios::out | ios::binary);
    cout<<"\n\n\t\t      Enter Name      : ";
    gets(name);
    myFile.write (name,strlen(name));
    myFile.write ("\n",1);
    cout<<"\n\n\t\t      Enter age       : ";
    cin>>age;
    myFile.write (age,strlen(age));
    myFile.write ("\n",1);
    cout<<"\n\n\t\t      Enter gender    : ";
    cin>>gender;
    myFile.write (gender,strlen(gender));
    myFile.write ("\n",1);
    cout<<"\n\n\t\t      Contact no.     : ";
    cin>>no;
    myFile.write (no,strlen(no));
    myFile.write ("\n",1);
    cout<<"\n\n\t\t      Enter Department: ";
    cin>>department;
    myFile.write (department,strlen(department));
    myFile.close();
    cout<<"\n*****************************************************************\n";
    cout<<"\n\n\t\t            Information Added Successfully!\n\n";
    system("pause");
}
void doctor::opt()
{
b:
    system("cls");
    int x;
    cout<<"\n\n\n\n\n\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
    cout<<"\t\t\t------------------------------";
    cout<<"\n\t\t\t            DOCTOR  \n";
    cout<<"\t\t\t------------------------------\n\n";
    cout<<"\n\n\t\tPlease,  Choose from the following Options: \n\n";
    cout<<"\t\t ________________________________________________\n";
    cout<<"\t\t|                                                |\n";
    cout<<"\t\t|             1  >> View Information             |\n";
    cout<<"\t\t|             2  >> Add Information              |\n";
    cout<<"\t\t|             3  >> Exit the Program             |\n";
    cout<<"\t\t|________________________________________________|\n\n";
a:
    cout<<"\t\tEnter your choice: ";
    cin>>x;
    if(x>3||x<1)
    {
        cout<<"\n\n\t\tInvalid Choice\n";
        cout<<"\t\tTry again...........\n\n";
        goto a;
    }
    if(x==3)
    {
        return;
    }
    if(x==2)
    {
        doctor ob3;
        ob3.info();
        goto b;
    }
    if(x==1)
    {
        doctor ob3;
        ob3.view();
        goto b;
    }
}
void doctor::view()
{
    system("cls");
    ifstream myFile;
    string name,age,gender,department,no;
    char big[100],id[100];
a:
    cout<<"\n\n\n\n\n\t\t\t         HOSPITAL MANAGEMENT SYSTEM \n\n";
    cout<<"\t\t\t------------------------------------------------------------";
    cout<<"\n\t\t\t                     View Information  \n";
    cout<<"\t\t\t------------------------------------------------------------\n\n";
    cout<<"\n\n\t\t         Enter ID: ";
    cin>>id;
    cout<<"\n*****************************************************************\n";
    strcat(id,".bin");
    myFile.open (id, ios::in | ios::binary);
    if(myFile.fail())
    {
        cout<<"\n\n\t\t        Doctor ID Doesn't Exist.Try again\n\n";
        system("pause");
        system("cls");
        goto a;
    }
    myFile.read (big,100);
    myFile.close();
    int i=0,nam=0,ag=0,ge=0,n=0;
    while(i<100 && ((big[i]>='a' && big[i]<='z')||(big[i]>='A' && big[i]<='Z')||(big[i]>='0' && big[i]<='9')||big[i]=='\n'||big[i]==' '))
    {
        if(nam==0)
        {
            if(big[i]=='\n')
            {
                nam=1;
            }
            else
            {
                name.push_back(big[i]);
            }
        }
        else if(ag==0)
        {
            if(big[i]=='\n')
            {
                ag=1;
            }
            else
            {
                age.push_back(big[i]);
            }
        }
        else if(ge==0)
        {
            if(big[i]=='\n')
            {
                ge=1;
            }
            else
            {
                gender.push_back(big[i]);
            }
        }
        else if(n==0)
        {
            if(big[i]=='\n')
            {
                n=1;
            }
            else
            {
                no.push_back(big[i]);
            }
        }
        else
        {
                department.push_back(big[i]);
        }

      i++;
    }
    cout<<"\n\n\t\t         Name of Doctor: "<<name<<"\n\n";
    cout<<"\n\n\t\t         Age of Doctor: "<<age<<"\n\n";
    cout<<"\n\n\t\t         Gender of Doctor: "<<gender<<"\n\n";
    cout<<"\n\n\t\t         Contact of Doctor: "<<no<<"\n\n";
    cout<<"\n\n\t\t         Department of Doctor: "<<department<<"\n\n";
    cout<<"\n*****************************************************************\n";
    system("pause");
}
void patient::opt()
{
b:
    system("cls");
    int x;
    cout<<"\n\n\n\n\n\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
    cout<<"\t\t\t------------------------------";
    cout<<"\n\t\t\t            PATIENT       \n";
    cout<<"\t\t\t------------------------------\n\n";
    cout<<"\n\n\t\tPlease,  Choose from the following Options: \n\n";
    cout<<"\t\t ________________________________________________\n";
    cout<<"\t\t|                                                |\n";
    cout<<"\t\t|             1  >> View Information             |\n";
    cout<<"\t\t|             2  >> Add Information              |\n";
    cout<<"\t\t|             3  >> Exit the Program             |\n";
    cout<<"\t\t|________________________________________________|\n\n";
a:
    cout<<"\t\tEnter your choice: ";
    cin>>x;
    if(x>3||x<1)
    {
        cout<<"\n\n\t\tInvalid Choice\n";
        cout<<"\t\tTry again...........\n\n";
        goto a;
    }
    if(x==3)
    {
        return;
    }
    if(x==2)
    {
        patient ob3;
        ob3.info();
        goto b;
    }
    if(x==1)
    {
        patient ob3;
        ob3.view();
        goto b;
    }
}
void patient::info()
{
    system("cls");
    ofstream myFile;
    char name[100],address[100],contact[100],age[100],sex[2],blood_gp[3],disease_past[50],id[15];
    cout<<"\n\n\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
    cout<<"\t\t\t------------------------------";
    cout<<"\n\t\t\t       Add Information  \n";
    cout<<"\t\t\t------------------------------\n\n";
    cout<<"\n\n\t\t      Enter ID        : ";
    cin>>id;
    getchar();
    cout<<"\n*****************************************************************\n";
    strcat(id,".bin");
    myFile.open (id, ios::out | ios::binary);
    cout<<"\n\n\t\t      Enter Name   : ";
    gets(name);
    myFile.write (name,strlen(name));
    myFile.write ("\n",1);
    cout<<"\n\n\t\t      Enter Address: ";
    gets(address);
    myFile.write (address,strlen(address));
    myFile.write ("\n",1);
    cout<<"\n\n\t\t      Contact no.  : ";
    cin>>contact;
    myFile.write (contact,strlen(contact));
    myFile.write ("\n",1);
    cout<<"\n\n\t\t      Age          : ";
    cin>>age;
    myFile.write (age,strlen(age));
    myFile.write ("\n",1);
    cout<<"\n\n\t\t      Sex          : ";
    cin>>sex;
    myFile.write (sex,strlen(sex));
    myFile.write ("\n",1);
    cout<<"\n\n\t\t      Blood group  : ";
    cin>>blood_gp;
    myFile.write (blood_gp,strlen(blood_gp));
    myFile.write ("\n",1);
    cout<<"\n\n\t\t      Disease past : ";
    cin>>disease_past;
    myFile.write (disease_past,strlen(disease_past));
    myFile.write ("\n",1);
    myFile.close();
    cout<<"\n*****************************************************************\n";
    cout<<"\n\n\t\t            Information Added Successfully!\n\n";
    system("pause");
}
void patient::view()
{
    system("cls");
    ifstream myFile;
    string name,address,contact,age,sex,blood_gp,disease_past;
    char big[500],id[100];
a:
    cout<<"\n\t\t\t                  HOSPITAL MANAGEMENT SYSTEM \n\n";
    cout<<"\t\t\t------------------------------------------------------------";
    cout<<"\n\t\t\t                     View Information  \n";
    cout<<"\t\t\t------------------------------------------------------------\n\n";
    cout<<"\n\t\t         Enter ID: ";
    cin>>id;
    cout<<"\n*****************************************************************\n";
    strcat(id,".bin");
    myFile.open (id, ios::in | ios::binary);
    if(myFile.fail())
    {
        cout<<"\n\n\t\t        Doctor ID Doesn't Exist.Try again\n\n";
        system("pause");
        system("cls");
        goto a;
    }
    myFile.read (big,500);
    myFile.close();
    int i=0,nam=0,ad=0,n=0,ag=0,ge=0,bl=0,di=0;
    while(i<500 && ((big[i]>='a' && big[i]<='z')||(big[i]>='A' && big[i]<='Z')||(big[i]>='0' && big[i]<='9')||big[i]=='\n'||big[i]==' '||big[i]==','||big[i]=='.'||big[i]=='/'||big[i]=='-'||big[i]=='+'||big[i]=='-'))
    {
        if(nam==0)
        {
            if(big[i]=='\n')
            {
                nam=1;
            }
            else
            {
                name.push_back(big[i]);
            }
        }
        else if(ad==0)
        {
            if(big[i]=='\n')
            {
                ad=1;
            }
            else
            {
                address.push_back(big[i]);
            }
        }
          else if(n==0)
        {
            if(big[i]=='\n')
            {
                n=1;
            }
            else
            {
                contact.push_back(big[i]);
            }
        }
        else if(ag==0)
        {
            if(big[i]=='\n')
            {
                ag=1;
            }
            else
            {
                age.push_back(big[i]);
            }
        }
        else if(ge==0)
        {
            if(big[i]=='\n')
            {
                ge=1;
            }
            else
            {
                sex.push_back(big[i]);
            }
        }
          else if(bl==0)
        {
            if(big[i]=='\n')
            {
                bl=1;
            }
            else
            {
                blood_gp.push_back(big[i]);
            }
        }
        else
        {
                disease_past.push_back(big[i]);
        }

      i++;
    }
    cout<<"\n\n\t\t         Name of Patient: "<<name<<"\n";
    cout<<"\n\n\t\t         Addresss       : "<<address<<"\n";
    cout<<"\n\n\t\t         Contact        : "<<contact<<"\n";
    cout<<"\n\n\t\t         Age            : "<<age<<"\n";
    cout<<"\n\n\t\t         Sex            : "<<sex<<"\n";
    cout<<"\n\n\t\t         Blood Group    : "<<blood_gp<<"\n";
    cout<<"\n\n\t\t         Past Disease   : "<<disease_past;
    cout<<"\n*****************************************************************\n";
    system("pause");
}
