#include<iostream>
#include<string>
using namespace std;
void blood_bank_and_emergency_match_management_system(){
    const int total_entries=3;
    string name[total_entries];
    int id[total_entries];
    string blood_group[total_entries];
    int donor_counter=0;
    int choice;
    while(true){cout<<"***********************************"<<endl;
        cout<<"    Blood Bank And Emergency Match Management System   "<<endl;
    cout<<"***********************************"<<endl;
cout<<"ENTER 1 TO ADD BLOOD GROUP\nENTER 2 TO MATCH AND DONATE\nENTER 3 TO EXIT THE SYSTEM"<<endl;
cout<<"__________________________________________"<<endl;
cout<<"ENTER YOUR CHOICE : ";cin>>choice;
switch(choice){case 1:{if(donor_counter<total_entries){ cin.ignore();cout<<"ENTER YOUR NAME : ";getline(cin,name[donor_counter]);
    cout<<"ENTER YOUR ID : ";cin>>id[donor_counter];  cin.ignore();cout<<"ENTER YOUR BLOOD GROUP : ";getline(cin,blood_group[donor_counter]);  donor_counter++;}break;}
case 2:{  string bloodgroup; bool found=false;
    cout<<"ENTER YOUR BLOOD GROUP TO FIND THE DONER :";cin>>bloodgroup;
for(int i=0;i<donor_counter;i++){
    if(bloodgroup==blood_group[i]){cout<<"__________BLOOD GROUP IS MATCHED_____________"<<endl;
    cout<<"DONATOR NAME : "<<name[i]<<endl; cout<<"DONATOR ID : "<<id[i]<<endl; found=true;}
} if(!found){cout<<"------------NO DONATER FROM THIS BLOOD GROUP IS REGISTERED-----------"<<endl;} break;
}
case 3:{cout<<"________________________________________________"<<endl;cout<<"------EXITING THE SYSTEM------"<<endl; return;}}}}
int main()
{blood_bank_and_emergency_match_management_system();}