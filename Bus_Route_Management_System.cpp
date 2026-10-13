#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct bus_route{
   int route_id;
   string starting_point;
   string destination;

};
struct bus_timing{
   int bus_number;
   string bus_arrival_time;
   string departure_time;
     int route_id;

};
void Bus_Route_Management_System(){
   vector<bus_route>routes_list;
   vector<bus_timing>timing_list;
      routes_list.push_back({1,"GHAZI ROAD","KAMAHA"});
      timing_list.push_back({1,"7:00 AM","7:05 AM",1});
      routes_list.push_back({2,"CENTRAL PARK","KALMA CHOWK"});
      timing_list.push_back({2,"9:00 AM","9:05 AM",2});
      routes_list.push_back({3,"TOWNSHIP","MALL ROAD"});
      timing_list.push_back({3,"8:00 AM","8:05 AM",3});
   int choice;
   while(true){
      cout<<"========================================================"<<endl;
      cout<<"            Bus Route Management System                  "<<endl;
    cout<<"=========================================================="<<endl;

    cout<<"ENTER 1 TO CHECK BUS  (ARRIVAL AND DEPARTURE) TIMING ,BUS NUMBER,ROUTE ID\nENTER 2 TO CHECK (STARTING POINT AND FINAL DESTINATION),\nENTER 3 TO ADD NEW BUS ROUTE\nENTER 4 TO EXIT THE SYSTEM"<<endl;
     cout<<"ENTER YOUR CHOICE :";cin>>choice;
     if(choice==1){
        cout<<"--------------------------------------------"<<endl;
        for(auto t:timing_list){
         cout<<"BUS NUMBER :"<<t.bus_number<<endl;
         cout<<"BUS ARRIVAL TIME :"<<t.bus_arrival_time<<endl;
         cout<<"BUS DEPARTURE TIME :"<<t.departure_time<<endl;
         cout<<"ROUTE ID :"<<t.route_id<<endl;
         cout<<"*******************************************************"<<endl;
        }
        cout<<"TOTAL BUSES : "<<timing_list.size()<<endl;
         cout<<"___________________________________________________________"<<endl;
     }
     else if(choice==2){
      cout<<"--------------------------------------------"<<endl;
        for(auto t:routes_list){
         cout<<"BUS NUMBER :"<<t.route_id<<endl;
         cout<<"BUS STARTING POINT :"<<t.starting_point<<endl;
         cout<<"BUS DESTINATION :"<<t.destination<<endl;
         cout<<"*******************************************************"<<endl;
        }
     }
     else if(choice==3){
      cout<<"-----------------------------------------------------------"<<endl;
      bus_route data;
      cout<<"ENTER BUS ROUTE NUMBER:";cin>>data.route_id;
      cout<<"ENTER BUS STARTING POINT :";cin>>data.starting_point;
      cout<<"ENTER BUS DESTINATION :";cin>>data.destination;
      routes_list.push_back(data);
      bus_timing Data;
      cout<<"BUS NUMBER :";cin>>Data.bus_number;
         cout<<"BUS ARRIVAL TIME :";cin>>Data.bus_arrival_time;
         cout<<"BUS DEPARTURE TIME :";cin>>Data.departure_time;
         cout<<"BUS ROUTE ID :";cin>>Data.route_id;
         timing_list.push_back(Data);
         cout<<"*******************************************************"<<endl;

     }
     else if(choice==4){
      cout<<"______________________________________________________________"<<endl;
      cout<<"********************EXITING THE BUS ROUTE MANAGEMENT SYSTEM *********************"<<endl;
      cout<<"______________________________________________________________"<<endl;
      break;

     }
   }
}
int main()
{
Bus_Route_Management_System();
return 0;
}
