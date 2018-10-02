#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>

using namespace std;

bool sorter(int i, int j)
{
	return i > j;
}

int main()
{
	double highScore;
	double lowScore;
	double testScore;
	int choice;
	double sum = 0;
	double average = 0.0;

	string result;

	double score[10] = { 0.0 };
	do {
		for (int i = 0; i < size(score); i++)
		{
			cout << "enter the score >> ";
			cin >> score[i];

		}
		sort(score, score + size(score), sorter);

		for (int i = 0; i < size(score); i++)
		{
			cout << score[i] << endl;
			sum += score[i];
		}
		average = sum / 10;

		cout << "The average is " << average << endl;

		cout << "Would you like to enter other scores?\n1 - Yes\n2 - No\n >> " << endl;
		cin >> choice;

	} while (choice != 2);

	system("pause");
	return 0;

}