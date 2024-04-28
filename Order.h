//
// Created by cuske on 17/04/2024.
//

#ifndef PSD_A1_24_ORDER_H
#define PSD_A1_24_ORDER_H

class Order
{
private:
    Host &host;
    Manager &manager;

    vector<string> foodItems;
    vector<pair<string, int>> drinkItems;

public:
    Order(Host &host, Manager &manager) : host(host), manager(manager){};
    void takeOrder();
};

#endif // PSD_A1_24_ORDER_H
