#include <iostream>
#include "SportShoesStore.h"
#include "Sneakers.h"


void SportShoesStore::sort_price() {
	int len = s.size();
	cout << "Sort by price:" << endl;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (s[j].getPrice() > s[j + 1].getPrice())
			{
				std::swap(s[j], s[j + 1]);
			}
		}
	}
	for (int i = 0; i < len; i++)
	{
		cout << "Brand:" << s[i].getBrand() << "| Price: " << s[i].getPrice() << endl;
	}
	cout << "----------------------------------" << endl;
}

void SportShoesStore::sort_quantity() {
	int len = s.size();
	cout << "Sort by quantity:" << endl;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (s[j].getQuantity() > s[j + 1].getQuantity())
			{
				std::swap(s[j], s[j + 1]);
			}
		}
	}
	for (int i = 0; i < len; i++)
	{
		cout << "Brand:" << s[i].getBrand() << "| Quantity: " << s[i].getQuantity() << endl;
	}
	cout << "----------------------------------" << endl;
}

void SportShoesStore::sort_top_popular() {
	int len = s.size();
	cout << "Sort by popular:" << endl;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (s[j].getNumber_Of_Sales() > s[j + 1].getNumber_Of_Sales())
			{
				std::swap(s[j], s[j + 1]);
			}
		}
	}
	for (int i = 0; i < len; i++)
	{
		cout << "Brand:" << s[i].getBrand() << "| Number of sales: " << s[i].getNumber_Of_Sales() << endl;
	}
	cout << "----------------------------------" << endl;
}