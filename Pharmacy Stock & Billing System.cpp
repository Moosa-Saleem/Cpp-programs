#include<iostream>
#include<string>
using namespace std;
void Pharmacy_Stock_and_Billing_System(){int total_entries=3;
    string medicine_name[total_entries];
    int medicine_PRICE[total_entries];
    int total_medicines_count=0; 
    int bill=0;
    int choice;  string name;
         while(true){cout<<"___________________________________"<<endl;
    cout<<"  Pharmacy Stock & Billing System  "<<endl;
    cout<<"___________________________________"<<endl;
    cout<<"ENTER 1 TO ENTER MEDICINE\nENTER 2 TO VIEW AVAILABLE MEDICINES\nENTER 3 TO BUY MEDICINE\nENTER 4 TO EXIT "<<endl;
    cout<<"**********************************"<<endl;
    cout<<"ENTER YOUR CHOICE : ";cin>>choice;
    cout<<"___________________________________"<<endl;
    switch(choice){case 1:{if(total_medicines_count<total_entries){  cout<<"ENTER MEDICINE NAME : "; cin.ignore(); getline(cin,medicine_name[total_medicines_count]);
   cout<<"ENTER MEDICINE PRICE : "; cin>>medicine_PRICE[total_medicines_count]; total_medicines_count++;}
else{cout<<"------------NO SPACE LEFT------------"<<endl;}break;}
case 2:{for(int i=0;i<total_medicines_count;i++){cout<<"NAME : "<<medicine_name[i]<<endl; cout<<"PRICE :"<<medicine_PRICE[i]<<endl;
    cout<<"___________________________"<<endl;}break;}
case 3:{ bool found=false; cin.ignore(); cout<<"ENTER MEDICINE NAME :";getline(cin,name); 
    for(int i=0;i<total_medicines_count;i++){if(name==medicine_name[i]){cout<<"_______MEDICINE IS AVAILABLE___________"<<endl;
    bill+=medicine_PRICE[i]; cout<<"TOTAL BILL :"<<bill<<endl; found=true; break;}}if(!found){cout<<"----MEDICINE IS NOT AVAILABLE | INVALID NAME"<<endl; }break;}
case 4:{ cout<<"************EXITING THE SYSTEM***********"<<endl; return;} } }}
int main(){Pharmacy_Stock_and_Billing_System();}
