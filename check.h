#pragma once
#include<iostream>
#include<fstream>

#include  "Utility.h"
#include "reset.h"
using namespace std;

class check{
private:
    
    string filename2;
    string filepass2;
    string skip2;
    bool found3=false;
    bool found4=false;
public:

    bool checkdetail(string name,string passward){

        ifstream file2("Student.txt");
        ifstream file3("Admin.txt");

        while(getline(file2,filename2) && getline(file2,filepass2)){

            if(filename2 == name && filepass2 == passward){
            	clearConsole();
                cout<<"Login Successfully!!!!"<<endl;
                found3=true;
                break;
            }


        }

        

        while(getline(file3,filename2) && getline(file3,filepass2)){
            getline(file3, skip2); // skip ID
            getline(file3, skip2); // skip email

            if(filename2 == name && filepass2 == passward){
            	clearConsole();
                cout<<"Login Successfully!!!!"<<endl;
                found4=true;
                break;
            }

        }

        if(found4 || found3){
            return true;
        }

        return false;
}
};