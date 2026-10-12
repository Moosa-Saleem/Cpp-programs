#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct member {  
   string member_name;
   int member_id;
   string member_status;
   int member_age;
   long int member_contact_number;
   string member_gender;
};

void gym_and_fitness_center_membership_system() {
   vector<member> member_list;
   while(true) {
      cout<<"=============== GYM AND FITNESS CENTER MEMBERSHIP ===================="<<endl;
      cout<<"ENTER 1. TO Add New Member\nENTER 2. TO View All Members\nENTER 3. TO Search Member\nENTER 4. TO Delete Member\nENTER 5. TO Exit THE SYSTEM"<<endl;
      
      int choice;
      cout<<"ENTER YOUR CHOICE :"; cin>>choice;
      
      switch (choice) {
         case 1: {
            member temp;
            cout<<"-----------------------------------------"<<endl;
            cout<<"ENTER MEMBER NAME :"; cin>>temp.member_name;
            cout<<"ENTER MEMBER GENDER :"; cin>>temp.member_gender;
            cout<<"ENTER MEMBER ID :"; cin>>temp.member_id;
            cout<<"ENTER MEMBER CONTACT NUMBER :"; cin>>temp.member_contact_number;
            cout<<"ENTER MEMBER STATUS :"; cin>>temp.member_status;
            
            member_list.push_back(temp);
            cout<<"-----------------------------------------"<<endl;
            cout<<"GYM TOTAL MEMBERS :"<<member_list.size()<<endl;
            cout<<"***********************************************************"<<endl;
            break;
         }
         
         case 2: {
            for(auto member : member_list) {
               cout<<"-----------------------------------------"<<endl;
               cout<<" MEMBER NAME :"<<member.member_name<<endl;
               cout<<" MEMBER GENDER :"<<member.member_gender<<endl;
               cout<<" MEMBER ID :"<<member.member_id<<endl;
               cout<<" MEMBER CONTACT NUMBER :"<<member.member_contact_number<<endl;
               cout<<" MEMBER STATUS :"<<member.member_status<<endl;
               cout<<"------------------------------------------------"<<endl;
            }
            break;
         }
         
         case 3: {
            int Member_id;
            bool found = false;
            cout<<"-----------------------------------------"<<endl;
            cout<<"ENTER MEMBER ID :"; cin>>Member_id;
            
            for(auto id : member_list) {
               if(Member_id == id.member_id) {
                  cout<<" MEMBER NAME :"<<id.member_name<<endl;
                  cout<<" MEMBER GENDER :"<<id.member_gender<<endl;
                  cout<<" MEMBER ID :"<<id.member_id<<endl;
                  cout<<" MEMBER CONTACT NUMBER :"<<id.member_contact_number<<endl;
                  cout<<" MEMBER STATUS :"<<id.member_status<<endl;
                  cout<<"------------------------------------------------"<<endl;
                  found = true;
                  break;
               } 
            }
            if(found == false) {
               cout<<"*********************NO ID NUMBER MATCH******************************"<<endl;
            }
            break; 
         }
         
         case 4: {
            cout<<"-----------------------------------------"<<endl;
            int counter = 0;
            int Member_id;
            bool found = false;
            cout<<"ENTER MEMBER ID :"; cin>>Member_id;
            
            for(auto id : member_list) {
               if(Member_id == id.member_id) {
                  cout<<" MEMBER NAME :"<<id.member_name<<endl;
                  cout<<" MEMBER GENDER :"<<id.member_gender<<endl;
                  cout<<" MEMBER ID :"<<id.member_id<<endl;
                  cout<<" MEMBER CONTACT NUMBER :"<<id.member_contact_number<<endl;    
                  member_list.erase(member_list.begin() + counter);              
                  cout<<"------------------------------------------------"<<endl;
                  cout<<"********MEMBERSHIP HAS BEEN CANCELLED***********"<<endl;
                  found = true;
                  break;
               }    
               counter++;
            }
            if(found == false) {
               cout<<"*********************NO ID NUMBER MATCH******************************"<<endl;
            }
            break;
         }
         
         case 5: {
            cout<<"------------------------------------------"<<endl;
            cout<<"*********** EXIT FROM THE SYSTEM ********************"<<endl;
            return;
         }
      }
   }
}

int main() {
   gym_and_fitness_center_membership_system(); 
   return 0;
}
