//Advanced28.cpp - displays the number of students
//earning a specific score
//Created/revised by <your name> on <current date>

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	//declare array


	//declare variables
	int searchScore = 0;
	int total = 0;
	int scores[20];

	cout << "Enter a score from 0 through 100 (-1 to end): ";
	cin >> searchScore;

	
	//search for score
	for (int i = 0; i < size(scores); i++)
		scores[i] = rand() % 100;
	
		//end for
		while (searchScore >= 0)
		{
			srand(time(NULL));


			total = 0;

			for (int x = 0; x < 20; x += 1) {


				scores[x] = rand() % 100 + 1;
				if (scores[x] == searchScore)
					total += 1;
			}
		//display total
		cout << "Number of students earning a score of "
			<< searchScore << ": "
			<< total << endl << endl;

		cout << "Enter a score from 0 through 100 (-1 to end): ";
		cin >> searchScore;
	}  //end while

	system("pause");
	return 0;
}	//end of main function