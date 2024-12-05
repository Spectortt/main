#include "Supermarket.h"
#include "Product.h"
#include "ProductItem.h"
#include "Item.h"
#include <iostream>
using namespace std;

int main() {
    Supermarket supermarket;

    supermarket.addProduct(new Item("Milk", "Dairy", 1.5, 20, "2024-12-01"));
    supermarket.addProduct(new ProductItem("Shampoo", "Cosmetics", 5.0, 15, "BrandX"));

    cout << "Products in supermarket:" << endl;
    supermarket.displayProducts();

    supermarket.removeProduct("Milk");

    cout << "\nProducts after removal:" << endl;
    supermarket.displayProducts();

    return 0;
}