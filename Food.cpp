#include <memory>
#include <iostream>
#include <Food.h>

using namespace std;

// abstract

/**
 **/
class Pie : public Food
{
public:
    void addFood() override
    {
        cout << "Pie added to order" << endl;
    }
};

/**
 **/
class Chips : public Food
{
public:
    void addFood() override
    {
        cout << "Chips added to order" << endl;
    }
};

/**
 **/
class FoodMaker
{
public:
    static unique_ptr<Food> addPie()
    {
        return make_unique<Pie>();
    }
    static unique_ptr<Food> addChips()
    {
        return make_unique<Chips>();
    }
};
