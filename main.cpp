#include<iostream>
#include<string>
#include "Registration.h"
#include "Login.h"
#include "Utility.h"
using namespace std;

int main(){
   do{
    cout<<"========================================================"<<endl;
    cout<<"         UNIVERSITY TRANSPORT MANAGMENT SYSTEM          "<<endl;
    cout<<"========================================================"<<endl;
    cout<<endl;
    int choice;
    
    cout<<" User Authentication      "<<endl;
    cout<<"    1. Register           "<<endl;
    cout<<"    2. Login              "<<endl;
    cout<<"    0. Logout             "<<endl;
    cout<<"======================="<<endl;
    cin>>choice;
    cin.ignore();
    clearConsole();
     
    if(choice==1){
        cout<<"Welcome to registration"<<endl;
        Registration R;
        R.Info();
        
        
    }
    else if(choice==2){
        Login log;
        log.detail();
        
    }
    else if(choice==0){
        cout<<"Logout Successfully!!!"<<endl;
        
    }
    else{
        cout<<"Please choose correct option"<<endl;
    }
}while(choice!=0);
}