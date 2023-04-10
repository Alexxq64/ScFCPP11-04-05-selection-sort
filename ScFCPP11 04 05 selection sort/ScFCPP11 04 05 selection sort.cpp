#include <iostream>

void swap(int* a, int* b) // функция для смены местами двух значений
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int* arr, int n)
{
	for (int i = 0; i < n - 1; i++) {
		int min = i;
		for (int k = i + 1; k < n; k++)
			if (arr[min] > arr[k]) min = k;
		if (min != i) swap(arr + min, arr + i);
	}
}


int main()
{
	int arr[] = { 38, 27, 43, 3, 9, 82, 10 };
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	selectionSort(arr, n);
	std::cout << std::endl;
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << " ";
}

