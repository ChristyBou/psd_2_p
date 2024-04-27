#include <memory>
#include <string>
#include <iostream>

using namespace std;

//abstract
class Drink {
public:
    virtual ~Drink() = default;
    virtual void addDrink() = 0;
};

/**
 **/
class Coffee : public Drink {
public:
    Coffee(string coffeeType, int sugar) : coffeeType(coffeeType), sugar(sugar){}
    void addDrink() override {
        cout << coffeeType << " with " << sugar << " sugar(s) added to order" << endl;
    }

private:
    string coffeeType;
    int sugar;
};

/**
 **/
class BlackCoffee : public Coffee {
public:
    explicit BlackCoffee(int sugar) : Coffee("Black coffee", sugar) {}
};

/**
 **/
class WhiteCoffee : public Coffee {
public:
    explicit WhiteCoffee(int sugar) : Coffee("White coffee", sugar) {}
};

/**
 **/
class CoffeeMaker {
public:
    static unique_ptr<Drink> addBlackCoffee(int sugar) {
        return make_unique<BlackCoffee>(sugar);
    }
    static unique_ptr<Drink> addWhiteCoffee(int sugar) {
        return make_unique<WhiteCoffee>(sugar);
    }
};