#include<iostream>

using namespace std;

class BankAccount{

    private:
        string accountNumber;
        double balance;

    public:
        BankAccount(string accountnum, double bal){
            accountNumber = accountnum;
            balance = bal;
        }

        //getter
        double getBalance(){
            return balance;
        }

        void setBalance_dep(double deposit_amount){
            if(deposit_amount>0){
                balance +=deposit_amount;
                cout<< "Deposited: " << deposit_amount << endl;
            }
            else{
                cout<< "Invalid Amount!" << endl;
            }
        }

        void setBalance_with(double with_amount){
            if(with_amount>0 && with_amount<=balance){
                balance -= with_amount;
            }
            else{
                cout<< "Insufficient Amount!"<<endl;
            }
        }
};

int main(){
    BankAccount myAcc("2501498", 3000);
    myAcc.setBalance_dep(100);
    cout<< "Your balance is: " << myAcc.getBalance() << endl;
    myAcc.setBalance_with(200);
    cout<< "Your balance is: " << myAcc.getBalance() << endl;

    return 0;
}