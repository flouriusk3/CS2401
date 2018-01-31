#include "BeautyCart.h"


// 1 - Define Beauty Cart Functions

	// Beauty Cart Constructor
BeautyCart:: BeautyCart(){
head = NULL;
curr = NULL;
temp = NULL;
}

	// Add Node Function
void BeautyCart:: addNode(int addItemNum, string addItemName, double addItemPrice){
	nodePtr n = new node;		// Creates new node ptr "n" and makes it point to new node
	n->next = NULL;
	n->itemNum = addItemNum;
	n->itemName = addItemName;
	n->itemPrice = addItemPrice;

	if (head != NULL){
		curr = head;
		while(curr->next != NULL){
			curr = curr->next;
		}
		curr->next = n;
	}
	else
	{
		head = n;
	}
	prices.push_back(n->itemPrice);
}

	// Show List Function
void BeautyCart:: showList(){
	curr = head;
	while (curr != NULL){
		cout << curr->itemName << " $" << curr ->itemPrice << endl;
		curr = curr->next;
	}
}


// Beauty Functions

	// Display Menu Function

void Beauty:: DisplayMenu(){
	cout << "0 - Quit" << endl;
	cout << "1 - Shop" << endl;
	cout << "2 - View Cart" << endl;
	cout << "3 - Checkout" << endl;

}

void Beauty:: ShowCategory(){
	cout << endl;
	cout << "Categories: " << endl;
	cout << "*************************************" << endl << endl;

	cout << "1 - Face" << endl;
	cout << "2 - Eyes" << endl;
	cout << "3 - Lips" << endl << endl;
}

	// Calculate Total Function
void Beauty:: CalcTotal(){
	double  total = 0.0;
	double  taxes,
			totalTax;
	
	total = std::accumulate(prices.begin(), prices.end(), 0.0);
	taxes = total * 0.0825;
	totalTax = total + taxes;

	cout << "Your total is: $" << fixed << setprecision(2) << total << endl;
	cout << "Your taxes are: $"<< fixed << setprecision(2) << taxes << endl;
	cout << "Your total with taxes is: $" << fixed << setprecision(2) << totalTax << endl;

}