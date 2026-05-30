#include<iostream>
#include<string>
#include<fstream>

#include "Student.h"
#include "User.h"
#include "Admin.h"
#include "Utility.h"

int choise;

using namespace std;

class Registration{
private:
    string name,fathername,department;


public:
    Registration() {
        cout<<"Please create you account"<<endl;
    }
    void Info() {
       do{
       	cout<<"================="<<endl;
	    cout<<"Registration as: "<<endl;
	    cout<<"================="<<endl;
        cout<<" 1. Student  "<<endl;
        cout<<" 2. Admin "<<endl;
        cout<<" 0. Logout"<<endl;
        cout<<"================="<<endl;
        cin>>choise;
        cin.ignore();
        clearConsole();

        if(choise==1){
            cout<<"Student Registration "<<endl;
            Student s;
            s.INfo();

        }
        else if(choise==2){
            cout<<"Admin Registration "<<endl;
            Admin A;
            A.INFO();
        }
        else{
            cout<<"Wrong choice"<<endl;
        }
   	}while(choise!=0);
    }
};