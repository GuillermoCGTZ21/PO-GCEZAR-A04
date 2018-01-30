//
// Created by el_me on 29/01/2018.
//

#ifndef PO_GCEZAR_A04_INVOICEITEM_H
#define PO_GCEZAR_A04_INVOICEITEM_H


#include <string>

class InvoiceItem {
private:
    std::string id;
    std::string description;
    int quantity;
    double unitPrice;

public:
    InvoiceItem(std::string id, std::string description, int quantity, double unitPrice);
    std::string getID();
    std::string getDescripition();
    void setDescription(std::string description);
    int getQuantity();
    bool setQuantity(int quantity);
    double getUnitPrice();
    bool setUnitPrice(double unitPrice);
    double getTotal();
    std::string toString();
};


#endif //PO_GCEZAR_A04_INVOICEITEM_H
