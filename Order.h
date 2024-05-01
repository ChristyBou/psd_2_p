#ifndef PSD_A1_24_ORDER_H
#define PSD_A1_24_ORDER_H

#include <vector>
#include <iostream>

#include "Manager.h"
#include "Host.h"
#include "Drink.h"
#include "Food.h"

using namespace std;

class Order {
private:
    Host &host;
    Manager &manager;

public:
    Order(Host &host, Manager &manager) : host(host), manager(manager){};

    vector<string> foodItems_h;
    vector<pair<string, int>> drinkItems_h;
    vector<Food> finalisedFoodItems_h;
    vector<Drink> finalisedDrinkItems_h;

    void getOrder();
};

#endif // PSD_A1_24_ORDER_H