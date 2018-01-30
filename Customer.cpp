//
// Created by el_me on 29/01/2018.
//

#include "Customer.h"

Customer::Customer(int id, std::string name, double discount){
    this->id = id;
    this->name = name;
    this->discount = discount;
}
int Customer::getID(){
    return id;
}
std::string Customer::getName(){
    return name;
}
double Customer::getDiscount(){
    return discount;
}
void Customer::setDiscount(double discount){
    this->discount = discount;
}
std::string Customer::toString(){
    std::string idstring = std::to_string(id);
    return name + "(" + idstring + ")" ;
}