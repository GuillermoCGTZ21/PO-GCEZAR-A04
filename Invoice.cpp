//
// Created by el_me on 29/01/2018.
//

#include "Invoice.h""


Invoice::Invoice(std::string id, int customerID, std::string name, double discount) {
    this->id = id;
    this->id = customerID;
    customer->getName() = name;
    customer->setDiscount(discount);
}
Invoice::Invoice(std::string id, Customer* customer){
    this->id = id;
    this->customer = customer;
}
std::string Invoice::getID(){
    return id;
}
Customer* Invoice::getCustomer(){
    return customer;
}
void Invoice::setCustomer(Customer* customer){
    this->customer = customer;
}
double Invoice::getAmount(){
    return amount;
}
double Invoice::getAmountAfterDiscount(){
    return amount - (amount * customer->getDiscount());
}
void Invoice::recaulculateAmount(){
    this->amount = amount;
}
std::string Invoice::getCustomerName(){
    return customer->getName();
}
bool Invoice::addItem(std::string id, std::string description, int quantity, double unitPrice) {
    if () {
        recaulculateAmount();
        this->id = id;
        item->setDescription(description);
        item->setQuantity(quantity);
        item->setUnitPrice(unitPrice);

        return true;
    }else{
        return false;
    }

}
bool Invoice::addItem(InvoiceItem item){
    if (addItem(item) == true){
            recaulculateAmount();
    }else{
        return false;
    }
}
bool Invoice::removeItem(std::string id){
    if (removeItem(id) == true) {
        recaulculateAmount();
    }else{
        return false;
    }
}
bool Invoice::removeItem(InvoiceItem item){
    if (removeItem(item) == true) {
        recaulculateAmount();
    }else{
        return false;
    }
}
void Invoice::updateItem(std::string id, std::string description){
    this->id = id;
    item->setDescription(description);
}
void Invoice::updateItem(std::string id, int quantity){
    this->id = id;
    item->setQuantity(quantity);
    recaulculateAmount();
}
bool Invoice::updateItem(std::string id, double unitPrice){
    if (updateItem(id, unitPrice) == true) {
        recaulculateAmount();
    }else{
        return false;
    }
}
bool Invoice::updateItem(InvoiceItem item){

    if (updateItem(item) == true) {
        recaulculateAmount();
    }else{
        return false;
    }
}
std::string Invoice::toString(){
    return "Invoice[id= " + id + ",customer id = " + "" + "customer name=" + customer->getName();
}
bool Invoice::findItem (std::string id){
    if(){ ;
    }
}