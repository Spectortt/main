#include <vector>
#include "Product.h"
#include "Item.h"
#include "ProductItem.h"

class Supermarket {
private:
    vector<Product*> products;
public:
    void addProduct(Product* product);
    void displayProducts();
    void removeProduct(string name);
    ~Supermarket();
};
