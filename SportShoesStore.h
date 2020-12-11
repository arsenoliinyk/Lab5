#pragma once
#include <string>
#include "Sneakers.h"
#include <vector>
using namespace std;

class SportShoesStore {
private:
	vector<Sneakers> s;
	string brand[5] = { "Adidas","Nike","Puma","Under Armour","New Balance" };
	string color[5] = { "blue","green","purple","white","yellow" };
	string material[5] = { "Leather","Leather","Leather","Leather","Leather" };

public:
	SportShoesStore();
	SportShoesStore(int number_of_sneakers) {
		for (int i = 0; i < number_of_sneakers; i++)
		{
			Sneakers sneakers(brand[rand() % 5], rand() % 91 +10, rand() % 101, rand() % 101, color[rand() % 5], material[rand() % 5]);
			cout << "Brand = " << sneakers.getBrand() << endl;
			cout << "Price = " << sneakers.getPrice() << " UAH" << endl;
			cout << "Quantity = " << sneakers.getQuantity() << endl;
			cout << "Number of sales = " << sneakers.getNumber_Of_Sales() << endl;
			cout << "Material = " << sneakers.getMaterial() << endl;
			cout << "Color = " << sneakers.getColor() << endl;
			cout << "----------------------------------" << endl;
			s.push_back(sneakers);
		}
	}
	~SportShoesStore() {}

	

	void sort_price();
	void sort_quantity();
	void sort_top_popular();

};