#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int sum;
	int arr[15];
	int min = 0;
	int max = 0;
	int temp = 0;

	for (int i = 0; i < 15; i++)
	{
		cout << "Enter number " << i + 1 << " : ";
		cin >> arr[i];
		sum += arr[i];
	}

	max = arr[0];
	min = arr[0];
	for (int i = 1; i < 15; i++)
	{
		temp = arr[i];
		if (temp < min)
			min = temp;

		if (temp > max)
			max = temp;

	}



	cout << "Largest : " << max << endl;
	cout << "Smallest : " << min << endl;
	cout << "Total : " << sum << endl;
	cout << "Average : " << sum / 10 << endl;



	getch();
	return 0;
}