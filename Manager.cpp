#include "Manager.h"
#include "Host.h"
#include "Drink.h"
#include "Order.h"
#include "Food.h"

#include <iostream>
#include <vector>

using namespace std;

// These are no makeCoffee, getName and makeFood methods
static void handleOrder(Order order)
{
    // if (!order.foodItems.empty())
    // {
    //     // Do food stuff
    //     for (const auto item : order.foodItems)
    //     {
    //     }
    // }

    if (!order.drinkItems.empty())
    {
        // Do drink stuff
        for (const auto &item : order.drinkItems)
        {
            if (item.first == "Black")
            {
                std::unique_ptr coffee = CoffeeMaker::addBlackCoffee(item.second);
            }
            else if (item.first == "White")
            {
                std::unique_ptr coffee = CoffeeMaker::addWhiteCoffee(item.second);
                // Add coffee to finilisedDrinkItems
            }
        }
    }

    if (!order.foodItems.empty())
    {
        // Do drink stuff
        for (const auto &item : order.foodItems)
        {
            if (item == "Pie")
            {
                std::unique_ptr pie = FoodMaker::addPie();
                // Add pie to finilisedFoodItems
            }
            else if (item == "Chips")
            {
                std::unique_ptr pie = FoodMaker::addChips();
            }
        }
    }
}
