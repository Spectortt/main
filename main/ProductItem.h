#include "Product.h"

class ProductItem : public Product {
private:
    string brand;
public:
    ProductItem(string n, string c, float p, int q, string b)
        : Product(n, c, p, q), brand(b) {}
    void display() override;
};
