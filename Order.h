//
// Created by cuske on 17/04/2024.
//
#include <vector>

#include "Manager.h"
#include "Host.h"
#include "Drink.h"
#include "Food.h"

#ifndef PSD_A1_24_ORDER_H
#define PSD_A1_24_ORDER_H

class Order
{
private:
    Host &host;
    Manager &manager;

public:
    vector<string> foodItems;
    vector<pair<string, int>> drinkItems;
    vector<Food> finilisedFoodItems;
    vector<Drink> finilisedDrinkItems;
    Order(Host &host, Manager &manager) : host(host), manager(manager){};
    void takeOrder();
};

#endif // PSD_A1_24_ORDER_H
