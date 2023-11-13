#include<iostream>
#include<fstream>
#include<cstdlib>
#include<conio.h>
#include<time.h>
#include<iomanip>
#include "user.h"
using namespace std;
int main()
{
    int choi=0;
    user ob;
    patient ob2;
//time ( &rawtime );
//timeinfo = localtime ( &rawtime );
    cout<<"\n\n\n\n\n\n\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout<<"\t\t@@ _______________________________________________________________________________________ @@\n";
    cout<<"\t\t@@|                                           		                                  |@@\n";
    cout<<"\t\t@@|                                           		                                  |@@\n";
    cout<<"\t\t@@|                                           		                                  |@@\n";
    cout<<"\t\t@@|                                           		                                  |@@\n";
    cout<<"\t\t@@|                                           		                                  |@@\n";
    cout<<"\t\t@@|                                           		                                  |@@\n";
    cout<<"\t\t@@|                                  WELCOME TO                                           |@@\n";
    cout<<"\t\t@@|                                                                                       |@@\n";
    cout<<"\t\t@@|                         RAJSHAHI MEDICAL COLLEGE HOSPITAL                             |@@\n";
    cout<<"\t\t@@|                                                                                       |@@\n";
    cout<<"\t\t@@|                                                                                       |@@\n";
    cout<<"\t\t@@|                                                                                       |@@\n";
    cout<<"\t\t@@|                                                                                       |@@\n";
    cout<<"\t\t@@|                                                                                       |@@\n";
    cout<<"\t\t@@|_______________________________________________________________________________________|@@\n";
    cout<<"\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\t\t";
    system("pause");
    system("cls");
b:
    choi=ob.option();
    system("cls");
    if(choi==1)
    {
        ob.regi();
        system("pause");
        system("cls");
        goto b;
    }
    else if(choi==2)
    {
        ob.log();
        system("cls");
        goto b;
    }
    else if(choi==3)
    {
        system("cls");
        cout<<"\n\n\n\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
        cout<<"\t\t@@ _______________________________________________________________________________________ @@\n";
        cout<<"\t\t@@|                                           		                                  |@@\n";
        cout<<"\t\t@@|                                           		                                  |@@\n";
        cout<<"\t\t@@|                                           		                                  |@@\n";
        cout<<"\t\t@@|                                           		                                  |@@\n";
        cout<<"\t\t@@|                                           		                                  |@@\n";
        cout<<"\t\t@@|                               THANK YOU                                               |@@\n";
        cout<<"\t\t@@|                                                                                       |@@\n";
        cout<<"\t\t@@|                                                                                       |@@\n";
        cout<<"\t\t@@|                                                                                       |@@\n";
        cout<<"\t\t@@|                                                                                       |@@\n";
        cout<<"\t\t@@|_______________________________________________________________________________________|@@\n";
        cout<<"\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\t\t";
    }
}
