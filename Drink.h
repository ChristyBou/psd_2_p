//
// Created by cuske on 17/04/2024.
//

#ifndef PSD_A1_24_DRINK_H
#define PSD_A1_24_DRINK_H

class Drink
{
public:
    virtual ~Drink() = default;
    virtual void addDrink() = 0;
};

class CoffeeMaker
{
    // No make coffee method
};
#endif // PSD_A1_24_DRINK_H
