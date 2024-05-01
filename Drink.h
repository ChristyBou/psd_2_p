#ifndef PSD_A1_24_DRINK_H
#define PSD_A1_24_DRINK_H

#include <memory>

using namespace std;

class Drink {
public:
    virtual ~Drink() = default;
    virtual void addDrink() = 0;
};

class CoffeeMaker {
public:
    static unique_ptr <Drink> addBlackCoffee(int sugar);
    static unique_ptr <Drink> addWhiteCoffee(int sugar);
};

#endif // PSD_A1_24_DRINK_H