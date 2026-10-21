#include<iostream>
#include<string>
using namespace std;
void login_page(){const int total_enteries=3;
    string name[total_enteries];
   int id[total_enteries];
   int choice;
   int count=0;
   int ID;
    while (true){
    cout<<"____________________________________________________"<<endl;
    cout<<"                  LOGIN PAGE                        "<<endl;
    cout<<"____________________________________________________"<<endl;
    cout<<"ENTER 1 TO SIGHN IN\nENTER 2 TO LOGIN\nENTER 3 TO LOGOUT\nENTER 4 TO EXIT"<<endl;  cout<<"____________________________________________________"<<endl;
    cout<<"ENTER YOUR CHOICE : ";cin>>choice;
    switch(choice){case 1:{cout<<"______________________________________________"<<endl;
        if(count<total_enteries){cin.ignore();
    cout<<"ENTER YOUR NAME :";getline(cin,name[count]); cout<<"ENTER YOUR ID : ";cin>>id[count];
count++;   cout<<"***************SIGHN IN SUCESSFULLY***************"<<endl;}
else{cout<<"----------------SIGHN IN IS FULL--------------------"<<endl;}break;}
case 2:{bool found = false;
    cout<<"ENTER YOUR ID :";cin>>ID;
for(int i=0;i<count;i++){if(ID==id[i]){cout<<"NAME :"<<name[i]<<endl; cout<<"---------LOGIN SUCESSFULLY----------"<<endl; found=true;}}
if(!found){cout<<"-------INVALID ID-------"<<endl;}break;}
case 3:{bool found = false;
    cout<<"ENTER YOUR ID :";cin>>ID;
for(int i=0;i<count;i++){if(ID==id[i]){cout<<"NAME :"<<name[i]<<endl; cout<<"---------LOGOUT SUCESSFULLY----------"<<endl; found=true;}}
if(!found){cout<<"-------INVALID ID-------"<<endl;}break;}
 case 4:{cout<<"_______________________________________________"<<endl;
cout<<"***************EXITING THE SYSTEM***********"<<endl; return;}
default:{cout<<"******INVALID CHOICE**********"<<endl;}}}}
int main()
{login_page();}
