#include<iostream>
#include<string>
using namespace std;

void restaurant_menu(){
    cout<<"____________________________________________________________"<<endl;
    cout<<"ENTER \"Zinger Burger\" FOR ZINGER BURGER (500)\nENTER \"Shawarma\" FOR SHAWARMA(250)\nENTER \"Pizza\" FOR PIZZA(1500)"<<endl;
    cout<<"____________________________________________________________"<<endl;
}

void order(){
    int total_bill = 0;
    cout<<"____________________________________________________________"<<endl;
    
    string fast_food[3] = {"Zinger Burger", "Shawarma", "Pizza"};
    int price[3] = {500, 250, 1500};
    
    string enter_order;
    bool found = false;

    cout<<"ENTER \"Zinger Burger\" FOR ZINGER BURGER (500)\nENTER \"Shawarma\" FOR SHAWARMA(250)\nENTER \"Pizza\" FOR PIZZA(1500)"<<endl;
    
    cin.ignore();
    cout<<"ENTER YOUR ORDER: ";
    getline(cin, enter_order);

    for(int i = 0; i < 3; i++){
        if(enter_order == fast_food[i]){
            total_bill += price[i];
            cout<<"TOTAL BILL: "<<total_bill<<endl;
            cout<<"******************************************************"<<endl;
            found = true;
            break;
        }
    }

    if(!found){
        cout<<"***INVALID ORDER***"<<endl;
        cout<<"******************************************************"<<endl;
    }
}

int main(){
    int choice;
    cout<<"******************************************************"<<endl;
    cout<<"                 RESTAURANT PROGRAM                   "<<endl;
    cout<<"******************************************************"<<endl;
    
    while(true){
        cout<<"ENTER 1 FOR RESTAURANT MENU\nENTER 2 FOR ORDER\nENTER 3 TO EXIT"<<endl;
        cout<<"******************************************************"<<endl;
        cout<<"ENTER YOUR CHOICE: ";
        cin>>choice;
        
        switch(choice){
            case 1:
                restaurant_menu();
                break;
            case 2:
                order();
                break;
            case 3:
                cout<<"***********EXIT THE SYSTEM*******"<<endl;
                return 0;
            default:
                cout<<"****INVALID CHOICE****"<<endl;
        }
    }
}
