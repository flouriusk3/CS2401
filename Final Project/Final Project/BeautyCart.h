/*
Name: Kiyunna Flourius
Class: CS2410 Final Project
Due Date: April 20, 2016
*/

/*
This program resembles an online shopping website. 
You can:
1. Explore the different beauty products by category
2. Add items to your cart
3. Checkout - Your net total, taxes, and total with taxes will be calculated
*/

#include <cstdlib>
#include <iostream>
#include <string>
#include  <iomanip>
#include <vector>
#include <numeric>

using namespace std;

#ifndef BEAUTYCART_H
#define BEAUTYCART_H

class BeautyCart
{
	friend class Beauty;
private:
	vector <double> prices;
	typedef struct node{
		int itemNum;		// Holds the item number
		string itemName;	// Holds the name of the item
		double itemPrice;	// Holds the price of the item
		node *next;			// Points to the next item in the list
	}*nodePtr;
	
	nodePtr head;			// Points to the head
	nodePtr curr;			// Points to the current
	nodePtr temp;			// Points to the temporary

public:
	BeautyCart();				// Constructor
	void addNode(int addItemNum, string addItemName, double addItemPrice);			// Adds items to the list
	void showList();		// Shows the list or "cart" with products' number, name, and price


};

class Beauty: public BeautyCart
{
private:
public:
	void ShowCategory();	// Displays the categories
	void DisplayMenu();		// Displays the menu
	void CalcTotal();		// Calculates the total, taxes, and total with taxes

};

#endif