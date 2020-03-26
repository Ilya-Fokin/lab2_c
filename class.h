#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED

using namespace std;

class Product
{
private:
    string Name;
    int Size;
    string Color;

public:
    Product();
    Product(const Product &product1);
    Product(const string Name1,int Size1,const string Color1);

    void print();

    void setName(const string product_name);
    void setSize(int product_size);
    void setColor(const string product_color);
    string getColor() const;
    int getSize() const;
    string getName() const;


    Product& operator++();
    Product& operator--();
    Product& operator=(const Product &product1);
    friend ostream& operator << (ostream &out, const Product &product1);
    friend istream& operator >> (istream& in, Product& product1);
    bool operator==(const Product product1) const;
    bool operator!=(const Product product1) const;
    bool operator>(const Product &product1) const;
    bool operator>=(const Product &product1) const;
    bool operator<=(const Product &product1) const;
    bool operator<(const Product &product1) const;
};

#endif // CLASS_H_INCLUDED
