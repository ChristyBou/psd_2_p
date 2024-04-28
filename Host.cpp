#include <vector>
#include <iostream>

#include "Manager.h"
#include "Order.h"
#include "Host.h"

// facade
using namespace std;

// Host::Host(){};
// Host(Manager &manager, Order &order) : manager(manager), order(order) {};

void greeting()
{
    cout << "Welcome to Cafe++\n "
            "Can I take your order?\n"
            "We have black or white coffee to drink,\n"
            "to eat we have chips or a pie.\n"
         << endl;
}

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
            // Create a corresponding order with this info

        case 2:
            // white coffee

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
