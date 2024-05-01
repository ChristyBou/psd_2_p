#include <vector>
#include <string>
#include <iostream>

#include "Order.h"

using namespace std;

void Order::getOrder() {
    cout << "Order.cpp - getOrder() user inputs numbers from menu" << endl;

    bool finishedOrdering = false;
    while (!finishedOrdering) {
        //Host::showMenu();
        int menuNum;
        cin >> menuNum;
        int sugar = 0;
        switch (menuNum) {
            case 1: {
                // black coffee
                cout << "Black coffee - how many sugar? (0-4) " << endl;
                cin >> sugar;
                string drinkName = "Black coffee ";
                drinkItems_h.emplace_back(make_pair(drinkName, sugar));

//                for(auto &item : drinkItems_h) {
//                    finalisedDrinkItems_h.push_back(make_pair(item.first, item.second));
//                }

                cout << "Order.cpp - Black coffee and " << sugar << " sugar/s added to order" << endl;
                break;
            }

            case 2: {
                // white coffee

                cout << "White coffee - how many sugar? (0-4) " << endl;
                cin >> sugar;
                string drinkName = "White coffee ";
                drinkItems_h.emplace_back(make_pair(drinkName, sugar));
                //finalisedDrinkItems_h.push_back(make_pair(drinkName, sugar));

                cout << "Order.cpp - White coffee and " << sugar << " sugar/s added to order" << endl;
                break;
            }

            case 3:
                cout << "order.cpp - A pie added to order" << endl;
                foodItems_h.push_back("Pie");
                break;

            case 4:
                cout << "order.cpp - Some chips added to order" << endl;
                foodItems_h.push_back("Chips");

            default:
                finishedOrdering = true;
        }
    }

    Manager::handleOrder();
}

