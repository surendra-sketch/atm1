#include<bits/stdc++.h>
using namespace std;

void showOptions(){
    cout<<"\n";
    cout<<"************************* ~ MENU ~ **************************\n"<<endl;
    cout<<"    *** ~ Select Any One OPtions from Given List ~ ***           "<<endl;
    cout<<"\n\n";
    cout<<"(1) Check Balance "<<endl;
    cout<<"(2) Deposit Money "<<endl;
    cout<<"(3) Withdrawl Money "<<endl;
    cout<<"(4) Exit "<<endl<<endl;
    cout<<"\n\n";
    cout<<"************************* ~ ^^^^ ~ **************************"<<endl;
}

int main(){


    system("cls");
    int option ;
    double balance=0,deposit=0,withdrawl;
    cout<<"\n                          Welcome !\n";
    

    do{

    // cout<<"\nCurrent Message\n";
    showOptions();
    cin>>option;
    system("cls");


    switch (option)
    {
    case 1:
        cout<<"\nCurrent Message\n\n";

        cout<<"balance is : "<<balance<<endl<<endl;
        break;
    case 2:
        cout<<"\nCurrent Message\n";

        cout<<"Enter Amount to be Deposit \n";
        cin>>deposit;
        if(deposit>0){

        balance += deposit;
        cout<<"Rs "<<deposit<<" deposited ! \n\n";
        }
        else{

        cout<<"Select Positive amount ! \n\n";

        }

        break;
    case 3:
        cout<<"\nCurrent Message\n\n";

        cout<<"Enter amount to be withdrwal\n";
        cin>>withdrawl;

        if(withdrawl<= balance && withdrawl >0){

            balance -= withdrawl;
            cout<<"Rs : "<<withdrawl<<" Amount deducted ! \n";
            cout<<"Now Amount is left : Rs "<<balance<<endl;
        }else if(withdrawl>balance){

          cout<<"Not enough amount !\n\n\n";
 
        }else if(withdrawl<0){
        cout<<"Select Positive amount ! \n\n";

        }else{
        cout<<"Wrong input \n";

        }

        break;
    case 4:
        break;
         
    
    default:
        cout<<"Choose correct option\n";
        break;

    }
     



    }while(option != 4);

 cout<<"\n\n\n\n           Thaku For Visiting Us !                   \n\n\n\n\n";

system("pause");
system("cls");

    return 0;
}