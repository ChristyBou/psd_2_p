#include <iostream>

#include "Host.h"

// facade
using namespace std;

Host::Host(Manager manager, Order order, Drink &drink, Food &food)
        : manager_h(manager), order_h(order), drink_h(drink), food_h(food) {}


void Host::startOrderProcess() {
    order_h.getOrder();
    //send order to manager
    manager_h.handleOrder(order_h)
    serverOrder();
}

void Host::greeting() {
    cout << "Welcome to Cafe++\n "
            "Can I take your order?\n"
            "We have black or white coffee to drink,\n"
            "to eat we have chips or a pie.\n" << endl;
    // Direct the user to the order method
    //sendToOrder();
}

void Host::showMenu() {
    cout << "Menu: \n"
            "1. Black coffee \n"
            "2. White coffee \n"
            "3. Pie \n"
            "4. Chips \n"
            "Enter the number of the item you want to order, \n"
            "or press x to finish: " << endl;
}

void Host::serverOrder() {
    cout << "host.cpp - serveOrder() - nothing implemented yet " << endl;
}