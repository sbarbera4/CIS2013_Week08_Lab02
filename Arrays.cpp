#include <iostream>
using namespace std;

int main()
{
	int numbers[10];

	for (int i = 0; i < 10; i++)
	{
		cout << "enter number " << i << ":";
		cin >> numbers[i];
	}

	//find average
	int total = 0;
	for (int i = 0; i < 10; i++)
	{
		total = total + numbers[i];
	}

	cout << "our total is: " << total << endl;
	cout << "our average is: " << total / 10 << endl;
}
