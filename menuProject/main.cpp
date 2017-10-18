//
//  main.cpp
//  menuProject
//
//  Created by Peter on 10/13/17.
//  Copyright © 2017 Peter. All rights reserved.
//
#include <iostream>
#include <iomanip>
#include <string>

// defin bar item class object
class Item
{
public:
    int inventory = 0;
    std::string name;
    float price;
    float itemTotal = 0;

};

//function prototypes

float priceCost(class Item[], int, int, int);

// inline functions

// does math to update the total of all beer sold
inline float totalUpdate(float cost, float total){
    return total += cost;
}
// does math to update the total of the tips
inline float tipUpdate(float cost, float rate, float total){
    float tip;
    tip = (rate * cost) - cost;
    std::cout << "$" << tip << " would be a nice tip \n\n";
    return total += tip;
}

// main
int main(int argc, const char * argv[]) {
    
//    intitalize variables
//    constants
    const float rate = 1.2; //20% tip rate
    const char Y = 'y', N = 'n';
//    globals
    char res, choice, quit;
    int sad;
    float totalSales, totalTips;
    
//    add values

    quit = 'a';

//    beer prices
    Item Summit;
    Summit.price = 5.50;
    Summit.name = "Summit";
    
    Item Bells;
    Bells.price = 6.00;
    Bells.name = "Bells Two Hearted";
    
    Item Indeed;
    Indeed.price = 6.00;
    Indeed.name = "Indeed LSD";
    
    Item Hamms;
    Hamms.price = 2.99;
    Hamms.name = "Hamms";
    
    Item items[4] = {Summit, Bells, Indeed, Hamms};
    
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
//        local
    int beer = -1, amount = 0;
    float cost;

//        formatting
    std::cout.setf(std::ios::fixed | std::ios::showpoint);
    std::cout.precision(2);
//        main menu
    std::cout << "\t\tPeter's bar Menu\n\n";
    std::cout << "If you order 5 or more you get a $1 off!\n\n";
    std::cout << "1. Summit EPA $" << Summit.price << "\n";
    std::cout << "2. Bell's Two Hearted $" << Bells.price << "\n";
    std::cout << "3. Indeed LSD $" << Indeed.price << "\n";
    std::cout << "4. Hamms $" << Hamms.price << "\n";
    std::cout << "press C to change a price \n";
    std::cout << "press Q to quit \n";
    std::cout << "Enter your choice: \n";
    std::cin >> choice;

        
// Main menu choice switch statement
        
    switch (choice){
    case '1':
        std::cout << "Summit EPA \n";
            beer = 0;
           
        break;
    case '2':
        std::cout << "Bell's Two Hearted \n";
            beer = 1;
         
        break;
    case '3':
        std::cout << "Indeed LSD \n";
            beer = 2;
    
        break;
    case '4':
        std::cout << "Hamms \n";
            beer = 3;
          
        break;
    case 'C':
    case 'c':
            char choice;
            quit = 'c';
            std::cout << "Which price would you like to change\n\n";
            std::cout << "1. Summit EPA $" << Summit.price << "\n";
            std::cout << "2. Bell's Two Hearted $" << Bells.price << "\n";
            std::cout << "3. Indeed LSD $" << Indeed.price << "\n";
            std::cout << "4. Hamms $" << Hamms.price << "\n";
            std::cout << "press Q to quit \n";
            std::cout << "Enter your choice: \n";
            std::cin >> choice;
            switch (choice){
                case '1':
                    std::cout << "1. Summit EPA $" << Summit.price << "\n";
                    std::cout << "Enter the new price: \n";
                    std::cin.width(5);
                    std::cin >> Summit.price;
                    std::cout << "The new price is: "<< Summit.price <<" \n";
                    break;
                case '2':
                    std::cout << "2. Bell's Two Hearted $" << Bells.price << "\n";
                    std::cout << "Enter the new price: \n";
                    std::cin.width(5);
                    std::cin >> Bells.price;
                    std::cout << "The new price is: "<< Bells.price <<" \n";
                    break;
                case '3':
                    std::cout << "3. Indeed LSD $" << Indeed.price << "\n";
                    std::cout << "Enter the new price: \n";
                    std::cin.width(5);
                    std::cin >> Indeed.price;
                    std::cout << "The new price is: "<< Indeed.price <<" \n";
                    break;
                case '4':
                    std::cout << "4. Hamms $" << Hamms.price << "\n";
                    std::cout << "Enter the new price: \n";
                    std::cin.width(5);
                    std::cin >> Hamms.price;
                    std::cout << "The new price is: "<< Hamms.price <<" \n";
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
        if(beer > -1){
            std::cout << "How many would you like? \n";
            std::cin >> amount;
            cost = priceCost(items, beer, amount, sad);
            totalSales = totalUpdate(cost, totalSales);
            totalTips = tipUpdate(cost, rate, totalTips);
        }
    } while (quit != 'q');
    
//    display running totals

    std::cout.setf(std::ios::fixed | std::ios::showpoint | std::ios::left);
    std::cout << "We sold $" << totalSales << " today!\n";
    std::cout << std::endl;
    std::cout << std::setw(18) << "Item";
    std::cout << std::setw(18) << "Sold";
    std::cout << std::setw(18) << "Total" << std::endl;
    std::cout << "---------------------------------------\n";
// loop to display inventory totals
    for(int i = 0; i < sizeof(items)/sizeof(items[0]); i++){
        std::cout << std::setw(18) << items[i].name;
        std::cout << std::setw(18) << items[i].inventory;
        std::cout << std::setw(18) << items[i].itemTotal << std::endl;
    }
    std::cout << "We also made $" << totalTips << " in tips today!\n";
//    end program
    return 0;
}

//function definitions
// does math to calculate price and tip. takes the beer type and amount as arguements
float priceCost(class Item beer[], int index, int amount, int sad){
    float cost;
    if(amount > 5 || sad){
        beer[index].price -= 1;
        std::cout << "You're getting a deal! \n";
    }
    cost = beer[index].price * amount;
    beer[index].inventory += amount;
    beer[index].itemTotal += cost;
    std::cout << "You owe me $" << cost << "! \n";
    return cost;
    }

