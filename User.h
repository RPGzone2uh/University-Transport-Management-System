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
        

        cout<<"Enter password: "<<endl;
        cout<<"================"<<endl;
        getline(cin,passward);
        
        cout<<"Enter ID: "<<endl;
        cout<<"=========="<<endl;
        cin>>ID;
        cin.ignore();
    }
};