#include "Manager.h"

#include <iostream>

using namespace std;

void Manager::handleOrder(Order order) {
    if (!order.drinkItems_h.empty()) {
        for (const auto &item: order.drinkItems_h) {
            if (item.first == "Black") {
                unique_ptr coffee = CoffeeMaker::addBlackCoffee(item.second);
            } else if (item.first == "White") {
                unique_ptr coffee = CoffeeMaker::addWhiteCoffee(item.second);
                //vector in vector, incorrect
                //order.finalisedDrinkItems_h.push_back(drinkItems_h);
            }
        }
    }

    if (!order.foodItems_h.empty()) {

        for (const auto &item: order.foodItems_h) {
            if (item == "Pie") {
                unique_ptr pie = FoodMaker::addPie();
                //order.finalisedFoodItems_h.push_back(foodItems_h);
            } else if (item == "Chips") {
                unique_ptr pie = FoodMaker::addChips();
                //order.finalisedFoodItems_h.push_back(foodItems_h);
            }
        }
    }
}