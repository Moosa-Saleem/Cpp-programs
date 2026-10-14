#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct mobile_package_status{
    string package_status;
    string available_packages;
};
struct data_remaining_volume{
 string remaining_vloume;
};
struct customer_information{
   string customer_name;
  long long customer_number;
  int customer_id;
  long long  balance=0;
};
void mobile_balance_and_package_activaton_simulation(){
   vector<mobile_package_status>mobile_package_list;
   vector<data_remaining_volume>mobile_remaining_volume_list;
   vector<customer_information>customer_lists;
   int choice;
   while(true){
      cout<<"______________________________________________________________________"<<endl;
      cout<<"          Mobile Balance And Package Activaton Simulation             "<<endl;
      cout<<"______________________________________________________________________"<<endl;
      cout<<"ENTER 1 TO ENTER CUSTOMER INFORMATION\nENTER 2 FOR Balance Inquiry\nENTER 3 FOR Card Recharge\nENTER 4 to Check And Activate Available Packages\nENTER 5 TO Exit THE SYSTEM"<<endl;
  cout<<"ENTER YOUR CHOICE : ";cin>>choice;
  if(choice==1){
   cout<<"_______________________________________________________"<<endl;
   customer_information data;
   cout<<"ENTER CUSTOMER NAME :";cin>>data.customer_name;
   cout<<"ENTER CUSTOMER ID :";cin>>data.customer_id;
   cout<<"ENTER CUSTOMER NUMBER :";cin>>data.customer_number;
   customer_lists.push_back(data);
    cout<<"_______________________________________________________"<<endl;
    cout<<"TOTAL CUSTOMERS : "<<customer_lists.size()<<endl;
  } 
  else if(choice==2){
   cout<<"**************************************************************"<<endl;
   int user_id;
   bool found=false;
   cout<<"ENTER YOUR ID : ";cin>>user_id;
for(auto check:customer_lists){
   if(user_id==check.customer_id){
   cout<<"CURRENT BALANCE : "<<check.balance<<endl;
   found=true;
   break;}
} 
if(!found){cout<<"------------NO ID MATCH------------------"<<endl;}
 cout<<"**************************************************************"<<endl;
  }
  else if(choice==3){
   cout<<"______________________________________________________________________"<<endl;
   int amount;
   bool found=false;
   int user_ID;
   cout<<"ENTER YOUR ID : ";cin>>user_ID;
   for(auto& search:customer_lists){
      if(user_ID==search.customer_id){
         cout<<"ENTER AMOUNT TO RECHARGE YOUR CARD : ";cin>>amount;
         search.balance+=amount;
         cout<<"__________________________________________________________"<<endl;
         found=true;
         break;
      }
   }
   if(!found){cout<<"------------NO ID MATCH------------------"<<endl;}
  }
else if(choice==4){
   cout<<"______________________________________________________________________"<<endl;
    cout<<"------------------AVAILABLE PACKAGES----------------------"<<endl;
            cout<<"ENTER 1.FOR  Weekly Data Package (Price: 200, Volume: 10GB)\nENTER 2.FOR Monthly All-in-One (Price: 500, Volume: 20GB, 500 Mins)"<<endl;
   int user_choice;
   bool found=false;
   int user_ID;
   cout<<"ENTER YOUR ID : ";cin>>user_ID;
   for(auto& search:customer_lists){
      if(user_ID==search.customer_id){
         cout<<"ENTER YOUR CHOICE :";cin>>user_choice;
         if(user_choice==1){
         if(search.balance>=200){
            search.balance-=200;
            cout<<"*************PACKAGE IS ACTIVATED***********"<<endl;
            }
         else{cout<<"**********Insufficient Balance!*********************"<<endl;}}
         else if(user_choice==2){
            if(search.balance>=500){
                search.balance-=500;
            cout<<"*************PACKAGE IS ACTIVATED***********"<<endl;
            }
            else{cout<<"**********Insufficient Balance!*********************"<<endl;
            }
         }
         found=true;
         break;
      }
   }
   if(!found){cout<<"------------NO ID MATCH------------------"<<endl;}
         }
         else if(choice==5){
            cout<<"-----------------------EXITING THE MOBILE BALANCE AND PACKAGE ACTIVATION SIMULATION------------------------"<<endl;
    return;
         }
         else{
            cout<<"***********INVAILD CHOICE !******************"<<endl;
         }
      }
   }
int main()
{
mobile_balance_and_package_activaton_simulation();
return 0;
}