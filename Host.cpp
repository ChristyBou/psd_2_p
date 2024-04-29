#include <vector>
#include <iostream>

#include "Manager.h"
#include "Order.h"
#include "Host.h"

// facade
using namespace std;

Host::Host(Manager manager, Order order, Drink &drink, Food &food)
    : man(manager), ord(order), drk(drink), fod(food) {}
// Host(Manager &manager, Order &order) : manager(manager), order(order) {};

void Host::greeting()
{
    cout << "Welcome to Cafe++\n "
            "Can I take your order?\n"
            "We have black or white coffee to drink,\n"
            "to eat we have chips or a pie.\n"
         << endl;
    // Direct the user to the order method
    sendToOrder();
}

void Host::sendToOrder()
{
    ord.takeOrder();
    sendOrderToManager();
}

void Host::sendOrderToManager()
{
    man.handleOrder(ord);
}

void Host::serverOrder()
{
}
