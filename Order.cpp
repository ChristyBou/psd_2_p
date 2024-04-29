#include <vector>
#include <memory>
#include <string>
#include <iostream>

#include "Host.h"
#include "Manager.h"
#include "Order.h"

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
            int sugar = 0;
            // cin.getline(sugar);

            drinkItems.first.push_back("Black");
            drinkItems.second.push_back(sugar);
            // Add a drinkItem to the order class vector

        case 2:
            // white coffee

        case 3:
            // Pie
            // Add to foodItem order class vector
            foodItems.push_back("Pie");

        case 4:
            // Chips
            foodItems.push_back("Chips");
        case 5:
            finishedOrdering = false;
        }
    }

    // Create an order item to pass through?
    // Manager::handleOrder();
}

void showMenu()
{
}