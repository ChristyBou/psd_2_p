
#ifndef PSD_A1_24_HOST_H
#define PSD_A1_24_HOST_H

#include "Manager.h"

class Host {
protected:
    Manager manager;

public:
    Host() {}

    void takeOrder();
};

#endif //PSD_A1_24_HOST_H
