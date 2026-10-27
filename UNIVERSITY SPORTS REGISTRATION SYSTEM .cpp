#include<iostream>
#include<string>
using namespace std;
void university_sports_registration_system(){
    const int total_entries=3;
    string student_name[total_entries],game_name[total_entries];
    int student_id[total_entries],total_count_games=0,choice;
    while(true){
        cout<<"***************************************************"<<endl;
        cout<<"     UNIVERSITY SPORTS REGISTRATION SYSTEM         "<<endl;
        cout<<"***************************************************"<<endl;
        cout<<"ENTER 1 TO ENTER STUDENT INFORMATION\nENTER 2 TO DISPLAY REGISTERED PLAYERS\nENTER 3 TO EXIT"<<endl;
        cout<<"________________________________________________________"<<endl;
        cout<<"ENTER YOUR CHOICE : ";cin>>choice;
        switch(choice){case 1:{if(total_count_games<total_entries){cin.ignore();
            cout<<"ENTER STUDENT NAME : ";getline(cin,student_name[total_count_games]); 
            cout<<"ENTER STUDENT ID : ";cin>>student_id[total_count_games];
            cout<<"ENTER SPORTS : ";cin>>game_name[total_count_games]; total_count_games++; }
            else{cout<<"*****NO SPACE LEFT****"<<endl;}break; }
case 2:{for(int i=0;i<total_count_games;i++){
    cout<<"STUDENT NAME : "<<student_name[i]<<endl;
    cout<<"STUDENT ID : "<<student_id[i]<<endl;
    cout<<"SPORT : "<<game_name[i]<<endl;
    cout<<"-----------------------------------------"<<endl;
    }cout<<"TOTAL REGISTERED STUDENTS : "<<total_count_games<<endl;break;}
case 3:{cout<<"**********EXITING THE SYSTEM*************"<<endl;return;}
default:{cout<<"********* INVALID CHOICE **************"<<endl;}} }}
int main(){university_sports_registration_system();}
