#include <memory>
#include <string>
#include <iostream>
#include "Drink.h"

using namespace std;

class Coffee : public Drink {
public:
    Coffee(string coffeeType, int sugar) : coffeeType(coffeeType), sugar(sugar) {}

    void addDrink() override {
        cout << coffeeType << " with " << sugar << " sugar(s) added to order" << endl;
    }

private:
    string coffeeType;
    int sugar;
};


class BlackCoffee : public Coffee {
public:
    explicit BlackCoffee(int sugar) : Coffee("drink.cpp - Black coffee", sugar) {}
};


class WhiteCoffee : public Coffee {
public:
    explicit WhiteCoffee(int sugar) : Coffee("drink.cpp - White coffee", sugar) {}
};

// CoffeeMaker
unique_ptr<Drink> CoffeeMaker::addBlackCoffee(int sugar) {
    return make_unique<BlackCoffee>(sugar);
}
unique_ptr<Drink> CoffeeMaker::addWhiteCoffee(int sugar) {
    return make_unique<WhiteCoffee>(sugar);
}