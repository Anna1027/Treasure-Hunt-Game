#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int treasurePoints = 0, maxtreasurePoints = 500, chance, newPoints, room, count=0;
	srand((unsigned int)time(0));


	while ( (count < maxtreasurePoints) && (count>=  0)) 
	{

		room = 1 + rand() % 5;
		chance = rand() % 10;

		switch (room) {
		   case 1:
			cout << "Moving to room " << room << endl;
			if (chance < 3) {
				newPoints = 30;
				count = count + newPoints;
				cout << "Gained points. " << newPoints << " Current score: " << count << endl;
			}
			else
			{
				newPoints = -30;
				count = count + newPoints;
				cout << "Lost points. " << newPoints << " Current score: " << count << endl;
			}
			break;
		case 2:
			cout << "Moving to room " << room << endl;
			if (chance < 8)
			{
				newPoints = 10;
				count = count + newPoints;
				cout << "Gained points. " << newPoints << " Current score: " << count << endl;
			}
			else {
				newPoints = -10;
				count = count + newPoints;
				cout << "Lost points. " << newPoints << " Current score: " << count << endl;
			}
			break;
		case 3:
			cout << "Moving to room " << room << endl;
			if (chance < 5) {
				newPoints = 25;
				count = count + newPoints;
				cout << "Gained points. " << newPoints << " Current score: " << count << endl;
			}
			else {
				newPoints = -25;
				count = count + newPoints;
				cout << "Lost points. " << newPoints << " Current score: " << count << endl;
			}
			break;
		case 4:
			cout << "Moving to room " << room << endl;
			if (chance < 2) {
				newPoints = 40;
				count = count + newPoints;
				cout << "Gained points. " << newPoints << " Current score: " << count << endl;
			}

			else {
				newPoints = -40;
				count = count + newPoints;
				cout << "Lost points. " << newPoints << " Current score: " << count << endl;
			}
			break;
		case 5:
			cout << "Moving to room " << room << endl;
			if (chance < 6) {
				newPoints = 20;
				count = count + newPoints;
				cout << "Gained points. " << newPoints << " Current score: " << count << endl;
			}
			else
			{
				newPoints = -2;
				count = count + newPoints;
				cout << "Lost points. " << newPoints << " Current score: " << count << endl;
			}
			break;

		}
	}

	if (count >= 500) {
		cout << "WINNER!" << endl;
		cout << "GAME OVER" << endl;
	}
	
	else if (count<=0){
	
   	cout << "SORRY, NOT A WINNER!" << endl;
		cout << "GAME OVER" << endl;

	}
	
}
