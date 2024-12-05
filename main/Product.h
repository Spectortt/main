#ifndef PRODUCT_H
#define PRODUCT_H

class Product {
protected:
    string name;
    string category;
    float price;
    int quantity;
public:
    Product(string n, string c, float p, int q) : name(n), category(c), price(p), quantity(q) {}
    virtual void display() = 0;
    virtual ~Product() {}

    string getName() const { return name; }
};

#endif 