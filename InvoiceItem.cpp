//
// Created by el_me on 29/01/2018.
//

#include "InvoiceItem.h"

InvoiceItem::InvoiceItem(std::string id, std::string description, int quantity, double unitPrice){
    this->id = id;
    this->description = description;
    this->quantity = quantity;
    this->unitPrice = unitPrice;
}
std::string InvoiceItem::getID(){
    return id;
}
std::string InvoiceItem::getDescripition(){
    return description;
}
void InvoiceItem::setDescription(std::string description){
    this->description= description;
}
int InvoiceItem::getQuantity(){
    return quantity;
}
bool InvoiceItem::setQuantity(int quantity){
    this->quantity = quantity;
}
double InvoiceItem::getUnitPrice(){
    return unitPrice;
}
bool InvoiceItem::setUnitPrice(double unitPrice){
    this->unitPrice = unitPrice;
    return true;
}
double InvoiceItem::getTotal(){
    return unitPrice * quantity;
}
std::string InvoiceItem::toString(){
    std::string quanstring = std::to_string(quantity);
    std::string unitstring = std::to_string(unitPrice);
    return "InvoiceItem[id="+ id +",description= " + description + ",quantity= " + quanstring + ",unitPrice= " + unitstring;

}