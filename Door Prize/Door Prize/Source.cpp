#include <iostream>
#include <random>
using namespace std;

int main()
{
	int rando, user;
	cout << "Welcome to Door Prize" << endl;
	do
	{
		cout << "Make a guess 1 - 3." << endl;
		cin >> user;

		rando = rand() % 3 + 1;         // rando in the range 1 to 3

		if (user == rando)
		{
			cout << "You win something cool!" << endl;
		}
		else
		{
			cout << "You lose." << endl;
		}
	} while (user != rando);
	system("pause");
	return 0;
}