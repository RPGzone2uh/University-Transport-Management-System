#include<iostream>
#pragma once

using namespace std;

class User{
protected:
    string name;
    int ID;
    string passward;

public:
    void Info() {

        cout<<"Enter name: "<<endl;
        cout<<"============"<<endl;
        getline(cin,name);
        cout<<"            "<<endl;
        

        cout<<"Enter password: "<<endl;
        cout<<"================"<<endl;
        getline(cin,passward);
        cout<<"             "<<endl;
        
        cout<<"Enter ID: "<<endl;
        cout<<"=========="<<endl;
        cin>>ID;
        cout<<"                "<<endl;
        cin.ignore();
    }
};