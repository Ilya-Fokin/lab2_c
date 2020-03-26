#include <iostream>
#include "class.h"
#include <cstring>

using namespace std;

    Product::Product()
    {
      Name="T-shirt";
      Size=52;
      Color="Red";
    }

    Product::Product(const Product &product1)
    {
        this->Name=product1.Name;
        this->Size=product1.Size;
        this->Color=product1.Color;
    }

 Product::Product(const string Name1,int Size1,const string Color1)
    {
       this->Name=Name1;
       this->Size=Size1;
       this->Color=Color1;
    }

    void Product::print()
    {
        cout<<"Название продукта: "<<Name<<endl<<"Размер продукта: "<<Size<<endl<<"Цвет продукта: "<<Color<<endl;
    }


    /*Set*/
    void Product::setName(const string product_name)
    {
        this->Name=product_name;
    }
    void Product::setColor(const string product_color)
    {
        this->Color=product_color;
    }
    void Product::setSize(int product_size)
    {
        this->Size=product_size;
    }


    /*Get*/
    string Product::getName() const
    {
        return Name;
    }
    int Product::getSize() const
    {
        return Size;
    }
    string Product::getColor() const
    {
        return Color;
    }



    Product& Product::operator++()
    {
        Size+=2;
        return *this;
    }

    Product& Product::operator--()
    {
        Size-=2;
        return *this;
    }

    ostream& operator << (ostream &out, const Product& product1)
{
    out << "Name: " << product1.Name << "\n"<<"Size: "<<  product1.Size <<"\n"<< "Color: "<< product1.Color <<endl;
    return out;
}

istream& operator >> (istream& in, Product& product1)
{
    in >> product1.Name >> product1.Size>>product1.Color;
    return in;
}

 Product& Product::operator=(const Product &product1)
 {

    this->Name = product1.Name;
    this->Size = product1.Size;
    this->Color = product1.Color;
    return *this;
}

bool Product::operator==(const Product product1) const
{
    if(Name == product1.Name &&
       Size== product1.Size&&
       Color== product1.Color)
       return 1;
       return 0;
}

bool Product::operator!=(const Product product1) const
{
    if(*(this)==product1)
    return 0;
    return 1;
}

bool Product::operator>(const Product &product1) const
{
    if (Size>product1.Size)
    {return 1;}
    return 0;
}

bool Product::operator>= (const Product &product1) const
{
    if (Size>=product1.Size)
    {return 1;}
    return 0;
}

bool Product::operator< (const Product &product1) const
{
    if (Size<product1.Size)
   {return 1;}
    return 0;
}

bool Product::operator<= (const Product &product1) const
{
    if (Size<=product1.Size)
    {return 1;}
    return 0;
}


