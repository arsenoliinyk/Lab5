#include "Sneakers.h"

Sneakers::Sneakers() {
	brand = "";
	price = 0;
	quantity = 0;
	numberOfSales = 0;
}

Sneakers::Sneakers(std::string brand_name, float price, int quantity, int number_of_sales, std::string  color, std::string  material) {
	brand = brand_name;
	this->price = price;
	this->quantity = quantity;
	numberOfSales = number_of_sales;
	this->color = color;
	this->material = material;
}

Sneakers::~Sneakers() {}

/*void Sneakers::setBrand(std::string brand_name) {
	brand = brand_name;
}*/

std::string Sneakers::getBrand() {
	return brand;
}

/*void Sneakers::setPrice(int price) {
	this->price = price;
}*/

int Sneakers::getPrice() {
	return price;
}

/*void Sneakers::setQuantity(int quantity) {
	this->quantity = quantity;
}*/

int Sneakers::getQuantity() {
	return quantity;
}

/*void Sneakers::setNumber_Of_Sales(int number_of_sales) {
	numberOfSales = number_of_sales;
}*/

int Sneakers::getNumber_Of_Sales() {
	return numberOfSales;
}

/*void Sneakers::printNumber() {
	cout << "" << endl;
}*/

std::string Sneakers::getColor() {
	return color;
}

std::string Sneakers::getMaterial() {
	return material;
}