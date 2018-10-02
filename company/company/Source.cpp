#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	double sales[4] = { 0.0 };
	int valueArray[7] = { 50, 10, 5, 25, 30, 20, 15 };
	int total = 0;

	for (int sub = 0; sub < 4; sub += 1)
	{
		cout << "Enter the sales for Region ";
		cout << sub + 1 << ": ";
		cin >> sales[sub];
	}

	cout << fixed << setprecision(2) << endl << endl;

	for (int sub = 0; sub < 4; sub += 1)
	{
		cout << "Sales for Region " << sub + 1 << ": $";
		cout << sales[sub] << endl;
	}



	for (int x = 0; x < size(valueArray); x++)
	{
		cout << valueArray[x] << endl;
		total = total + valueArray[x];
	}

	cout << total << endl;

	system("pause");
	return 0;
}