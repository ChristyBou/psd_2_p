#include "Manager.h"
#include "Host.h"
#include "Drink.h"
#include "Order.h"
#include "Food.h"

#include <iostream>
#include <vector>

using namespace std;

class Manager
{
public:
    Manager(Host &host, Order &order){};
    // These are no makeCoffee, getName and makeFood methods
    static void handleOrder(const vector<string> &items)
    {
        // for (const auto &item : items) {
        //     if (item == "Black" || item == "White") {
        //         CoffeeMaker *coffee = coffee->makeCoffee(item);
        //         cout << "Prepared " << coffee->getName() << endl;
        //         delete coffee;
        //     } else {
        //         Food *food = food->makeFood(item);
        //         cout << "Prepared " << food->getName() << endl;
        //         delete food;
        //     }
        // }
    }
};
