//
// Created by el_me on 29/01/2018.
//

#ifndef PO_GCEZAR_A04_INVOICE_H
#define PO_GCEZAR_A04_INVOICE_H


#include <string>
#include "Customer.h"
#include "InvoiceItem.h"
#include <array>

class Invoice {
private:
    std::string id;
    Customer*customer;
    double amount = 0;
    InvoiceItem item [0];
    bool findItem (std::string id);
    void recaulculateAmount();

public:
    Invoice();
    Invoice(std::string id, int customerID, std::string name, double discount);
    Invoice(std::string id, Customer* customer);
    std::string getID();
    Customer* getCustomer();
    void setCustomer(Customer* customer);
    double getAmount();
    double getAmountAfterDiscount();
    std::string getCustomerName();
    bool addItem(std::string id, std::string description, int quantity, double unitPrice);
    bool addItem(InvoiceItem item);
    bool removeItem(std::string id);
    bool removeItem(InvoiceItem item);
    void updateItem(std::string id, std::string description);
    void updateItem(std::string id, int quantity);
    bool updateItem(std::string id, double unitPrice);
    bool updateItem(InvoiceItem item);
    std::string toString();



};


#endif //PO_GCEZAR_A04_INVOICE_H
