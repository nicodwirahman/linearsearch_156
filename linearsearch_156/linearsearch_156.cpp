#include <iostream>
using namespace std;


int arr[20];
int n;
int i;


void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array :";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimun 1 and maximun 20 elements.\n\n";
}
		

	cout << "\n--------------------\n";
	cout << "Enter Array element\n";
	cout << "-------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "n";
		cin >> arr[i];
	}

}


void linesearch()
{
	char ch;
	int comparison;

	do
	{
		cout << "\nEnter the element you want to search: ";
		int item;
		cin >> item;



		comparison = 0;
		for (i = 0; i < n; i++)
		{
			comparison++;
			if (arr[i] == item)
			{
				cout << "\n" << item << "found at position " << (i + 1) << endl;
				break;
			}
		}

		if (i == n)
			cout << "\n" << item << "not found in the array\n";
		cout << "\nNumber of  comparisons: " << comparison << endl;

		cout << "nContinue search (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'y'));
}
int main()
{
	input();
	linesearch();
}