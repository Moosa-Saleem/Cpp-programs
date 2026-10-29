#include<iostream>
#include<string>
using namespace std;
void factory_workers_hiring(){ const int total_entries=3;
    string worker_name[total_entries];
    int worker_id[total_entries],total_workers_hired=0,choice,id;
    while(true){cout<<"****************************************"<<endl; 
        cout<<"    FACTORY WORKERS HIRING    "<<endl; 
    cout<<"****************************************"<<endl;
cout<<"ENTER 1 TO HIRE FACTORY WORKER\nENTER 2 TO FIRE FACTORY WORKER\nENTER 3 TO DISPLAY FACTORY WORKERS HIRED\nENTER 4 TO EXIT"<<endl;
cout<<"------------------------------------"<<endl;
cout<<"ENTER YOUR CHOICE : ";cin>>choice;cout<<"---------------------------------"<<endl;cin.ignore();
switch(choice){case 1:{if(total_workers_hired<total_entries){cout<<"ENTER WORKER NAME : ";getline(cin,worker_name[total_workers_hired]);
cout<<"ENTER WORKER ID : ";cin>>worker_id[total_workers_hired];total_workers_hired++;}
else{cout<<"-----HIRING IS OVER-----"<<endl;}break;}
      case 2:{  bool found=false;  cout<<"ENTER WORKER ID TO FIRE: ";cin>>id; 
                for(int i=0; i<total_workers_hired; i++){
if(id == worker_id[i]){cout<<"WORKER NAME : "<<worker_name[i]<<endl; 
                        cout<<"*****WORKER HAS BEEN FIRED*****"<<endl; 
                        for(int j = i; j < total_workers_hired - 1; j++){
                            worker_name[j] = worker_name[j+1];
                            worker_id[j] = worker_id[j+1];                                           }                       total_workers_hired--;                         found=true;              break;  }}                if(!found){cout<<"***INVALID WORKER ID***"<<endl;}               break; } 
case 3:{for(int i=0;i<total_workers_hired;i++){cout<<"WORKER NAME : "<<worker_name[i]<<endl;
cout<<"WORKER ID : "<<worker_id[i]<<endl;   cout<<"--------------------------------"<<endl;
}cout<<"TOTAL WORKERS : "<<total_workers_hired<<endl; break;}
case 4:{cout<<"______________________________________"<<endl;
cout<<"*******EXITING THE SYSTEM******"<<endl; return;}
default:{cout<<"---INVALID CHOICE----"<<endl;}}}}
int main(){factory_workers_hiring();}