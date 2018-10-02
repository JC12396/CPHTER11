#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

bool sorter(int i, int j)
{
	return i > j;
}

int main()
{

	double tempArray[12] = { 0.0 };
	int z;

	for (int i = 0; i < size(tempArray); i++)
	{
		cout << "enter the temperature >> ";
		cin >> tempArray[i];
	}

	sort(tempArray, tempArray + size(tempArray));


	for (int i = 0; i < size(tempArray); i++)
	{
		cout << tempArray[i] << endl;
	}
	sort(tempArray, tempArray + size(tempArray), sorter);
	
	for (int i = 0; i < size(tempArray); i++)
	{
		cout << tempArray[i] << endl;
	}





	system("pause");
	return 0;

}