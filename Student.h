#include<iostream>
#include<fstream>

#include "User.h"                     //Header file to extract data from User file
#include "check.h"
using namespace std;

class Student : public User{        //Using Inheritence concept
private:
    string Roll_Number;
    string department;
    

public:
    void INfo() {
        ofstream file("Student.txt",ios::app);

        User::Info();                     //Extract user INFO 

        cout<<"Enter Roll number: "<<endl;
        cout<<"==================="<<endl;
        getline(cin,Roll_Number);
        cout<<"             "<<endl;
        
        cout<<"Enter Department: "<<endl;
        cout<<"=================="<<endl;
        getline(cin,department);
        cout<<"             "<<endl;
        
        check c;
        
        if(c.checkdetail(name,passward)){
        	clearConsole();
        	cout<<"Student is Already Registered"<<endl;
            INfo();
		}
		
		else{
        file<<name<<endl;
        file<<passward<<endl;
        file<<ID<<endl;
        file<<Roll_Number<<endl;
        file<<department<<endl;
    
        file.close();
    }
    }
};


