#include <iostream>
#include <string>
using namespace std;

int truck()
{
	//Visual Taco truck
	cout << "**********************" << endl;
	cout << "*   *******           *" << endl;
	cout << "*   *     *     ****   *" << endl;
	cout << "*   *     *     *  *    *" << endl;
	cout << "*   *     *     *  *    *" << endl;
	cout << "*               *  *    *" << endl;
	cout << "*************************" << endl;
	cout << "   *   *           *   *    " << endl;
	cout << "     *               *     " << endl;
	return 0;
}
int menu()
{
	cout << "___________________________________________________" << endl;
	cout << "|                     Menu                        |" << endl;
	cout << "|     1. Taco  $1.00          2. Burrito  $1.50   |" << endl;
	cout << "|                                                 |" << endl;
	cout << "|     3. Queso  $1.00         4. Chips  $0.75     |" << endl;
	cout << "|                                                 |" << endl;
	cout << "|     5. Water  $0.25         6. Soda  $0.50      |" << endl;
	cout << "|                                                 |" << endl;
	cout << "|                                                 |" << endl;
	cout << "|_________________________________________________|" << endl;
	return 0;
}
string name()
{
	string user;
	//Getting customer name
	cout << "Can I get a name for the order?" << endl;
	cin >> user;
	return user;
}
double prices(int num, string food)
{
	double total, tax;
	if (food == "taco" || food == "Taco")
	{
		total = num * 1.00;
	}
	if (food == "burrito" || food == "Burrito")
	{
		total = num * 1.50;
	}
	if (food == "queso" || food == "Queso")
	{
		total = num * 1.00;
	}
	if (food == "chips" || food == "Chips")
	{
		total = num * .75;
	}
	if (food == "water" || food == "Water")
	{
		total = num * .25;
	}
	if (food == "soda" || food == "Soda")
	{
		total = num * .50;
	}
	tax = total * 0.07;
	total = total + tax;

	return total;
}


int main()
{
	string userL, userf, user;
	int taco, burrito, queso, chips, water, soda;
	double total = 0 , z;
	truck();
	menu();
	user = name();
	do
	{
		cout << "What would you like?" << endl;
		cin >> userf;
		if (userf == "taco" || userf == "Taco")
		{
			cout << "How many would you like?" << endl;
			cin >> taco;
			z = prices(taco, userf);
		}
		else if (userf == "burrito" || userf == "Burrito")
		{
			cout << "How many would you like?" << endl;
			cin >> burrito;
			z = prices(burrito, userf);
		}
		else if (userf == "queso" || userf == "Queso")
		{
			cout << "How many orders would you like?" << endl;
			cin >> queso;
			z = prices(queso, userf);
		}
		else if (userf == "chips" || userf == "Chips")
		{
			cout << "How many baskets would you like?" << endl;
			cin >> chips;
			z = prices(chips, userf);
		}
		else if (userf == "water" || userf == "Water")
		{
			cout << "How many cups would you like?" << endl;
			cin >> water;
			z = prices(water, userf);
		}
		else if (userf == "soda" || userf == "Soda")
		{
			cout << "How many cups would you like?" << endl;
			cin >> soda;
			z = prices(soda, userf);
		}
		
		cout << "Will that be all?" << endl;
		cin >> userL;
		total = total + z;
	} while (userL == "no" || userL == "No");
	cout << "Hello " << user << " Your total is $" << total << "." << endl;

	system("pause");
	return 0;
}