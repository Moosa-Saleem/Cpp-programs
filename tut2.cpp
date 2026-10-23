#include<iostream>
#include<string>
using namespace std;
void real_estate_program(){int total_entries=3;
    string society_name[total_entries];
    string plot_size[total_entries];
    int plot_price[total_entries];
    int availabe_plot_count=0; 
    int total_amount=0;
    int choice;  string name;
         while(true){cout<<"___________________________________"<<endl;
    cout<<"  REAL ESTATE SYSTEM  "<<endl;
    cout<<"___________________________________"<<endl;
    cout<<"ENTER 1 TO ENTER PLOT INFORMATION\nENTER 2 TO VIEW AVAILABLE PLOTS\nENTER 3 TO BUY PLOT\nENTER 4 TO EXIT "<<endl;
    cout<<"**********************************"<<endl;
    cout<<"ENTER YOUR CHOICE : ";cin>>choice;
    cout<<"___________________________________"<<endl;
    switch(choice){case 1:{if(availabe_plot_count<total_entries){  cout<<"ENTER SOCIETY NAME : "; cin.ignore(); getline(cin,society_name[availabe_plot_count]);
   cout<<"ENTER PLOT SIZE : ";getline(cin,plot_size[availabe_plot_count]) ;
    cout<<"ENTER PLOT PRICE : "; cin>>plot_price[availabe_plot_count]; availabe_plot_count++;}
else{cout<<"------------ SORRY ! NO PLOT AVAILABLE ------------"<<endl;}break;}
case 2:{for(int i=0;i<availabe_plot_count;i++){cout<<"SOCIETY NAME : "<<society_name[i]<<endl; cout<<"SIZE :"<<plot_size[i]<<endl; cout<<"PRICE :"<<plot_price[i]<<endl;
    cout<<"___________________________"<<endl;}break;}
case 3:{ string Society_name, Plot_size;
     bool found=false;  cout<<"ENTER SOCIETY NAME :";cin.ignore(); getline(cin,Society_name); 
     cout<<"ENTER PLOT SIZE :"; getline(cin,Plot_size); 
    for(int i=0;i<availabe_plot_count;i++){if(Society_name==society_name[i]){if(Plot_size==plot_size[i]){cout<<"_______PLOT IS AVAILABLE___________"<<endl; cout<<"SOCIETY NAME : "<<society_name[i]<<endl; cout<<"SIZE :"<<plot_size[i]<<endl; cout<<"PRICE :"<<plot_price[i]<<endl;
    total_amount+=plot_price[i]; cout<<"TOTAL AMOUNT :"<<total_amount<<endl; found=true; break;}}}if(!found){cout<<"----PLOT IS NOT  AVAILABLE----- "<<endl; }break;}
case 4:{ cout<<"************EXITING THE SYSTEM***********"<<endl; return;} } }}
int main(){real_estate_program();}