#include "BeautyCart.h"
#include <cstdlib>

using namespace std;

int main()
{
	// Declarations
	Beauty Items;

	int option,
		category,
		product;

	// 1 - Show menu
	cout << "*************************************" << endl;
	cout << "Welcome to Kiyunna's Beauty Supply!" << endl << endl;
	cout << "*************************************" << endl;

	do
	{
		cout << endl;
		Items.DisplayMenu();
		cout << endl;

		// 2 - Get User Answer
		cout << "Please choose an option: ";
		cin >> option;
			// Error message
		while (option < 0 || option > 3)
		{
			cout << "Please enter a valid option: ";
			cin >> option;
		}

			// If the user chooses to shop
		if (option == 1)
		{
			Items.ShowCategory();

			// Get user answer
			cout << "Please choose a category: ";
			cin >> category;
				// Error message
			while (category < 1 || category > 3)
			{
				cout << "Please enter a valid category: ";
				cin >> category;
			}

				// If user chooses 1
			if (category == 1)
			{
				cout << endl;
				cout <<  "1- Foundation" << " $7.99" << endl;
				cout <<  "2- Powder" << " $7.99" << endl;
				cout  << "3- Blush" << " $5.99" << endl << endl;

				cout << "Please  enter the item's number: ";
				cin >> product;
			
				while (product < 1 || product > 3)
				{
					cout << "Please enter a valid item number: ";
					cin >> product;
				}

					// If user chooses item number 1
				if (product == 1)
				{
					Items.addNode(1, "Foundation", 7.99);
					cout << "Foundation has been added to your cart. " << endl;
				}
					// If user chooses item number 2
				else if (product == 2)
				{
					Items.addNode(2, "Powder", 7.99);
					cout << "Powder has been added to your cart. " << endl;
				}
					// If user chooses item number 3
				else if (product == 3)
				{
					Items.addNode(3, "Blush", 5.99);
					cout << "Blush has been added to your cart. " << endl;
				}
			}
				// If user chooses 2
			else if (category == 2)
			{
				cout << endl;
				cout <<  "4 - Eyeshadow" << " $4.99" << endl;
				cout <<  "5- Eyeliner" << " $5.99" << endl;
				cout <<  "6- Mascara" << " $6.99" << endl << endl;

				cout << "Please  enter the item's number: ";
				cin >> product;
			
				while (product < 4 || product > 6)
				{
					cout << "Please enter a valid item number: ";
					cin >> product;
				}

					// If user chooses item number 1
				if (product == 4)
				{
					Items.addNode(4, "Eyeshadow", 4.99);
					cout << "Eyeshadow has been added to your cart. " << endl;
				}
					// If user chooses item number 1
				else if (product == 5)
				{
					Items.addNode(5, "Eyeliner", 5.99);
					cout << "Eyeliner has been added to your cart. " << endl;
				}
					// If user chooses item number 1
				else if (product == 6)
				{
					Items.addNode(6, "Mascara", 6.99);
					cout << "Mascara has been added to your cart. " << endl;
				}
			}
				// If user chooses 3
			else if (category == 3)
			{
				cout << endl;
				cout <<  "7- Liner" << " $2.99" << endl;
				cout <<  "8- Lipstick" << " $6.99" << endl;
				cout <<  "9- Lipgloss" << " $6.99" << endl << endl;

				cout << "Please  enter the item's number: ";
				cin >> product;
			
				while (product < 7 || product > 9)
				{
					cout << "Please enter a valid item number: ";
					cin >> product;
				}

					// If user chooses item number 1
				if (product == 7)
				{
					Items.addNode(7, "Liner", 2.99);
					cout << "Liner has been added to your cart. " << endl;
				}
					// If user chooses item number 1
				else if (product == 8)
				{
					Items.addNode(8, "Lipstick", 6.99);
					cout << "Lipstick has been added to your cart. " << endl;
				}
					// If user chooses item number 1
				else if (product == 9)
				{
					Items.addNode(9, "Lipgloss", 6.99);
					cout << "Lipgloss has been added to your cart. " << endl;
				}
			}
		}

		
		// If the user chooses to view cart
		if (option == 2)
		{

			cout << endl;
			cout << "The items in your cart are: " << endl << endl;
			Items.showList();
			cout << endl << endl;

			Items.DisplayMenu();
			cout << endl;

			// 2 - Get User Answer
			cout << "Please choose an option: ";
			cin >> option;
				// Error message
			while (option < 0 || option > 3)
			{
				cout << "Please enter a valid option: ";
				cin >> option;
			}
		}

			// If the user chooses to checkout
		if (option == 3)
		{
			cout << endl;
			cout << "The items in your cart are: " << endl << endl;
			Items.showList();
			cout << endl << endl;

			Items.CalcTotal();
			cout << endl << endl;

			cout << "Thank you for shopping at Kiyunna's Beauty Supply!" << endl;
		}

		// Thank you message
		if (option == 0){
			cout << "Thank you for shopping at Kiyunna's Beauty Supply!" << endl;
		}
		} while(option != 0);


	return 0;
}