
#include <iostream>
using namespace std;
class Bank
    {
        public:
        int Account_balance;
        int withdraw_Amount;
        int total;
        Bank()
        {
            cout<<"Welcome to this bank"<<endl;
            
        }
        ~Bank()
        {
            cout<<"Thank you"<<endl;
        }
        void display()
        {
            if(total<=0)
            {
                cout<<"Transaction not possible "<<endl;
                
            }
            else
            {
                cout<<"Transaction successful"<<endl;
                cout<<"Amount Avalaible : "<<total<<endl;
                
            }
           
        }
    };
int main() {
    
    Bank user;
    cout<<"Enter Account balance : "<<endl;
    cin>>user.Account_balance;
    cout<<"Enter withdrawl amount : ";
    cin>>user.withdraw_Amount;
    user.total = user.Account_balance-user.withdraw_Amount;
        user.display();
          return 0;
    }


//Output

Welcome to this bank
Enter Account balance : 
3000
Enter withdrawl amount : 2
Transaction successful
Amount Avalaible : 2998
Thank you
