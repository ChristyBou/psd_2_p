#include <memory>
#include <iostream>
#include "Food.h"

using namespace std;

class Pie : public Food {
public:
    void addFood() override {
        cout << "Food.cpp - Pie added to order" << endl;
    }
};

class Chips : public Food {
public:
    void addFood() override {
        cout << "Food.cpp - Chips added to order" << endl;
    }
};

// FoodMaker
unique_ptr<Food> FoodMaker::addPie() {
    return make_unique<Pie>();
}
unique_ptr<Food> FoodMaker::addChips() {
    return make_unique<Chips>();
}