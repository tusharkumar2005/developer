#include <iostream>
#include<istream>
#include<fstream>
#include<string.h>
using namespace std;

void login();
void registr();
void forgot();

 main(){

    int choice;
    cout<<'**************** Login Hear ****************\n';
    cout <<"1.Login";
    cout <<"\n2.Register";
    cout <<"\n3.Forgot credentials";
    cout <<"\n Enter Your choice :";
    cin>> choice;
    switch (choice)
    {
    case 1:
       login();
        break;
     case 2:
      registr
        break;
    
     case 3:
      forgot
        break;
    
     case 4:
       cout<<"Thanks for using the login page";
        break;

    default:
        cout<<"sorry,wrog choice selected\n";
        
        main();
    }
    
}
void registr(){

string reguser,regpass;
system("cls");

cout<<"Enter the username :";
cin>>reguser;
cout<<"Enter the password :";
cin>>reguser;

ofstream reg("database.txt", ios::app);
reg<<reguser<<' '<<regpass<<endl;
system("cls");
cout<<"Registration is successfull\n";
main();
}

void login(){

    int exist;
    string user,pass,u,p;
    system("cls");
    cout<<"Enter the username :";
    cin >>user;
    cout<<"Enter the password :";
    cin>>pass;

    ifstream input("database.txt");

    while (input>>u>>p)
    {
        if(u== user && p == pass){
            exit = 1;
        }
    }
    input.close();
    if(exist == 1){

        cout<<"Hello "<<user<<"\nWe're glad that you're hear\n";
        cin.get();
        cin.get();
        main();
    }
    else
    {
        cout<<"Sorry,Login Error. ";
        cin.get();
        cin.get();
        main();
    }
    

}

void forgot(){

    int ch;
    system("cls");
    cout<<"1.Search your account by username ";
    cout<<"\n2.Search your account by password ";
    cout<<"\n3.mainmeanu";
    cout<<"\nEnter your choice :";
    cin>>ch;

    switch (ch)
    {
    case 1:
    {
        int ex =0;
        string searchusre ,su,sp;
        cout<<"Enter your remenbered username :";
        cin>searchsuer;

        ifstream searchu("database.txt");
        while(searchu>>su>>sp){
            if (su == searchusre){
                ex =1;
                break;
            }
        }

        search.close();
        if (ex == 1){

            cout<<"hurray ! THE ACCOUNT FOUND\n";
            cout<<"YOUR USERNAME IS :"<<su2;
            cout<<"\nYOUR PASSWORD IS :"<<Sp2;
            cin.get();
            cin.get();
            main();

        }
        else{
            cout<<"sorry,your accout is not found \n";
            cin.get();
            cin.get();
            main();
        }
        break;
    }
    case 2:
    {
        int exi = 0;
        string searchpass ,su2,sp2;
        cout <<"enter the remember password : ";
        cin>>searchpass;

        ifstream searchup("database.txt");
        while (searchp>>su2>>sp2)   
        {
          if(sp2 == searchpass){
              exi = 1;
              break;
          }
        }
        searchp.close();
        if (ex == 1){

            cout<<"hurray ! THE ACCOUNT FOUND\n";
            cout<<"YOUR USERNAME IS :"<<su2;
            cout<<"\nYOUR PASSWORD IS :"<<Sp2;
            cin.get();
            cin.get();
            main();
        }
        break ;
    }    
    case 3:
    {
         main();
         break;
        }
        default:
        {
            cout<<"you have given a wrong choice. press a key to try again.";
            cin.get();
            cin.get();
            forgot();
        }


    }

}





