#include <vector>
#include <memory>

#include "Host.h"
#include "Manager.h"

using namespace std;

class Order {
private:
    Host &host;
    Manager &manager;

    vector<string> foodItems;
    vector<pair<string, int>> drinkItems;
    vector<string> preparedFoodItems;
    vector<pair<string, int>> preparedDrinkItems;

public:
    Order(Host &host, Manager &manager) : host(host), manager(manager) {};




};