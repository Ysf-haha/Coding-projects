#include <iostream>
#include <iomanip>
using namespace std;

void showBalance(double pBalance);
double deposit();
double withdraw(double pBalance);

int main(){
  double balance = 100;
  int choice;

  cout << "*********************************************" << endl;
  cout << "Welcome to the banking program!" << endl;
  cout << "*********************************************" << endl;
  do{
    cout << "Enter your choice: " << endl;
    cout << "1. Show balance" << endl;
    cout << "2. Deposit money" << endl;
    cout << "3. Withdraw money" << endl;
    cout << "4. Exit program" << endl;
    cout << "Choice: ";
    cin >> choice;
    cin.clear();
    fflush(stdin);
    cout << "*********************************************" << endl;

    switch (choice){
      case 1:
        showBalance(balance);
        cout << "*********************************************" << endl;
        break;
      case 2:
        balance += deposit();
        showBalance(balance);
        cout << "*********************************************" << endl;
        break;
      case 3:
        balance -= withdraw(balance);
        showBalance(balance);
        cout << "*********************************************" << endl;
        break;
      case 4:
        cout << "Thanks for visiting!" << endl;
        cout << "*********************************************" << endl;
        break;
      default:
        cout << "Invalid choice, try again" << endl;
        cout << "*********************************************" << endl;}
  }while(choice != 4);
}

void showBalance(double pBalance){
  cout << "Current balance: $" << setprecision(2) << fixed << pBalance << endl;
}
double deposit(){
    double amount;
    cout << "Amount to deposit: $";
    cin >> amount;
    if (amount > 0){
        return amount;
    }
    else{
        cout << "Cannot deposit a negative amount" << endl;
        cout << "*********************************************" << endl;
        return 0;
    }
}
double withdraw(double pBalance){
    double amount;
    cout << "Amount to withdraw: $";
    cin >> amount;
    if (amount > pBalance){
        cout << "Insufficient balance" << endl;
        cout << "*********************************************" << endl;
        return 0;
    }
    else{
        if (amount > 0){
          return amount;
        }
        else{
          cout << "Cannot withdraw a negative amount" << endl;
          cout << "*********************************************" << endl;
        return 0;
        }
    }
}