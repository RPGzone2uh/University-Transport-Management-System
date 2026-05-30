#pragma once
#include<iostream>
#include<fstream>

#include "StudentPanel.h"
#include "AdminPanel.h"
#include  "Utility.h"
#include "reset.h"

using namespace std;

int choose;

class Login{
private:
    string inputname,storename;
    string inputpass,storepass;
    string filename;
    string filepass;
    string skip;
    bool found=false;
    bool found1=false;
public:
    Login() {
        cout<<"==============="<<endl;
        cout<<"|   LOGIN     |"<<endl;
        cout<<"==============="<<endl;
        cout<<"Welcome!! Please enter your Credentials"<<endl;
    }

    void detail(){

        ifstream file("Student.txt");
        ifstream file1("Admin.txt");

        cout<<"Name: ";
        getline(cin,inputname);
        cout<<"Password: ";
        getline(cin,inputpass);

        
        
        while(getline(file,filename) && getline(file,filepass)){

            if(filename == inputname && filepass == inputpass){
            	clearConsole();
                cout<<"Login Successfully!!!!"<<endl;
                found=true;
                break;
            }


        }

        

        while(getline(file1,filename) && getline(file1,filepass)){
            getline(file1, skip); // skip ID
            getline(file1, skip); // skip email

            if(filename == inputname && filepass == inputpass){
            	clearConsole();
                cout<<"Login Successfully!!!!"<<endl;
                found1=true;
                break;
            }

        }

        if(!found && !found1){
        	clearConsole();
            cout<<inputname<<" is not registered"<<endl;
            restartProgram();
        }

        if(found){
                StudentPanel SP;
                SP.Display();
        }
        
        else if(found1){
                AdminPanel A;
                A.Display();
        }

        
    }

    void store(){
        storename=inputname;
        storepass=inputpass;
        cout<<"Name: "<<storename<<endl;
    }
};