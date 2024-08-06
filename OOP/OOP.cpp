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
		: itemID(id), itemName(name), itemPrice(price), itemType(type), itemDesc(desc) {
		cout << "Values ​​are initialized on the MenuItem constructor O_O" << endl;
	}

	void setItem(int id, string name, double price, string type, string desc) {
		itemID = id;
		itemName = name;
		itemPrice = price;
		itemType = type;
		itemDesc = desc;
	}

	void modifyItem(int id, string name, double price, string type, string desc)
	{
		setItem(id, name, price, type, desc);
	}


	void veiwItem() {
		cout << "itemID: " << itemID << endl;
		cout << "itemName: " << itemName << endl;
		cout << "itemPrice: " << itemPrice << endl;
		cout << "itemType: " << itemType << endl;
		cout << "itemDesc: " << itemDesc << endl;
	}

	void deleteItem() {
		setItem(0, 0, 0, 0, 0);
	};
};

class Order {
public:
	int orderNum;
	string orderStatus;
	int tableNum;
	string orderDate;
	MenuItem menu; // object of MenuItem

	Order(int num, string status, int table, string date, int id, string name, double price, string type, string desc)
		: orderNum(num), orderStatus(status), tableNum(table), orderDate(date), menu(id, name, price, type, desc) {
		cout << "Values ​​are initialized on the Order constructor. X)" << endl;
	}

	// set order and MenuItem
	void setAll(int num, string status, int table, string date, int id, string name, double price, string type, string desc)
	{
		menu.setItem(id, name, price, type, desc); // set the object values

		orderNum = num;
		orderStatus = status;
		tableNum = table;
		orderDate = date;
	}


	void setOrder(int num, string status, int table, string date)
	{
		orderNum = num;
		orderStatus = status;
		tableNum = table;
		orderDate = date;
	}

	void modifyOrder(int num, string status, int table, string date) {
		setOrder(num, status, table, date);
	}

	void modifyAll(int num, string status, int table, string date, int id, string name, double price, string type, string desc) {
		menu.setItem(id, name, price, type, desc);
		setOrder(num, status, table, date);
	}

	void viewOrder() {
		cout << "orderNum: " << orderNum << endl;
		cout << "orderStatus: " << orderStatus << endl;
		cout << "tableNum: " << tableNum << endl;
		cout << "orderDate: " << orderDate << endl;
	}

	void viewAll() {
		menu.veiwItem();
		cout << "orderNum: " << orderNum << endl;
		cout << "orderStatus: " << orderStatus << endl;
		cout << "tableNum: " << tableNum << endl;
		cout << "orderDate: " << orderDate << endl;
	}
};

int main()
{
	cout << "beCareful O___O" << endl;
	cout << "beCareful O___O" << endl;
	cout << "beCareful O___O" << endl;

	Order orderObject1(1001, "Pending", 10, "2024-08-03", 1, "Burger", 5.99, "Food", "Delicious beef burger");

	cout << "--------------Print Order Info---------------------" << endl;
	orderObject1.viewOrder();
	cout << "--------------Print menu Info----------------------" << endl;
	orderObject1.menu.veiwItem();

	cout << "--------------Print All Infos----------------------" << endl;
	orderObject1.viewAll();

	cout << "--------------modifyAll then Print All Infos-------" << endl;
	orderObject1.modifyAll(1002, "Pending", 41, "2024-08-03", 11, "Fries", 2.99, "Food", "Crispy fries");
	orderObject1.viewAll();

	cout << "--------------modifyItem and Print All Infos-------" << endl;
	orderObject1.menu.modifyItem(1, "MC", 2.99, "Hacker", "EZ GAME");
	orderObject1.viewAll();

	return 0;
}