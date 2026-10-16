#include<iostream>
#include<string>
using namespace std;
void HR_attendace_system(){
    const int total_enteries=1;
    string employee_name[total_enteries],employee_shift[total_enteries];
    int employee_id[total_enteries],choice,absent_count[total_enteries]={},present_count[total_enteries]={};
    while(true){    
    cout<<"__________________________________________________"<<endl;
    cout<<"             HR ATTENDANCE SYSTEM                    "<<endl;
    cout<<"__________________________________________________"<<endl;
    cout<<"ENTER 1 TO ENTER EMPLOYEE DATA\nENTER 2 TO ADD EMPLOYEE PRESENT ATTENDANCE\nENTER 3 TO ADD EMPLOYEE PRESENT ATTENDANCE\nENTER 4 TO VIEW EMPLOYEE ATTENDANCE\nENTER 5 TO EXIT "<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"ENTER YOUR CHOICE :";cin>>choice;
    switch(choice){
        case 1:{  for(int i=0;i<total_enteries;i++){cin.ignore();
             cout<<"ENTER EMPLOYEE NAME :"; getline(cin,employee_name[i]);
             cout<<"ENTER EMPLOYEE SHIFT :";cin>>employee_shift[i];
             cout<<"ENTER EMPLOYEE ID :";cin>>employee_id[i];      } break;}
            case 2:{int id;
            cout<<"ENTER EMPLOYEE ID: ";cin>>id;
        for(int i=0;i<total_enteries;i++){
            if(id==employee_id[i]){present_count[i]++;} }break;}
    case 3:{int id;
            cout<<"ENTER EMPLOYEE ID: ";cin>>id;
        for(int i=0;i<total_enteries;i++){
            if(id==employee_id[i]){absent_count[i]++;} }break;}
    case 4:{int id;
            cout<<"ENTER EMPLOYEE ID: ";cin>>id;
        for(int i=0;i<total_enteries;i++){
            if(id==employee_id[i]){
                cout<<"*********************"<<endl;
                cout<<"NAME :"<<employee_name[i]<<endl;
                cout<<"EMPLOYEE SHIFT:"<<employee_shift[i]<<endl;
                cout<<"TOTAL PRESENTS :"<<present_count[i]<<endl;
                cout<<"TOTAL ABSENTS :"<<absent_count[i]<<endl;} }break;}  
        case 5:{cout<<"**********EXIT HR ATTENDANCE SYSTEM************"<<endl; return ;}
        default:{cout<<"-------INVALID CHOICE-------"<<endl;} }}}
int main()
    {   HR_attendace_system();}
