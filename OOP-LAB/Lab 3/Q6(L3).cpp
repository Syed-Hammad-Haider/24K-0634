//Create a class called Smartphone with the following attributes:
//? Company
//? Model
//? Display Resolution
//? RAM
//? ROM
//? Storage
//
//Create getter and setter methods for your attributes. A smartphone has some specific actions that it can perform.
//For example:
//1. Make a phone call
//2. Send a message
//3. Connect to the wifi
//4. Browse the internet
//
//Create different smartphone objects. Set their attributes using the setter functions and display their attributes after
//using the getter functions to fetch the attributes.

#include <iostream>
#include <string>
using namespace std;

class Product {
public:
    string ProductName;
    int ProductId;
    double Price;
    int StockQuantity;

    Product(string name, int id, double price, int stock)
        : ProductName(name), ProductId(id), Price(price), StockQuantity(stock) {}

    void SellProduct(int quantity) {
        if (StockQuantity >= quantity) {
            StockQuantity -= quantity;
        } else {
            cout << "Insufficient stock." << endl;
        }
    }
    void RestockProduct(int quantity) {
        StockQuantity += quantity;
    }

    void DisplayProductInfo() {
        cout << "Product Name: " << ProductName << endl;
        cout << "Product ID: " << ProductId << endl;
        cout << "Price: " << Price << endl;
        cout << "Stock Quantity: " << StockQuantity << endl;
    }
};

int main() {
    Product product1("Laptop", 565, 4313, 151);
    product1.DisplayProductInfo();
    product1.SellProduct(10);
    product1.DisplayProductInfo();
    product1.RestockProduct(20);
    product1.DisplayProductInfo();
    return 0;
}