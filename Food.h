
#ifndef PSD_A1_24_FOOD_H
#define PSD_A1_24_FOOD_H

class Food
{
public:
    virtual ~Food() = default;
    virtual void addFood() = 0;
};
class FoodMaker
{
    // No make coffee method
public:
    static unique_ptr<Food> addPie();
    static unique_ptr<Food> addChips();
};
#endif // PSD_A1_24_FOOD_H
