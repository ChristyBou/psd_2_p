#include <vector>
#include <memory>
#include <string>
#include <iostream>

#include "Host.h"
#include "Manager.h"

using namespace std;

void takeOrder()
{
    cout << "Taking order..." << endl;

    // Handle order logic here, e.g., get items from the user
    bool finishedOrdering = false;
    while (!finishedOrdering)
    {
        showMenu();
        int orderNum;
        // cin.getline(orderNum);
        switch (orderNum)
        {
        case 1:
            // black coffee
            // Ask for sugar
            // Add a drinkItem to the order class vector

        case 2:
            // white coffee

        case 3:
            // Chips
            // Add to foodItem order class vector
        case 5:
            finishedOrdering = false;
        }
    }

    vector<string> items = {"item1", "item2", "item3"};
    Manager::handleOrder(items);
}

void showMenu()
{
}