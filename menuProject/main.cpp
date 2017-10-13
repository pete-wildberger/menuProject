//
//  main.cpp
//  menuProject
//
//  Created by Peter on 10/13/17.
//  Copyright © 2017 Peter. All rights reserved.
//
#include <iostream>

int main(int argc, const char * argv[]) {
//    intitalize variables
    char Y, N, res;
    int choice, amount, sad;
    float cost, summit, bells, indeed, hamms, rate, tip;
//    add values
    Y = 'y';
    N = 'n';
    summit = 5.50;
    bells = 6.00;
    indeed = 6.00;
    hamms = 2.99;
    rate = 1.2;
    
//Happiness checker
    std::cout << "How are you doing?\n";
    std::cout << "Are you having a good day? (Y or N) \n";
    std::cin >> res;
    if(tolower(res) == Y){
        sad = 0;
        std::cout << "Glad to hear it! Checkout our menu: \n\n";
    } else if (tolower(res) == N){
        sad = 1;
        std::cout << "That's too bad. Checkout our menu: \n\n";
    } else {
        sad = 0;
        std::cout << "Thanks for answering sincerely. Checkout our menu: \n\n";
    }
    
//    main menu
    std::cout << "\t\tPeter's bar Menu\n\n";
    std::cout << "If you order 5 or more you get a $1 off!\n\n";
    std::cout << "1. Summit EPA\n";
    std::cout << "2. Bell's Two Hearted\n";
    std::cout << "3. Indeed LSD\n";
    std::cout << "4. Hamms\n";
    std::cout << "Enter your choice: \n";
    std::cin >> choice;
    std::cout.setf(std::ios::fixed | std::ios::showpoint);
    std::cout.precision(2);
    if (choice == 1){
        std::cout << "Summit EPA \n";
        std::cout << "How many would you like? \n";
        std::cin >> amount;
        if(amount > 5 || sad){
            summit -= 1;
            std::cout << "You're getting a deal! \n";
        }
        cost = summit * amount;
        std::cout << "You owe me $" << cost << "! \n";
        tip = (rate * cost) - cost;
        std::cout << "$" << tip << " would be a nice tip \n";
    }  else if(choice == 2){
        std::cout << "Bell's Two Hearted \n";
        std::cout << "How many would you like? \n";
        std::cin >> amount;
        if(amount > 5 || sad){
            bells -= 1;
            std::cout << "You're getting a deal! \n";
        }
        cost = bells * amount;
       std::cout << "You owe me $" << cost << "! \n";
        tip = (rate * cost) - cost;
        std::cout << "$" << tip << " would be a nice tip \n";
    } else if(choice == 3){
        std::cout << "Indeed LSD \n";
        std::cout << "How many would you like? \n";
        std::cin >> amount;
        if(amount > 5 || sad){
            indeed -= 1;
            std::cout << "You're getting a deal! \n";
        }
        cost = indeed * amount;
       std::cout << "You owe me $" << cost << "! \n";
        tip = (rate * cost) - cost;
        std::cout << "$" << tip << " would be a nice tip \n";
    } else if(choice == 4 || sad){
        std::cout << "Hamms \n";
        std::cout << "How many would you like? \n";
        std::cin >> amount;
        if(amount > 5){
            hamms -= 1;
            std::cout << "You're getting a deal! \n";
        }
        cost = hamms * amount;
        std::cout << "You owe me $" << cost << "! \n";
        tip = (rate * cost) - cost;
        std::cout << "$" << tip << " would be a nice tip \n";
    } else {
        std::cout << "We don't have that.\n Rerun and try again \n";
    }
    return 0;
}
