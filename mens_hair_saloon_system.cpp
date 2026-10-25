#include<iostream>
#include<string>
using namespace std;
void mens_hair_saloon_system(){
    const int total_entries = 3;
    string customer_name[total_entries], treatments[] = {"Hear and Beared Treatment", "Skin Care Treatment"}; 
    int choice, customer_id[total_entries], customer_count = 0, id;
    while(true){
        cout<<"______________________________________________\n       MEN'S HAIR SALOON        \n______________________________________________\n";
        cout<<"ENTER 1 TO ADD CUSTOMER INFO AND SHOW  TREATMENT \nENTER 2 FOR HEAR AND BEARED TREATMENT\nENTER 3 FOR SKIN CARE TREATMENT\nENTER 4 TO EXIT THE SYSTEM\n*************************\nENTER YOUR CHOICE : "; cin >> choice; 
        switch(choice){
            case 1:
                if(customer_count < total_entries){
                    cin.ignore();
                    cout << "ENTER CUSTOMER NAME :  "; getline(cin, customer_name[customer_count]);
                    cout << "ENTER CUSTOMER ID : "; cin >> customer_id[customer_count];       
                    customer_count++;
                    int opt = 1;
                    for(auto s : treatments) cout << opt++ << ":" << s << endl; 
                } else cout << "*********SYSTEM IS FULL !*************\n";    break;
            case 2: {
                bool found = false; string t1 = "Hear and Beared Treatment"; int p1 = 1500;
                cout << "ENTER CUSTOMER ID : "; cin >> id;  
                for(int i = 0; i < customer_count; i++){
                    if(id == customer_id[i]){
                        cout << "CUSTOMER NAME :" << customer_name[i] << "\nTREATMENT : " << t1 << "\nPRICE : " << p1 << endl; 
                        found = true; break;                }  }
                if(!found) cout << "****CUSTOMER NOT FOUND OR TREATMENT IS NOT AVAILABLE*****\n";   break; }
            case 3: {
                bool found = false; string t2 = "Skin Care Treatment"; int p2 = 2500;
                cout << "ENTER CUSTOMER ID : "; cin >> id; 
                for(int j = 0; j < customer_count; j++){
                    if(id == customer_id[j]){
                        cout << "CUSTOMER NAME :" << customer_name[j] << "\nTREATMENT : " << t2 << "\nPRICE : " << p2 << endl; 
                        found = true; break;} }
                if(!found) cout << "****CUSTOMER NOT FOUND OR SKIN CARE TREATMENT IS NOT AVAILABLE*****\n";     break;}
            case 4:{
                cout << "**************************************\n    EXITING THE SYSTEM     \n"; return;}
            default:{              cout << "__________________________\n     INVALID CHOICE  \n";         } }    }}
int main(){mens_hair_saloon_system();}
