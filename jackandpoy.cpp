/*
* PL-2 ACTIVITY 3
* JACK AND POY (C++)
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

	int playerStart, randomizer;
	char playerOption, items[3] = { 'p', 'x', 's' };

	do {
		cout << "====JACK & POY====\n";
		cout << "Do you want to play?\n";
		cout << "[1] - YES\n";
		cout << "[2] - NO\n";
		cin >> playerStart;
		cout << "\n";

		if (playerStart == 1) {
			cout << "Choose to play\n";
			cout << "[P] - PAPER\n";
			cout << "[X] - SCISSORS\n";
			cout << "[S] - STONE/ROCK\n";
			cin >> playerOption;
			playerOption = tolower(playerOption);

			randomizer = rand() % 3;

			cout << "PLAYER: " << playerOption << " vs COMPUTER: " << items[randomizer] << "\n";

			if (playerOption == items[randomizer]) {
				cout << "***THE GAME IS DRAW***\n\n";
			}
			else if (playerOption == 'x' && items[randomizer] == 'p') {
				cout << "***PLAYER WINS***\n\n";
			}
			else if (playerOption == 'p' && items[randomizer] == 's') {
				cout << "***PLAYER WINS***\n\n";
			}
			else if (playerOption == 's' && items[randomizer] == 'x') {
				cout << "***PLAYER WINS***\n\n";
			}
			else if (items[randomizer] == 'x' && playerOption == 'p') {
				cout << "***COMPUTER WINS***\n\n";
			}
			else if (items[randomizer] == 'p' && playerOption == 's') {
				cout << "***COMPUTER WINS***\n\n";
			}
			else if (items[randomizer] == 's' && playerOption == 'x') {
				cout << "***COMPUTER WINS***\n\n";
			}
			else {
				cout << "***INVALID INPUT***\n\n";
			}
		}
		else {
			cout << "***INVALID INPUT***\n\n";
		}
	} while (playerStart != 2);

	return 0;
}
