//
//  main.cpp
//  menuProject
//
//  Created by Peter on 10/13/17.
//  Copyright © 2017 Peter. All rights reserved.
//
//int argc, const char * argv[]
#include <iostream>

int main() {
    int choice, amount;
    float cost, summit, bells, indeed, hamms, rate, tip;
    summit = 5.50;
    bells = 6.00;
    indeed = 6.00;
    hamms = 2.99;
    rate = 1.2;
    
    std::cout << "\t\tPeter's bar Menu\n\n";
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
        cost = summit * amount;
        std::cout << "You owe me $" << cost << "! \n";
        tip = (rate * cost) - cost;
        std::cout << "$" << tip << " would be a nice tip \n";
    }  else if(choice == 2){
        std::cout << "Bell's Two Hearted \n";
        std::cout << "How many would you like? \n";
        std::cin >> amount;
        cost = bells * amount;
       std::cout << "You owe me $" << cost << "! \n";
        tip = (rate * cost) - cost;
        std::cout << "$" << tip << " would be a nice tip \n";
    } else if(choice == 3){
        std::cout << "Indeed LSD \n";
        std::cout << "How many would you like? \n";
        std::cin >> amount;
        cost = indeed * amount;
       std::cout << "You owe me $" << cost << "! \n";
        tip = (rate * cost) - cost;
        std::cout << "$" << tip << " would be a nice tip \n";
    } else if(choice == 4){
        std::cout << "Hamms \n";
        std::cout << "How many would you like? \n";
        std::cin >> amount;
        cost = hamms * amount;
        std::cout << "You owe me $" << cost << "! \n";
        tip = (rate * cost) - cost;
        std::cout << "$" << tip << " would be a nice tip \n";
    } else {
        std::cout << "We don't have that.\n Rerun and try again \n";
    }
    return 0;
}
