#include "Supermarket.h"
#include "ProductItem.h" 
#include "Item.h"          
#include <iostream>
using namespace std;


void Supermarket::addProduct(Product* product) {
    products.push_back(product);
}

void Supermarket::displayProducts() {
    for (Product* product : products) {
        product->display();
        cout << endl;
    }
}

void Supermarket::removeProduct(string name) {
    auto it = remove_if(products.begin(), products.end(), [&name](Product* product) {
        return product->getName() == name;
        });
    products.erase(it, products.end());
}

Supermarket::~Supermarket() {
    for (Product* product : products) {
        delete product;
    }
}
