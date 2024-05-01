#ifndef PSD_A1_24_HOST_H
#define PSD_A1_24_HOST_H

#include "Manager.h"

class Host {
private:
    Manager manager_h;
    Order order_h;
    Drink &drink_h;
    Food &food_h;

public:
    Host(Manager manager, Order order, Drink &drink, Food &food);
    void greeting();
    static void showMenu();
    void startOrderProcess();
    void serverOrder();
};

#endif // PSD_A1_24_HOST_H