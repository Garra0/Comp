#include <iostream>
using namespace std;
class MenuItem {
public:
    int itemID;
    string itemName;
    double itemPrice;
    string itemType;
    string itemDesc;

    MenuItem(int id, string name, double price, string type, string desc)
        : itemID(id), itemName(name), itemPrice(price), itemType(type), itemDesc(desc) {}
};

class Order {
public:
    int orderNum;
    string orderStatus;
    int tableNum;
    string orderDate;

    Order(int num, string status, int table, string date)
        : orderNum(num), orderStatus(status), tableNum(table), orderDate(date) 

    void setOrder(int num, string status, int table, string date) 
{
        orderNum = num;
        orderStatus = status;
        tableNum = table;
        orderDate = date;
    }
};

int main() 
{
    MenuItem item1(1, "Burger", 5.99, "Food", "Delicious beef burger");
    MenuItem item2(2, "Fries", 2.99, "Food", "Crispy fries");

    Order order1(1001, "Pending", 10, "2024-08-03");
    order1.addItem(item1);
    order1.addItem(item2);

    cout << "Order Number: " << order1.orderNum << "\n";
    cout << "Order Status: " << order1.orderStatus << "\n";
    cout << "Table Number: " << order1.tableNum << "\n";
    cout << "Order Date: " << order1.orderDate << "\n";
    cout << "Items in the order:\n";
    for (const auto& item : order1.items) 
{
        cout << " - " << item.itemName<<endl;
    return 0;
}