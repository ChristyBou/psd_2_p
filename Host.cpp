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

void sendToOrder()
{
    Order *order = order->takeOrder();
}
