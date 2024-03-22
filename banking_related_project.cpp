#include<iostream>
using namespace std;
int balance;

void credit(){
    int in;
    printf("Enter amount to be credited : ");
    scanf("%d", &in);
    balance=balance+in;
    printf("AVAILABLE BALANCE : %d\n\n", balance);
}

void debit(){
    int out;
    printf("Enter amount to be debited : ");
    scanf("%d", &out);
    balance=balance-out;
    printf("AVAILABLE BALANCE : %d\n\n", balance);
}

int main(){
    int choice;
    float new_balance, intrest, time;

    printf("Enter the bank balance(put 0 if no balance exists) : ");
    scanf("%d", &balance);

    while(1){
        cout<<"1 for CREDIT,"<<endl;
        cout<<"2 for DEBIT,"<<endl;
        cout<<"3 for VIEW THE BALANCE,"<<endl;
        cout<<"4 to calculate INTREST"<<endl;
        cout<<"0 to EXIT."<<endl;

        cin>>choice;

        switch (choice){
            case 1:
            {
                credit();
                break;
            }
            case 2:
            {
                debit();
                break;
            }
            case 3:
            {
                cout<<"AVAILABLE BALANCE : "<<balance<<endl;
                break;
            }
            case 4:
            {
                cout<<"Enter intrest rate : ";
                cin>>intrest;
                cout<<"Enter time(in years) : ";
                cin>>time;
                new_balance = balance + (balance*intrest)*time;
                cout<<"Balance after "<<time<<"years with "<<intrest<<"rate will be "<<new_balance;
            }
            case 0:
            {
                exit(0);
            }
            default:
            printf("\ninvalid input..!\n");

        }
    }
}