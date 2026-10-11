#include<iostream>
#include<string>
using namespace std;
void voting_system(){
   string candidate_list[]={"IMRAN KHAN" ,"NAWAZ SHARIF" ,"ZARDARI"};
   int vote_counter_IMRAN_KHAN=0;
   int vote_counter_NAWAZ_SHARIF=0;
   int vote_counter_ZARDARI=0;
   while(true){
      cout<<"========== VOTING SYSTEM WITH WINNER DECLARATION========="<<endl;
      cout<<"ENTER 1 TO CAST A VOTE\nENTER 2 CHECK THE WINNER\nENTER 3 TO EXIT THE SYSTEM "<<endl;
      int choice;
      cout<<"ENTER YOUR CHOICE :";cin>>choice;
      if(choice==1){
      for(int i=0;i<3;i++)
      {cout<<"candidate :"<<(i+1)<<":"<<candidate_list[i]<<endl;}
      cout<<"-----------------------------------------------------------------------------"<<endl;
      cout<<"ENTER 1 TO CAST YOUR VOTE FOR IMRAN KHAN\nENTER 2 TO CAST YOUR VOTE FOR NAWAZ SHARIF\nENTER 3 TO CAST YOUR VOTE FOR ZARDARI \n "<<endl;
      int Choice;
      cout<<"************************************************"<<endl;
      cout<<"ENTER YOUR CHOICE :";cin>>Choice;
      if(Choice==1){
       vote_counter_IMRAN_KHAN++;
      }
      else if(Choice==2){
         vote_counter_NAWAZ_SHARIF++;
      }
      else if(Choice==3){
         vote_counter_ZARDARI++;
      }
      else{
         cout<<"------------------------------------------------------------------------"<<endl;
         cout<<"INVALID CHOICE !"<<endl;
      }}
      else if(choice==2){
         cout<<"***************************************************************************"<<endl;
      cout<<"TOTAL IMRAN KHAN VOTE'S :"<<vote_counter_IMRAN_KHAN<<endl;
       cout<<"------------------------------------------------------------------------"<<endl;
      cout<<"TOTAL NAWAZ SHARIF VOTE'S  :"<<vote_counter_NAWAZ_SHARIF<<endl;
       cout<<"------------------------------------------------------------------------"<<endl;
      cout<<"TOTAL ZARDARI VOTE'S :"<<vote_counter_ZARDARI<<endl;
       cout<<"------------------------------------------------------------------------"<<endl;
   if(vote_counter_IMRAN_KHAN>vote_counter_NAWAZ_SHARIF&&vote_counter_IMRAN_KHAN>vote_counter_ZARDARI){
      cout<<"*******************IMRAN KHAN WIN**************"<<endl;
   }
   else if(vote_counter_NAWAZ_SHARIF>vote_counter_IMRAN_KHAN&&vote_counter_NAWAZ_SHARIF>vote_counter_ZARDARI){
      cout<<"************NAWAZ SHARIF WIN ******************"<<endl;
   }
   else if(vote_counter_ZARDARI>vote_counter_IMRAN_KHAN&&vote_counter_ZARDARI>vote_counter_NAWAZ_SHARIF){
      cout<<"*******************ZARDARI WIN *******************"<<endl;
   }


       } 
      else if(choice==3){
        cout<<"------------------------------------------------------------"<<endl;
         cout<<"*********************EXITING FROM THE SYSTEM************"<<endl;
         break;
      }}
}
void car_rental_system(){
   string car_name[]{"Civic","Corolla","BMW","Tesla","Jaguar"};
   long int car_rent_per_day[]={10000,15000,25000,30000,35000};
   int car_number_plate[]={1001,1002,1003,1004,1005};
   int car_model[]={2006,2010,2024,2020,2019};
   string customer_name;
   int customer_contact_number;
   int customer_id_card_number;
   int booked_car_index=-1;
   while(true){
      cout<<"=========== CAR RENTAL SYSTEM ======================"<<endl;
      cout<<"ENTER 1 TO CHECK CAR AVAILABILTY\nENTER 2 TO CHECK RENT PER DAY\nENTER 3 TO CHECK CAR MODEL\nENTER 4 TO BOOK CAR\nENTER 5 TO CANCEL THE BOOKING\nENTER 6 TO EXIT THE SYSTEM"<<endl;
     int choice;
     cout<<"ENTER YOUR CHOICE :";cin>>choice;
     if(choice==1){
      for(int i=0;i<5;i++){ cout<<"---------------------------------"<<endl;
         cout<<"AVAILABLE CARS :"<<(i+1)<<":"<<car_name[i]<<endl;
         cout<<"************************************************"<<endl;
      }
     }
     else if(choice==2){
      cout<<"-------------------------------------------------"<<endl;
      cout<<"1.Civic\n2.Corolla\n3.BMW\n4.Tesla\n5.Jaguar"<<endl;
      cout<<"------------------------------------------------"<<endl;
      for(int i=0;i<5;i++){
         cout<<"CAR RENT PER DAY : "<<(i+1)<<":"<<car_rent_per_day[i]<<endl;
         cout<<"************************************************"<<endl;
      }
     }
      else if(choice==3){
         cout<<"-----------------------------------"<<endl;
      cout<<"1.Civic\n2.Corolla\n3.BMW\n4.Tesla\n5.Jaguar"<<endl;
      cout<<"------------------------------------------------"<<endl;
      for(int i=0;i<5;i++){
         cout<<"CAR MODEL : "<<(i+1)<<":"<<car_model[i]<<endl;
         cout<<"************************************************"<<endl;
      }
     }
     else if(choice==4){
      cout<<"-------------------------------------------"<<endl;
      cout<<"ENTER CUSTOMER NAME :";cin>>customer_name;
      cout<<"ENTER CUSTOMER CONTACT NUMBER :";cin>>customer_contact_number;
      cout<<"ENTER CUSTOMER ID CARD NUMBER :";cin>>customer_id_card_number;
      string Car_name;
      bool found =false;
      cout<<"---------------------------------------------------------"<<endl;
      cout<<"ENTER CAR NAME :";cin>>Car_name;
      for(int i=0;i<5;i++){
         if(Car_name==car_name[i]){
            cout<<"CAR RENT PER DAY :"<<car_rent_per_day[i]<<endl;
            cout<<"CAR MODEL :"<<car_model[i]<<endl;
            cout<<"CAR NUMBER PLATE :"<<car_number_plate[i]<<endl;
            booked_car_index=i;
            found=true;
            break;
         }
      }
         if(!found){cout<<"-------------INVALID CAR NAME-----------"<<endl;}
         

     }
     else if(choice==5){
      cout<<"----------------------------------------------------"<<endl;
      int customer_id;
      cout<<"ENTER CUSTOMER ID :";cin>>customer_id;
      if(booked_car_index == -1){cout<<"------------NO CAR IS BOOKED YET---------"<<endl;}
      else if(customer_id==customer_id_card_number)
      { 
          cout<<"CAR RENT PER DAY :"<<car_rent_per_day[booked_car_index]<<endl;
            cout<<"CAR MODEL :"<<car_model[booked_car_index]<<endl;
            cout<<"CAR NUMBER PLATE :"<<car_number_plate[booked_car_index]<<endl;
            cout<<"Your booking has been cancelled successfully"<<endl;
            booked_car_index = -1;
      }
     }
     else if(choice==6){
      cout<<"---------------------------------------------"<<endl;
      cout<<"************EXITING CAR RENTAL SYSTEM ****************"<<endl;
      break;
     }
     else{
      cout<<"**************************************************"<<endl;
      cout<<"-----------------INVALID CHOICE !-----------------"<<endl;
     }

   }
}
int main()
{
   while(true){cout<<"-------- MUTI-PROGRAM-SYSTEM-----------"<<endl;
      cout<<"ENTER 1 TO USE VOTE CASTING SYSTEM\nENTER 2 TO USE CAR RENTAL SYSTEM\nENTER 3 TO EXIT "<<endl;
      int choice;
      cout<<"ENTER YOUR CHOICE: ";cin>>choice;
      if(choice==1){
voting_system();}
else if(choice==2){
car_rental_system();}
else if(choice==3){
   cout<<"***********EXIT FROM THE MULTI PROGRAM SYSTEM *********************"<<endl;
   break;
}
else{
   cout<<"------------------------INVALID CHOICE !------------------------------"<<endl;
}}
return 0;
}
