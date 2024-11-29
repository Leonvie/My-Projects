#include <iostream>
#include <string>
#include <unistd.h>


// ---------------------------PLEASE READ BEFORE LOOKING AT THE CODE!!!!--------------------------------------------------------
/*LAZY CODING, 
I could write this Object/Class orientated with Bank and Wallet being their own classes with their own functions. 
I wrote this whole code within 1 hour to test my ability and see if I remember everything I learned without errors. 
There aren't any known Errors or Bugs in this script. 
*/


// MY BANK SCRIPT, YOU CAN DEPOSIT, WITHDRAW OR LOOK AT YOUR MONEY!

int main() {

    //----------Wallet/Bank Values--------------------
    int Current_BankValue = 850;
    int Current_WalletValue = 150;
    //------------------------------------------------

    bool Bank_Action = true;

    std::string Bank_Question;
    int deposit_InputValue;
    int withdraw_InputValue;

    while (!Bank_Action == false) {
        std::cout << "Would you like to [Deposit], [Withdraw] or View your [Money] ? " << std::endl;
        std::cin >> Bank_Question;

        for (int i = 1; i <= 1; i++) {
            usleep(500000);
            std::cout << "." << std::endl;
        } //Time Stopper


        if (Bank_Question == "money" || Bank_Question == "Money") {
            for (int i = 1; i <= 3; i++) {
                usleep(500000);
                std::cout << "." << std::endl;
            }//Time Stopper
            std::cout << "Your Current Money on your Bank: [" << Current_BankValue << "]" << std::endl;
            std::cout << "Your Current Money in your Wallet: [" << Current_WalletValue << "]" << std::endl;
        }

        if (Bank_Question == "deposit" || Bank_Question == "Deposit") {
            std::cout << "Bank_Account: [" << Current_BankValue << "]  " << "Your Walled: [" << Current_WalletValue << "]" << std::endl;
            std::cout << "How much money would you like to put on your Account? " << std::endl;
            std::cin >> deposit_InputValue;
            for (int i = 1; i <= 1; i++) {
                usleep(500000);
                std::cout << "." << std::endl;
            } //Time Stopper

            if (deposit_InputValue < Current_WalletValue || deposit_InputValue == Current_WalletValue) {
                for (int i = 1; i <= 3; i++) {
                    usleep(500000);
                    std::cout << "." << std::endl;
                } //Time Stopper

                Current_WalletValue -= deposit_InputValue;    // The Transaction of the whole thing
                Current_BankValue += deposit_InputValue;

                std::cout << "you added [" << deposit_InputValue << "] To your Account!" <<std::endl;
                std::cout << "Your current BANK Value is = [" << Current_BankValue << "]" << std::endl;
                std::cout << "Your current WALLET Value is = [" << Current_WalletValue << "]" << std::endl;
                std::cout << "." << std::endl;
            } else if( deposit_InputValue > Current_WalletValue || Current_WalletValue == 0) {
                std::cout << "You don't have enough Money to put that Amount in!" << std::endl;
                std::cout << "Try Again!!! But with a amount you're owning!" << std::endl;
                std::cout << "." << std::endl;
            }
        }
        else if (Bank_Question == "withdraw" || Bank_Question == "Withdraw") {
            std::cout << "Bank_Account: [" << Current_BankValue << "]  " << "Your Walled: [" << Current_WalletValue << "]" << std::endl;
            std::cout << "How much money would you like to Withdraw? " << std::endl;
            std::cin >> withdraw_InputValue;

            for (int i = 1; i <= 1; i++) {
                usleep(500000);
                std::cout << "." << std::endl;
            } //Time Stopper

            if (withdraw_InputValue < Current_BankValue || withdraw_InputValue == Current_BankValue) {
                for (int i = 1; i <= 3; i++) {
                    usleep(500000);
                    std::cout << "." << std::endl;
                } //Time Stopper

                Current_BankValue -= withdraw_InputValue;    // The Transaction of the whole thing
                Current_WalletValue += withdraw_InputValue;

                std::cout << "you added [" << withdraw_InputValue << "] To your Wallet!" <<std::endl;
                std::cout << "Your current BANK Value is = [" << Current_BankValue << "]" << std::endl;
                std::cout << "Your current WALLET Value is = [" << Current_WalletValue << "]" << std::endl;
                std::cout << "." << std::endl;

            } else if( withdraw_InputValue > Current_BankValue || Current_BankValue == 0) {
                std::cout << "There isn't enough Money on your Bank-Account for that amount!" << std::endl;
                std::cout << "Try Again!!! But with a amount you're owning!" << std::endl;
                std::cout << "." << std::endl;
            }
        }
        else {
            std::cout << "ERROR! = Please Enter [Deposit], [Withdraw] or [Money] " << std::endl;
            std::cout << "." << std::endl;
        }
    }
}
