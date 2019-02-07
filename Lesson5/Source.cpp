#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <ctime>
using namespace std;

template<typename myType>

//сортировка выбором(учител€)
void selectionSort(myType arr[], int n)
{
	int min, min_pos;
	for (size_t i = 0; i < n-1; i++)
	{
		min = INT_MAX;
		for (size_t j = 1; j < n; j++)
		{
			min = arr[j];
			min_pos = j;
		}
		swap(arr[i], arr[min_pos]);
	}
}


//сортировка вставками
template<typename myType>
void InsertionSort(myType arr[], myType size)
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = i; j > 0; j--)
		{
			if (arr[j] < arr[j - 1])
				swap(arr[j], arr[j - 1]);
			else
				break;
		}
	}
}

// сортировка выбором
template<typename myType>
void choicesSort(int* arrayPtr, int length_array) 
{
	for (int repeat_counter = 0; repeat_counter < length_array; repeat_counter++)
	{
		int temp = arrayPtr[0]; // временна€ переменна€ дл€ хранени€ значени€ перестановки
		for (int element_counter = repeat_counter + 1; element_counter < length_array; element_counter++)
		{
			if (arrayPtr[repeat_counter] > arrayPtr[element_counter])
			{
				temp = arrayPtr[repeat_counter];
				arrayPtr[repeat_counter] = arrayPtr[element_counter];
				arrayPtr[element_counter] = temp;
			}
		}
	}
}

//BubbleSort
template<typename myType> //чтобы тип был и double и int
void bubbleSort(myType* arrayPtr, myType length_array)
{
	myType temp = 0;
	bool exit = false;

	while (!exit)
	{
		exit = true;
		for (int int_counter = 0; int_counter < (length_array - 1); int_counter++)
			if (arrayPtr[int_counter] > arrayPtr[int_counter + 1])
			{
				temp = arrayPtr[int_counter];
				arrayPtr[int_counter] = arrayPtr[int_counter + 1];
				arrayPtr[int_counter + 1] = temp;
				exit = false;
			}
	}
}
/* ‘ункци€ дл€ вывода массива */

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << endl;
	cout << endl;
}

//1 задача
template<typename myType>
bool checkBrackets(char c[])
{
	myType k = 0;
	for (size_t i = 0; i < strlen(c); i++)
	{
		if (c[i] == '(') k++;
		else if (c[i] == ')') k--;
		if (c[i] == '[') k++;
		else if (c[i] == ']') k--;
		if (c[i] == '{') k++;
		else if (c[i] == '}') k--;
		if (k < 0) return false;
	}
	if (k == 0) return true;
	else return false;
}

void SortByChoice(int a[], int size, char type)
{
	switch (type)
	{
	case 'i':
		InsertionSort(a, size);
		break;
	case 's':
		selectionSort(a, size);
		break;
	case 'b':
		bubbleSort(a, size);
		break;
	default:
		cout << "Wrong selection type!" << endl;
		break;
	}
}

template<typename T>
	T summa(T a, T b)
	{
		return a + b;
}


int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));

	//bubbleSort
	/*cout << "Ќеотсортированный массив: " << endl;
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printArray(arr, n);
	bubbleSort(arr, n);
	cout << "ќтсортированный массив: " << endl;
	printArray(arr, n);*/

	//classwork
	/*char c[50] = "Hello";
	cin >> c;
	for (size_t i = 0; i < strlen(c); i++)
	{
		cout << c[i] << endl;
	}*/
	
	//1
	/*char c[50] = "[{(text)(text)(text)}]";
	cout << checkBrackets(c) << endl;*/

	//choicesSort
	/*cout << "Ќеотсортированный массив: " << endl;
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printArray(arr, n);
	choicesSort(arr, n);
	cout << "ќтсортированный массив: " << endl;
	printArray(arr, n);*/

	//InsertionSort
	/*cout << "Ќеотсортированный массив: " << endl;
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printArray(arr, n);
	InsertionSort(arr, n);
	cout << "ќтсортированный массив: " << endl;
	printArray(arr, n);*/

	//selectionSort
	/*cout << "Ќеотсортированный массив: " << endl;
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	char SortType;
	while (true)
	{
		cout << "Enter b - to sort by bubbleSort" << endl;
		cout << "Enter i - to sort by intertionSort" << endl;
		cout << "Enter s - to sort by selectionSort" << endl;
		cout << "Enter e - to exit" << endl;
		cin >> SortType;
		if (SortType == 'e')
		{
			break;
		}

		SortByChoice(a, 7, SortType);
		printArray(a, 7);
	}
	

	int n = sizeof(arr) / sizeof(arr[0]);
	printArray(arr, n);
	selectionSort(arr, n);
	cout << "ќтсортированный массив: " << endl;
	printArray(arr, n);*/

	int b[5] = { 3.4,5.7,8.4,10.5,11.2 };
	printArray(b, 5);

	system("pause");
	return 0;
}