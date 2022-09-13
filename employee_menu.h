#pragma once
#include <iostream>
#include <string>
#include <cmath>

class Employee {
public:
	void employeeReg();
	void menu();
	void recordLookup();
	void recordDeletion();

private:
	std::string name = "John Doe";
	int age = 0;
	std::string insurance = "New Life Insurance";
	int employeeNumber = 0;
};

void Employee::recordDeletion() {

}

void Employee::recordLookup() {

}
void Employee::employeeReg() {

	int exit = 0;

	while (exit != 4)
	{

		std::string newName;
		int newAge;
		std::string newInsurance;
		int newNum;

		std::cout << "Enter new name: ";
		std::cin >> newName;
		std::cout << std::endl << "Enter age: ";
		std::cin >> newAge;
		std::cout << std::endl << "Enter insurance: ";
		std::cin >> newInsurance;
		std::cout << std::endl << "You will be assigned an employee number. Your new employee number is: " << std::endl;

		newNum = std::rand() % 100000;

		std::cout << newNum << std::endl;

		menu();
	}	

}

void Employee::menu() {
	int choice;

	std::cout << "Welcome to [Company Name] Menu!" << std::endl;
	std::cout << "Press the corresponding number to pick a menu choice: " << std::endl << std::endl;
	std::cout << "1: New Employee Registration" << std::endl;
	std::cout << "2: Look up records" << std::endl;
	std::cout << "3: Delete records" << std::endl;
	std::cout << "4: Exit menu" << std::endl;

	std::cin >> choice;

	switch (choice) {
	case 1:
		employeeReg();
		break;
	case 2:
		recordLookup();
		break;
	case 3:
		recordDeletion();
		break;

	case 4:
		break;
	}
}

