#include<iostream>
#include<string>
#include<fstream>

#include "Student.h"
#include "User.h"
#include "Admin.h"
#include "Utility.h"
#include "reset.h"
#include "restriction.h"

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
        cout<<" 3. Go Back"<<endl;
        cout<<" 0. Logout"<<endl;
        cout<<"================="<<endl;
        cin>>choise;
        cin.ignore();
        clearConsole();

        if(choise==1){
            cout<<"Student Registration "<<endl;
            Student s;
            s.INfo();
            clearConsole();
            cout<<"Registeration SuccessFull!!!"<<endl;
        }
        else if(choise==2){
            cout<<"Admin Registration "<<endl;
            Admin A;
            restriction a;
            if(a.restr()){
            A.INFO();
            clearConsole();
            cout<<"Registeration SuccessFull!!!"<<endl;
        }
        }
        else if(choise==3){
        	restartProgram();
		}
   	}while(choise!=0);
    }
};