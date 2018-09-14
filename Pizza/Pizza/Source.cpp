#include <iostream>
#include <string>
using namespace std;

double price(int Siz, int Top)
{
	double price, tax;
	if (Top > 0)
	{
		if (Siz == 1 && Top == 1)
		{
			tax = (3.00 + 1.50) * 0.07;
			price = tax + 4.50;
		}
		if (Siz == 1 && Top == 2)
		{
			tax = (3.00 + 0.50) * 0.07;
			price = tax + 3.50;
		}
		if (Siz == 1 && Top == 3)
		{
			tax = (3.00 + 1.00) * 0.07;
			price = tax + 4.00;
		}
		if (Siz == 1 && Top == 4)
		{
			tax = (3.00 + 2.00) * 0.07;
			price = tax + 5.00;
		}
		if (Siz == 2 && Top == 1)
		{
			tax = (5.00 + 1.50) * 0.07;
			price = tax + 6.50;
		}
		if (Siz == 2 && Top == 2)
		{
			tax = (5.00 + 0.50) * 0.07;
			price = tax + 5.50;
		}
		if (Siz == 2 && Top == 3)
		{
			tax = (5.00 + 1.00) * 0.07;
			price = tax + 6.00;
		}
		if (Siz == 2 && Top == 4)
		{
			tax = (5.00 + 2.00) * 0.07;
			price = tax + 7.00;
		}
		if (Siz == 3 && Top == 1)
		{
			tax = (7.00 + 1.50) * 0.07;
			price = tax + 8.50;
		}
		if (Siz == 3 && Top == 2)
		{
			tax = (7.00 + 0.50) * 0.07;
			price = tax + 7.50;
		}
		if (Siz == 3 && Top == 3)
		{
			tax = (7.00 + 1.00) * 0.07;
			price = tax + 8.00;
		}
		if (Siz == 3 && Top == 4)
		{
			tax = (7.00 + 2.00) * 0.07;
			price = tax + 9.00;
		}
		if (Siz == 4 && Top == 1)
		{
			tax = (11.00 + 1.50) * 0.07;
			price = tax + 12.50;
		}
		if (Siz == 4 && Top == 2)
		{
			tax = (11.00 + 0.50) * 0.07;
			price = tax + 11.50;
		}
		if (Siz == 4 && Top == 3)
		{
			tax = (11.00 + 1.00) * 0.07;
			price = tax + 13.00;
		}
		if (Siz == 4 && Top == 4)
		{
			tax = (11.00 + 2.00) * 0.07;
			price = tax + 13.50;
		}

	}
	else
	{
		if (Siz == 1)
		{
			tax = 3.00 * 0.07;
			price = 3.00;
		}
		if (Siz == 2)
		{
			tax = 5.00 * 0.07;
			price = tax + 5.00;
		}
		if (Siz == 3)
		{
			tax = 7.00 * 0.07;
			price = 7.00;
		}
		if (Siz == 4)
		{
			tax = 11.00 * 0.07;
			price = 11.00;
		}
	}

	return price;
}

int Topp()
{
	cout << "__________________________________" << endl;
	cout << "|        Menu                    |" << endl;
	cout << "| 1. Sausage    $1.50            |" << endl;
	cout << "| 2. Pepperoni   $0.50           |" << endl;
	cout << "| 3. Mushroom    $1.00           |" << endl;
	cout << "| 4. Peppers  $2.00              |" << endl;
	cout << "|________________________________|" << endl;

	return 0;
}


int menu()
{
	cout << "__________________________________" << endl;
	cout << "|        Menu                    |" << endl;
	cout << "| 1. Small    $3.00              |" << endl;
	cout << "| 2. Medium   $5.00              |" << endl;
	cout << "| 3. Large    $7.00              |" << endl;
	cout << "| 4. Completely Massive  $11.00  |" << endl;
	cout << "|________________________________|" << endl;

	return 0;
}

int main()
{
	string name,Toppy, pizza;
	double total=0, z;
	int size, Topp1;


	//getting order details
	cout << "What is the name for the order?" << endl;
	cin >> name;
	do
	{
		menu();
		cout << "What number would you like?" << endl;
		cin >> size;
		cout << "Do you want a topping on it?" << endl;
		cin >> Toppy;
		//asking about toppings
		if (Toppy == "yes" || Toppy == "Yes")
		{
			Topp();
			cout << "Please pick a number you would like." << endl;
			cin >> Topp1;
			z = price(size, Topp1);
		}
		else
		{
			z = price(size, 0);
		}
		total = total + z;
		cout << "Would you like to order another pizza?" << endl;
		cin >> pizza;
	} while (pizza == "Yes" || pizza == "yes");

	cout << "Hello " << name << " your order is ready. Your total is $" << total << endl;
	

		system("pause");
		return 0;
	
}