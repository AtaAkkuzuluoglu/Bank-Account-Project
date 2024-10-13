#include <iostream>

int main() {

    double balance = 0;
    double deposit;
    double withdraw;
    double number;

        std::cout << "Your balance is: $" << balance << std::endl;
    
    do {    
        std::cout << "Press 1 for checking the balance, press 2 for withdrawal, press 3 for deposit, press 4 for exit.";
        std::cin >> number;

    if(number == 1) {
        std::cout << "Your balance is: $" << balance << std::endl;
    }

    if(number == 2) {
        std::cout << "State the amount you want to withdraw: " << std::endl;
        std::cin >> withdraw;
        if( withdraw <= 0) {
            std::cout << "Withdrawal can't be negative or zero" << std::endl;
        }
        else if(balance >= withdraw) {
             balance = balance - withdraw;
        }
        else {
            std::cout << "You don't have enough money" << std::endl;
        }
    }

    if(number == 3) {
        std::cout << "State the amount you want to deposit: " << std::endl;
        std::cin >> deposit;
        if(deposit > 0) {
            balance = deposit + balance;
        }
        else {
            std::cout << "Your deposit can't be negative or zero" << std::endl;
        }
    }
    if(number == 4) {
        std::cout << "Thanks for your time";
        break;
    }

    if(number <1 || number >4) {
        std::cout << "Invalid choice, Exiting.";
        break;
    }

    }while(number != 4);

    return 0;
}