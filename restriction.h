#pragma once
#include<iostream>
#include<fstream>

#include  "Utility.h"
#include "reset.h"
using namespace std;
class restriction{
private:
string inputname1;
string inputpass1;
string filename1;
string filepass1;
string skip1;
bool found2=false;
public:
bool restr(){

    ifstream file1("Admin.txt");

    cout<<"Name: ";
    getline(cin,inputname1);
    cout<<"Password: ";
    getline(cin,inputpass1);
    
    while(getline(file1,filename1) && getline(file1,filepass1)){
        getline(file1, skip1); // skip ID
        getline(file1, skip1); // skip email

        if(filename1 == inputname1 && filepass1 == inputpass1){
        	clearConsole();
            cout<<"Login Successfully!!!!"<<endl;
            found2=true;
            break;
        }

    }

    if(!found2){
    	clearConsole();
        cout<<inputname1<<" is not an admin"<<endl;
        restartProgram();
        return false;
    }

    return true;
   }
};