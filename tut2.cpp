#include<iostream>
#include<string>
using namespace std;
void parking_lot_management(){
    const int total_parking_space=5;
    int VEHICLE_number[total_parking_space]={0};
    int parking_fee=100;
    int vehicle_counter=0;
    while(true){
        cout<<"***********************************************"<<endl;
        cout<<"                PARKING MANAGEMENT SYSTEM        "<<endl;
        cout<<"***********************************************"<<endl;
        cout<<"ENTER 1 TO PARK A VEHICLE\nENTER 2 TO REMOVE A VEHICLE\nENTER 3 TO EXIT"<<endl;
        cout<<"_________________________________________________"<<endl;
        int choice;
        cout<<"ENTER CHOICE :";cin>>choice;
        switch(choice){
            case 1:{if(vehicle_counter<total_parking_space){ cout<<"ENTER VEHICLE NUMBER:";cin>>VEHICLE_number[vehicle_counter];
            cout<<"PARKING FEE :"<<parking_fee<<endl; vehicle_counter++; break; }
      else{cout<<"-----THERE IS NO PARKING SPACE-----------"<<endl; break; } break;}
            case 2:{int vehicle_number; bool found=false;
                    cout<<"ENTER VEHICLE NUMBER :";cin>>vehicle_number;
                for(int i=0;i<total_parking_space;i++){
                if(vehicle_number==VEHICLE_number[i]){vehicle_counter--; cout<<"---------VEHICLE REMOVED SUCCESSFULLY----------"<<endl; 
                    found=true;  break;}
            }  if(!found){cout<<"****INVALID VEHICLE NUMBER****"<<endl; break;}
                break;}
            case 3:{cout<<"****EXIT THE PARKING SYSTEM****"<<endl;
            return;}}}}
int main()
{    parking_lot_management();
}
