//
// Created by el_me on 29/01/2018.
//

#ifndef PO_GCEZAR_A04_CUSTOMER_H
#define PO_GCEZAR_A04_CUSTOMER_H


#include <string>

class Customer {
private:
    int id;
    std::string name;
    double discount;

public:
    Customer (int id, std::string, double discount);
    int getID();
    std::string getName();
    double getDiscount();
    void setDiscount(double discount);
    std::string toString();
};


#endif //PO_GCEZAR_A04_CUSTOMER_H
