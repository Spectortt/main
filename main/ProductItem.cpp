#include "ProductItem.h"
#include <iostream>
using namespace std;

void ProductItem::display() {
    cout << "Product Name: " << name << endl;
    cout << "Category: " << category << endl;
    cout << "Price: " << price << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Brand: " << brand << endl;
}
