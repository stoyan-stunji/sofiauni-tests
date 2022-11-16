#include <iostream>

using namespace std;

const int ARRAY_SIZE_MAX = 100;

void welcome()
{
	cout << "\nWelcome! :D" << endl;
	cout << "1. Welcome Menu. - Example: 19 15 7 3 6\n" << "2. Print an array.\n"
		<< "3. Sort an array (Bubble Sorting). \n"
		<< "4. Reverse an array. \n"
		<< "5. Shift an array with k elements. \n"
		<< "6. Number of an wanted element in a string. \n"
		<< "7. Palindrome array. \n"
		<< "8. Avarage of elements in an array.\n" << "9. Exit" << endl;
}

void exit()
{
	cout << "Goodbye! :(" << endl;
}

void enterArray(int array[], int length)
{
	cout << "\nEnter length of the array: \n";
	cin >> length;
	cout << "Enter the elements of the array: \n";
	for (int i = 0; i < length; i++)
	{
		cin >> array[i];
	}
}

void printArray(int array[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << array[i] << " ";
	}
}

void swap(int* num1, int* num2)
{
	int tempNum = *num1;
	*num1 = *num2;
	*num2 = tempNum;
}

void bubblesortArray(int array[], int length)
{
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
			}
		}
	}

	printArray(array, length);
}

void reverseArray(int array[], int length)
{
	int tempNum = 0;
	for (int i = 0; i < length / 2; i++) 
	{
		tempNum = array[i];
		array[i] = array[length - i - 1];
		array[length - i - 1] = tempNum;
	}

	printArray(array, length);
}

void stringArray(char str[], char element)
{
	cout << "Input:\n";
	cin >> str;

	int counter = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == element)
		{
			counter += 1;
		}
	}
	cout << counter;
}

void shiftkElements(int array[], int length, int k)
{
	if (k % length == 0)
	{
		return;
	}

	k %= length;

	for (int j = 0; j < k; j++)
	{
		for (int i = 0; i < length; i++)
		{
			swap(array[0], array[i]);
		}
	}

	printArray(array, length);
}

void isPalindrome(int array[], int length)
{
	int palindrome = 0;

	for (int i = 0; i < length / 2 && length != 0; i++)
	{
		if (array[i] != array[length - i - 1]) 
		{
			palindrome = 1;
			break;
		}
	}

	if (palindrome != 1)
	{
		cout << "\nThe array IS a palindome.";
	}
	else
	{
		cout << "\nThe array is NOT a palindome.";
	}
}

void averageArray(int array[], int length)
{
	cout << "\nEnter length of the array: \n";
	cin >> length;
	cout << "Enter the elements of the array: \n";
	for (int i = 0; i < length; i++)
	{
		cin >> array[i];
	}

	int counter = 0;
	int sum = 0;
	for (int i = 0; i < length; i++)
	{
		counter++;
		sum += array[i];
	}

	int average = sum / counter;
	cout << "\nThe average of the array's elements is: " << average;
}

int main()
{
	cout << "week 7\n" << endl;
	cout << "Enter a number between 1 and 9: \n";
	int input = 0;
	cin >> input;

	int array[ARRAY_SIZE_MAX];
	int length = 0;

	int k = 0;

	while (input != 0)
	{
		switch (input)
		{
		case 1:
			welcome();
			break;
		case 2:
			cout << "\nEnter length of the array: \n";
			cin >> length;
			cout << "Enter the elements of the array: \n";
			for (int i = 0; i < length; i++)
			{
				cin >> array[i];
			}
			cout << "\nThe array is: \n";
			printArray(array, length);
			break;
		case 3:
			cout << "\nEnter length of the array: \n";
			cin >> length;
			cout << "Enter the elements of the array: \n";
			for (int i = 0; i < length; i++)
			{
				cin >> array[i];
			}
			cout << "\n\nThe sorted array (bubble sorting) is: \n";
			bubblesortArray(array, length);
			break;
		case 4:
			cout << "\nEnter length of the array: \n";
			cin >> length;
			cout << "Enter the elements of the array: \n";
			for (int i = 0; i < length; i++)
			{
				cin >> array[i];
			}
			cout << "\n\nThe reverse of the array is:\n";
			reverseArray(array, length);
			break;
		case 5:
			cout << "\nEnter length of the array: \n";
			cin >> length;
			cout << "Enter the elements of the array: \n";
			for (int i = 0; i < length; i++)
			{
				cin >> array[i];
			}
			cout << "\nEnter k: \n";
			cin >> k;
			cout << "\nThe new array is: \n";
			shiftkElements(array, length, k);
			break;
		case 6:
			char str[ARRAY_SIZE_MAX];
			char element;
			cout << "\nEnter the wanted element: \n";
			cin >> element;
			stringArray(str, element);
			cout << " times.";
			break;
		case 7:
			cout << "\nEnter length of the array: \n";
			cin >> length;
			cout << "Enter the elements of the array: \n";
			for (int i = 0; i < length; i++)
			{
				cin >> array[i];
			}
			isPalindrome(array, length);
			break;
		case 8:
			averageArray(array, length);
			break;
		case 9:
			exit();
			return 0;
		default:
			cout << ">:(";
			break;
		}
		cout << "\n\n[1-9]\n";
		cin >> input;
	}
    // 5
	// 19 15 7 3 6

	return 0;
}
