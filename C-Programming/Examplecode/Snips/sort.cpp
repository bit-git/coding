#include<iostream>
using namespace std;

int main(void)
{
	int array[5];		// An array of integers.
	int length = 5;		// Lenght of the array.
	int i, j;
	int temp;

        //Some input
	for (i = 0; i < 5; i++)
	{
		cout << "Enter a number: ";
		cin >> array[i];
	}

	//Algorithm
	for(i = 0; i < (length -1); i++)
	{
		for (j=(i + 1); j < length; j++)
		{
			if (array[i] < array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	//Some output
	for (i = 0; i < 5; i++)
	{
		cout << array[i] << endl;
	}
}
