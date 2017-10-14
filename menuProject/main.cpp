//
//  main.cpp
//  menuProject
//
//  Created by Peter on 10/13/17.
//  Copyright © 2017 Peter. All rights reserved.
//
#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    
//    intitalize variables
    char Y, N, res, choice, quit;
    int  amount, sad;
    float cost, summit, bells, indeed, hamms, rate, tip, totalSales, totalTips;
    
//    add values
    Y = 'y';
    N = 'n';
    quit = 'a';
    summit = 5.50;
    bells = 6.00;
    indeed = 6.00;
    hamms = 2.99;
    rate = 1.2;
    totalSales = 0;
    totalTips = 0;
    
//    Happiness checker
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
    
//    program main menu do-while loop
    
    do {
    std::cout.setf(std::ios::fixed | std::ios::showpoint);
    std::cout.precision(2);
    std::cout << "\t\tPeter's bar Menu\n\n";
    std::cout << "If you order 5 or more you get a $1 off!\n\n";
    std::cout << "1. Summit EPA $" << summit << "\n";
    std::cout << "2. Bell's Two Hearted $" << bells << "\n";
    std::cout << "3. Indeed LSD $" << indeed << "\n";
    std::cout << "4. Hamms $" << hamms << "\n";
    std::cout << "press C to change a price \n";
    std::cout << "press Q to quit \n";
    std::cout << "Enter your choice: \n";
    std::cin >> choice;

        
// Main menu choice switch statement
        
    switch (choice){
    case '1':
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
        std::cout << "$" << tip << " would be a nice tip \n\n";
            totalSales += cost;
            totalTips += tip;
        break;
    case '2':
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
        std::cout << "$" << tip << " would be a nice tip \n\n";
            totalSales += cost;
            totalTips += tip;
        break;
    case '3':
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
        std::cout << "$" << tip << " would be a nice tip \n\n";
            totalSales += cost;
            totalTips += tip;
        break;
    case '4':
        std::cout << "Hamms \n";
        std::cout << "How many would you like? \n";
        std::cin >> amount;
        if(amount > 5 || sad){
            hamms -= 1;
            std::cout << "You're getting a deal! \n";
        }
        cost = hamms * amount;
        std::cout << "You owe me $" << cost << "! \n";
        tip = (rate * cost) - cost;
        std::cout << "$" << tip << " would be a nice tip \n\n";
            totalSales += cost;
            totalTips += tip;
        break;
    case 'C':
    case 'c':
            char choice;
            std::cout << "Which price would you like to change\n\n";
            std::cout << "1. Summit EPA $" << summit << "\n";
            std::cout << "2. Bell's Two Hearted $" << bells << "\n";
            std::cout << "3. Indeed LSD $" << indeed << "\n";
            std::cout << "4. Hamms $" << hamms << "\n";
            std::cout << "press Q to quit \n";
            std::cout << "Enter your choice: \n";
            std::cin >> choice;
            switch (choice){
                case '1':
                    std::cout << "1. Summit EPA $" << summit << "\n";
                    std::cout << "Enter the new price: \n";
                    std::cin.width(5);
                    std::cin >> summit;
                    std::cout << "The new price is: "<< summit <<" \n";
                    break;
                case '2':
                    std::cout << "2. Bell's Two Hearted $" << bells << "\n";
                    std::cout << "Enter the new price: \n";
                    std::cin.width(5);
                    std::cin >> bells;
                    std::cout << "The new price is: "<< bells <<" \n";
                    break;
                case '3':
                    std::cout << "3. Indeed LSD $" << indeed << "\n";
                    std::cout << "Enter the new price: \n";
                    std::cin.width(5);
                    std::cin >> indeed;
                    std::cout << "The new price is: "<< indeed <<" \n";
                    break;
                case '4':
                    std::cout << "4. Hamms $" << hamms << "\n";
                    std::cout << "Enter the new price: \n";
                    std::cin.width(5);
                    std::cin >> hamms;
                    std::cout << "The new price is: "<< hamms <<" \n";
                    break;
                case 'Q':
                case 'q':
                    break;
                default:
                    std::cout << "Try again.\n";
                }
            break;
    case 'Q':
    case 'q':
            quit = 'q';
            break;
    default:
        std::cout << "We don't have that.\n";
    
        }
    } while (quit != 'q');
    
//    display running totals
    std::cout << "We sold $" << totalSales << " today!\n";
    std::cout << "We made $" << totalTips << " in tips today!\n";
//    end program
    return 0;
}
