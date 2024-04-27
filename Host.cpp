#include <vector>
#include <iostream>

#include "Manager.h"
#include "Order.h"

// facade
using namespace std;

class Host {
private:
    Manager &manager;
    Order &order;

public:
    Host(Manager &manager, Order &order) : manager(manager), order(order) {};

    void greeting() {
        cout << "Welcome to Cafe++\n "
                "Can I take your order?\n"
                "We have black or white coffee to drink,\n"
                "to eat we have chips or a pie.\n" << endl;
    }

    void takeOrder() {
        cout << "Taking order..." << endl;
        // Handle order logic here, e.g., get items from the user

        vector<string> items = {"item1", "item2", "item3"};
        manager.handleOrder(items);
    }

};