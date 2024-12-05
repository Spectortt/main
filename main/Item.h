#include "Product.h"

class Item : public Product {
private:
    string expiryDate;
public:
    Item(string n, string c, float p, int q, string expiry)
        : Product(n, c, p, q), expiryDate(expiry) {}
    void display() override;
};
