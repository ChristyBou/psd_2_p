//
// Created by cuske on 17/04/2024.
//

#ifndef PSD_A1_24_MANAGER_H
#define PSD_A1_24_MANAGER_H

#include "Manager.h"
#include "Host.h"
#include "Drink.h"
#include "Order.h"
#include "Food.h"

class Manager
{
public:
    static void handleOrder(Order order);
};

#endif // PSD_A1_24_MANAGER_H
