#include "Item.h"
#include <iostream>
using namespace std;

void Item::display() {
    cout << "Product Name: " << name << endl;
    cout << "Category: " << category << endl;
    cout << "Price: " << price << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Expiry Date: " << expiryDate << endl;
}
