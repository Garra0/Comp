#include <iostream> 
using namespace std;


class Person {
	int Grade;

public:
	string Name;
	int Age;
	string Gender;


	// constructor 
	Person(string name, int age = 10, string gender = "FM") {
		Age = age;
		Name = name;
		Gender = gender;
	};

	Person() {
		cout << "Hello from person" << endl;
	};


	void printInformation() {
		cout << "the Name is:" << Name << endl;
		cout << "the Age is:" << Age << endl;
		cout << "the Gender is:" << Gender << endl << endl;
	}

	void PrintGrade() {
		cout << "Your grade:" << Grade << endl;
	}

	void SetGrade(int grade) {
		Grade = grade;
	}

	int GetGrade() {
		return Grade;
	}


	~Person() {
		cout << "this is the Destructor from Person class" << endl;
	}
};
