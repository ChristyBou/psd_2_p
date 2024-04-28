
#ifndef PSD_A1_24_HOST_H
#define PSD_A1_24_HOST_H

#include "Manager.h"

class Host
{
protected:
    Manager manager;

private:
    Manager &manager;
    Order &order;

public:
    // Host() {}
    void greeting();
    void sendToOrder();
    void sendOrderToManager();
    void serverOrder();
};

#endif // PSD_A1_24_HOST_H
