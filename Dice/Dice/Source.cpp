#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string name, play;
	int rando, user, score=0;

	cout << "What is your name?" << endl;
	cin >> name;
	ofstream myfile;
	do
	{


		rando = rand() % 6 + 1;         // rando in the range 1 to 6
		cout << "Guess what the die will roll 1-6." << endl;
		cin >> user;

		if (user == rando)
		{
			cout << "You win!!" << endl;
			score++;
		}
		else
		{
			cout << "You guessed " << user << " but it was " << rando << endl;

		}

		cout << "Would you like to try again? You must have at least 3 points to have a high score." << endl;
		cin >> play;
	} while (play == "Yes" || play == "yes");
	if (score > 1)
	{
		cout << "Hello " << name << " you scored a total of " << score << " points, congrats." << endl;
	}
	else
	{
		cout << "Hello " << name << " you only scored " << score << " point... work on it." << endl;
	}
	if (score >= 3)
	{
		myfile.open("C:\\Users\\Jack\\source\\HallOfFame.txt");
		myfile << name << " scored " << score << " points!\n";
		myfile.close();
	}
	system("pause");
	return 0;
}