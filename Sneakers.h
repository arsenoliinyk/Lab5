#pragma once
#include <string>

class Sneakers {
private:
	std::string brand;
	int size;
	int price;
	int quantity;
	int numberOfSales;
	std::string color;
	std::string material;

public:
	

	Sneakers();
	Sneakers(std::string brand_name, float price, int quantity, int number_of_sales, std::string  color, std::string  material);
	~Sneakers();

	//void setBrand(std::string brand);
	std::string getBrand();

	//void setSize(int size);
	int getSize();

	//void setColor(std::string color);
	std::string getColor();

	//void setPrice(int price);
	int getPrice();

	//void setQuantity(int quantity);
	int getQuantity();

	//void setMaterial(std::string material);
	std::string getMaterial();

	//void setNumber_Of_Sales(int number_of_sales);
	int getNumber_Of_Sales();

};
