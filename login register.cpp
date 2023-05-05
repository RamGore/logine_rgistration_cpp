#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
 void login();
 void registration();
 void forgot();



 int main()
 {
     int c;

     cout<<"\t\t\t______________________________________________\n\n\n";
     cout<<"\t\t\t          Welcome to Login page          \n\n\n";
     cout<<"\t\t\t__________         MENU     ______________ \n\n";

     cout<<"\t| Press 1 to LOGIN      |"<<endl;
     cout<<"\t| Press 2 to REGISTER   |"<<endl;
     cout<<"\t| Press 3 to FORGOT     |"<<endl;
     cout<<"\t| Press 4 to EXIT       |"<<endl;
     cout<<"\n\t\t\tPlease Enter your choice : ";
     cin>>c;
     cout<<endl;

     switch(c)
     {
     case 1:
         login();
         break;

     case 2:
         registration();
         break;

     case 3:
         forgot();
         break;

     case 4:
         cout<<"\t\t\t ThankYou ! \n\n";
         break;

     default:
       //system("cls");
        cout<<"\t\t\t Please select from the option given above"<<endl;
        main();
     }
 }



 void login()
 {
     int count;
     string userId , password , id , pass;
     system("cls");
     cout<<"\t\t\t Please enter the user name and password : "<<endl;
     cout<<"\t\t\t USERNSME ";
     cin>>userId;
     cout<<"\t\t\t PASSWORD ";
     cin>>password;

     ifstream input("record.txt");
     while(input>>id>>pass)
     {
         if(id==userId && pass==password)
         {
             count=1;
             system("cls");

         }
     }
     input.close();
     if(count ==1)
        {
            cout<<userId<<"\n your LOGIN is suceesfull\n Thank for login\n";
                main();
        }
     else{
        cout<<"\nLOGIN ERROR\n please check your username and password\n";
     }

 }
 void registration()
 {
     string ruserId ,rpassword,rId,rpass;
     system("cls");
     cout<<"\t\t\t Please enter the USERNAME  : ";
     cin>>ruserId;
     cout<<"\t\t\t Enter PASSWORD: ";
     cin>>rpassword;

     fstream f1("record.txt",ios::app);
     f1<<ruserId<<' '<<rpassword<<endl;
     system("cls");
     cout<<"\n\t\t\t Registration is succesfull!! \n";
     main();


 }
 void forgot()
 {
     int option;
     system("cls");
     cout<<"\t\t\t you forgot the password No worries \n";
     cout<<"press 1 to search your id by username"<<endl;
     cout<<"press 2 to go back to main manu"<<endl;
     cout<<"\t\t\t Enter your choice :";
     cin>>option;

     switch(option)
     {
     case 1:
         {
        int count=0;
        string suserId,sId,spass;
        cout<<"\n\t\t\t Enter  Username which you Remebered: ";
        cin>>suserId;
        ifstream f2("record.txt");
        while(f2>>sId>>spass)
        {
            if(sId==suserId)
               {
                   count=1;
               }
        }
        f2.close();
        if(count==1)
        {
            cout<<"\n\n Your account is found \n";
            cout<<"\n\n your password is :"<<spass;
            main();
        }
        else{
            cout<<"sorry ! your account is not found! \n";
            main();
        }
        break;

     }
     case 2:
        {
            main();
        }
     default:
        cout<<"\t\t\t Wrong choice ! Please try again "<<endl;
        forgot();


 }
 }




