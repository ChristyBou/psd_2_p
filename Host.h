
#ifndef PSD_A1_24_HOST_H
#define PSD_A1_24_HOST_H

#include "Manager.h"

class Host
{
    Manager man;
    Order ord;
    Drink &drk;
    Food &fod;

public:
    Host(Manager manager, Order order, Drink &drink, Food &food);
    void greeting();
    void sendToOrder();
    void sendOrderToManager();
    void serverOrder();
};

#endif // PSD_A1_24_HOST_H
